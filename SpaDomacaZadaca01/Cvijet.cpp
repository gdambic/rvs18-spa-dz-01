#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow * window) {
	srand(std::time(NULL));
	ptrWin = window;
	destroyedCount = 0;
	circpoints = 60;
	TimeTemp = 5000, tCount = 0, shipCount = 0;
	radius = 60.f;
	flowerHitPoints = 100.f;
	Offset.x = 500.f;	Offset.y = 200.f;
	PPos.x = 400.f;		PPos.y = 375.f;
	jump = 0, isAlive = 1;
	texLoaded = 1, fontLoaded = 1;

	if (!texSky.loadFromFile("res/tex/background.jpg") || !texExplosion.loadFromFile("res/tex/explosion.png") ||
		!texStalk.loadFromFile("res/tex/stalk.png") || !texFlower.loadFromFile("res/tex/flower.png") ||
		!texBall.loadFromFile("res/tex/ball.png") || !texFlame.loadFromFile("res/tex/flame_4.png") ||
		!texRain.loadFromFile("res/tex/rain.png") || !texProj.loadFromFile("res/tex/projectile.png") ||
		!texShip.loadFromFile("res/tex/shipHalf.png") || !texFlowerEnd.loadFromFile("res/tex/smoke.png")) {
		std::cout << "UNABLE TO LOAD TEXTURES.\n";
		texLoaded = 0;
	}
	else std::cout << "TEXTURES LOADED.\n";
	if (!font.loadFromFile("res/font/arial.ttf")) {
		std::cout << "UNABLE TO LOAD FONT.\n";
		fontLoaded = 0;
		//gun.setFontText(font, "Ready", 16, sf::Color::Green, sf::Text::Italic);
	}
	else std::cout << "FONT LOADED.\n";
	texSky.setSmooth(true);
	texExplosion.setSmooth(true);
	texStalk.setSmooth(true);
	texFlower.setSmooth(true);
	texFlowerEnd.setSmooth(true);
	texBall.setSmooth(true);
	texFlame.setSmooth(true);
	texRain.setSmooth(true);
	texProj.setSmooth(true);

	text.setFont(font);
	text.setString("Use arrow keys\n\tand mouse");
	text.setCharacterSize(16);
	text.setFillColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold); 

	textLifeRemaining.setFont(font);
	textLifeRemaining.setString("");
	textLifeRemaining.setCharacterSize(27);
	textLifeRemaining.setFillColor(sf::Color::Green);
	textLifeRemaining.setStyle(sf::Text::Bold);

	gun = ShootMechanics(ptrWin);
	gun.setColor(sf::Color::Red);
	gun.setLifeTime(1000);

	tSpaceShip.SetWinPtr(ptrWin);
	tSpaceShip.SetState(1);
	tSpaceShip.LoadTex(&texShip, &texExplosion);
	//SpaceShip.push_back(tSpaceShip);

	Tube = sf::RectangleShape(sf::Vector2f(5.f, 50.f));
	Tube.setFillColor(sf::Color(105, 25, 25));
	Tube.setOrigin(2.5f, 0.f);

	Ball = sf::CircleShape(25, circpoints);
	Ball.setFillColor(sf::Color(255, 0, 0));
	Ball.setTexture(&texBall);
	Ball.setPosition(PPos);

	stalk = sf::RectangleShape(sf::Vector2f(20.f, 400.f));
	stalk.setFillColor(sf::Color(0, 255, 0));
	stalk.setOrigin(sf::Vector2f(0.f, 0.f));
	stalk.setScale(.4f, .4f);
	stalk.setTexture(&texStalk);

	flower = sf::Sprite(texFlower);
	flower.setScale(.2f, .2f);
	flower.setColor(sf::Color(177, 177, 177));

	sky.setTexture(texSky);
	sky.setPosition(sf::Vector2f(0.f, 0.f));

	flowerEnd = sf::Sprite(texFlowerEnd);
	flowerEnd.setColor(sf::Color(255, 255, 255, 64));
	flowerEnd.setPosition(372, 72);

	flame[0] = sf::Sprite(texFlame);
	flame[1] = sf::Sprite(texFlame);
	flame[2] = sf::Sprite(texFlame);
	flame[3] = sf::Sprite(texFlame);
	flame[4] = sf::Sprite(texFlame);

	flame[0].setPosition(85.f, 95.f);
	flame[1].setPosition(230.f, 130.f);
	flame[2].setPosition(340.f, 155.f);
	flame[3].setPosition(552.f, 205.f);
	flame[4].setPosition(598.f, 210.f);

	flame[0].setScale(.25f, .25f);
	flame[1].setScale(.21f, .21f);
	flame[2].setScale(.17f, .17f);
	flame[3].setScale(.1f, .1f);
	flame[4].setScale(.09f, .09f);

	rain = sf::Sprite(texRain);

	frame = .0f; animSpeed = 0.6f; frameCount = 15;
	frameFlame = .0f; animSpeedFlame = 0.3f; frameCountFlame = 24;
	frameRain = .0f; animSpeedRain = 0.8f; frameCountRain = 8;
	frameProj = .0f; animSpeedProj = 0.4f; frameCountProj = 5;

	BeginningTime = sf::Clock().getElapsedTime();
	EndTime = sf::Clock().getElapsedTime();

	CurrentClock.restart(); 
	RandClock.restart();
}

bool Cvijet::draw() {
	if (!texLoaded || !fontLoaded)return 1;
	if (BeginningTime.asMilliseconds() == 0)BeginningTime = CurrentClock.getElapsedTime();

	randTime = RandClock.getElapsedTime();


	if (randTime.asMilliseconds() > TimeTemp) {
		RandClock.restart();
		TimeTemp = 3200 + rand() % 2300 - 27 * time.asSeconds();	// -int(sqrt(time.asMilliseconds()) * 7);
		tSpaceShip.SetPos(sf::Vector2f(-120 + rand() % 2 * 1240.f, 50 + rand() % 200));
		SpaceShip.push_back(tSpaceShip);
		//std::cout << "ENEMY SPACESHIP SPAWNED (ID_" << shipCount++ << ")\t->\ttime\t" << TimeTemp << "@" << time.asMilliseconds() << "\n";
	}

	//Sky - background
	ptrWin->draw(sky);

	//send player and mouse location, apply transformations and draw projectile
	MPosition = sf::Mouse::getPosition(*ptrWin);
	if (!gun.isFiring()) {
		gun.setOrigin(PPos + sf::Vector2f(17.5f, 25.f));	//texture center
		gun.setTarget(sf::Vector2f(MPosition));
	}
	projectile = gun.draw();
	projectile.setScale(.5f, .5f);
	projectile.setTexture(texProj);
	frameProj += animSpeedProj;
	if (frameProj > frameCountProj) frameProj -= frameCountProj;
	projectile.setTextureRect(sf::IntRect(int(frameProj) * 25, 0, 25, 50));
	if (gun.isFiring())
		ptrWin->draw(projectile);
	
	//PLAYER
	//movement left, right and jumpjing mechanics; limit movement to screen limits (0, 1000), Rball=25;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		if (PPos.x > 0)
			PPos.x -= 3;
		else PPos.x = 0;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		if (PPos.x < 950)
			PPos.x += 3;
		else PPos.x = 950;
	}
	//jumping
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !jump) {
		jump = 1;
		tCount = 20;
	}
	if (jump) {
		if (tCount > 0)
			PPos.y -= static_cast<float>(pow(tCount--, 2) / 100);
		else PPos.y += static_cast<float>(pow(abs(tCount--), 2) / 100);
		if (tCount == -21) {
			tCount = 0;
			jump = 0;
		}
	}
	else if (PPos.y < 345)PPos.y++;

	//apply transformations to ball and draw it
	Ball.move(sf::Vector2f(PPos.x, PPos.y) - Ball.getPosition());
	Tube.move(sf::Vector2f(PPos.x + 25.f, PPos.y + 25.f) - Tube.getPosition());
	Tube.setRotation(float(90 + (atan2((PPos.y - MPosition.y + 25.f), (PPos.x - MPosition.x + 25.f)))*(180 / PI)));
	ptrWin->draw(Ball);
	ptrWin->draw(Tube);
	//set text location and caption (above ball) and draw it
	time = CurrentClock.getElapsedTime();
	if (time.asMilliseconds() < 4000) {
		text.move(sf::Vector2f(PPos.x - 40, PPos.y - 40) - text.getPosition());
		ptrWin->draw(text);
	}
	else {
		text.setString(gun.getText());
		text.move(sf::Vector2f(PPos.x - 20, PPos.y - 40) - text.getPosition());
		ptrWin->draw(text);
	}

	//animate flames
	frameFlame += animSpeedFlame;
	if (frameFlame > frameCountFlame) frameFlame -= frameCountFlame;
	for (int i = 0; i < 5; i++) {
		flame[i].setTextureRect(sf::IntRect(int(frameFlame) * 375, 0, 375, 375));
		ptrWin->draw(flame[i]);
	}

	//STALK
	//get angle in interval [-1, 1]
	angle = static_cast<float>(sin((static_cast<int>(time.asMilliseconds() / 20.f) % 360) * PIdiv180 - PI / 10));
	//apply angle to interval [-5, 5] from default rotation (180°)
	stalk.setRotation(180.f);
	stalk.setRotation(stalk.getRotation() - 5 * angle);
	//apply transformations and draw it
	stalk.setPosition(Offset.x, 2.1f * Offset.y);
	ptrWin->draw(stalk);

	//set flower position and draw if alive
	if (isAlive) {
		ptrWin->draw(flower);
		float move = (time.asMilliseconds() % 7200) / 3600.f;
		flower.setPosition(Offset.x * .89f + static_cast<float>(cos((57.f * PIdiv180) + move * PI)) / 3.5f * radius,
			Offset.y + static_cast<float>(sin((57.f * PIdiv180) + move * PI)) / 5.f * radius);
	}

	//animate flowerEnd
	if (!isAlive) {
		frame += animSpeed;
		if (frame > frameCount) frame -= frameCount;
		flowerEnd.setTextureRect(sf::IntRect(int(frame) * 256, 0, 256, 256));
		ptrWin->draw(flowerEnd);
	}

	//draw spaceships
	for (unsigned int i = 0; i < SpaceShip.size(); i++) {
		if (SpaceShip[i].GetState())
			if (gun.isFiring())
				if (SpaceShip[i].isHit(projectile.getPosition())) {
					SpaceShip[i].Destroy();
					if(isAlive)
						destroyedCount++;
				}
		SpaceShip[i].draw();
	}

	//remove destroyed spaceships from vector
	SpaceShip.erase(std::remove_if(SpaceShip.begin(), SpaceShip.end(), [](Ship& s) { return s.GetToRemove(); }), SpaceShip.end());
	shipCount = SpaceShip.size();

	//check for flower hits and count
	int num_hits = std::count_if(SpaceShip.begin(), SpaceShip.end(), [&](Ship s) {
		return	s.GetIsFiring() && s.GetState() &&
			s.GetPos().x > (flower.getPosition()).x &&
			s.GetPos().x < (flower.getPosition()).x + 100; });

	if (num_hits != 0)	//hits detected
		flowerHitPoints -= num_hits * .3718f;
	
	//check remaining flower hit points
	if (flowerHitPoints > 0) {
		textLifeRemaining.setFillColor(sf::Color((255 * (1 - flowerHitPoints / 100)), (255 * flowerHitPoints / 100), 0));
		ss << "\t" << flowerHitPoints << "%";
	}
	else {
		if (EndTime.asMilliseconds() == 0)EndTime = CurrentClock.getElapsedTime();
		ss << "GAME OVER\n\n\tYou survived " << (EndTime - BeginningTime).asMilliseconds() << "ms\n\tShips destroyed " << destroyedCount << "\n\n\t\tPress F5 to restart";
	}

	//write text to screen
	textLifeRemaining.setString(ss.str());
	textLifeRemaining.setPosition(flower.getPosition() - sf::Vector2f(40.f, 150.f));
	ptrWin->draw(textLifeRemaining);
	ss.str(std::string());

	//end game condition
	if (flowerHitPoints < 0) {
		isAlive = 0;
		flowerHitPoints = 0;
	}

	//animate rain
	frameRain += animSpeedRain;
	if (frameRain > frameCountRain) frameRain -= frameCountRain;
	rain.setTextureRect(sf::IntRect(int(frameRain) * 1130, 0, 1130, 613));
	rain.setPosition(0.f, 0.f);
	ptrWin->draw(rain);

	return 0;
}

void Cvijet::Restart() {
	isAlive = 1;
	flowerHitPoints = 100;
	SpaceShip.clear();
	shipCount = 0;
	destroyedCount = 0;
	BeginningTime = sf::Clock().getElapsedTime();
	EndTime = sf::Clock().getElapsedTime();
	CurrentClock.restart();
	RandClock.restart();
}

bool Cvijet::GetIsAlive() {
	return isAlive;
}
