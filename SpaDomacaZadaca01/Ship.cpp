#include "Ship.h"

void Ship::xyTransition() {
	if (!isAlive)return;
	//x transition
	if(xSpeed == 0)xSpeed = (350 + std::rand()% 300) / 100.f;
	//change direction at edge of screen
	if (Pos.x < -100)Dir = 1;
	if (Pos.x > 1100)Dir = 0;
	if(Dir)Pos.x += xSpeed;
	else Pos.x -= xSpeed;

	//y transition
	toMove = static_cast<float>(pow(20 - abs(Transition), 2) / 250);
	if (Up) {
		Transition++;
		Pos.y -= toMove;
	}
	else {
		Transition--;
		Pos.y += toMove;
	}
	//change y direction
	if (abs(Transition) == 20)Up = !Up;

	//Fire
	if (!isFiring)
		firing = fireClock.getElapsedTime();
	else firingCount++;
	if (firing.asMilliseconds() > 2000 + rand() % 3000)
		isFiring = 1;
	Fire();
	if (isFiring && firingCount >= 30) {
		fireClock.restart();
		isFiring = 0;
		firingCount = 0;
	}
}

Ship::Ship() {
	Transition = 0, frameCount = -2, firingCount = 0;
	Up = 1; Dir = 0, isFiring = 0;
	isAlive = 1; toRemove = 0;
	frame = 0.f; animSpeed = 0.6f;
	timeC = sf::milliseconds(0);
	clock.restart();
	fireClock.restart();
}

Ship::Ship(sf::RenderWindow* winPtr, sf::Vector2f Pos) {
	SetWinPtr(winPtr);
	SetPos(Pos);
	Ship();
}

void Ship::SetPos(sf::Vector2f Pos) {
	this->Pos = Pos;
}

void Ship::SetWinPtr(sf::RenderWindow * winPtr) {
	this->winPtr = winPtr;
}

void Ship::LoadTex(sf::Texture* ship, sf::Texture* explosion) {
	this->ship = ship;
	this->explosion = explosion;
	texLoaded = 1;
	SpaceShip = new sf::Sprite(*ship);
	Laser = new sf::RectangleShape(sf::Vector2f(5.f, 375.f));
	Laser->setFillColor(sf::Color(0, 0, 255, 128));
	SpaceShip->setScale(0.2, 0.2);
}

void Ship::SetState(bool state) {
	if (isAlive == state)return;
	isAlive = state;
	if(isAlive)
		frame = 0;
}

void Ship::Destroy() {
	SetState(0);
	delete Explosion;
	Explosion = new sf::Sprite(*explosion);
}

sf::Vector2f Ship::GetPos() {
	return Pos;
}

float Ship::GetXSpeed() {
	return xSpeed;
}

bool Ship::GetState() {
	return isAlive;
}

bool Ship::GetToRemove() {
	return toRemove;
}

bool Ship::isHit(sf::Vector2f Point) {
	if (!isAlive)return false;
	if (Point.x > Pos.x - 35.f + Dir * 15.f && Point.x < Pos.x + 40.f &&
		Point.y > Pos.y - 10.f && Point.y < Pos.y + 30.f) {
		//std::cout << "SPACESHIP HIT (" << Point.x << ", " << Point.y << ")\n";
		return true;
	}
	return false;
}

bool Ship::isHit(float xPoint, float yPoint) {
	return isHit(sf::Vector2f(xPoint, yPoint));
}

void Ship::Fire() {
	if (isFiring) {
		Laser->setPosition(Pos.x + 5.f, Pos.y + 10.f);
		winPtr->draw(*Laser);
	}
}

bool Ship::GetIsFiring() {
	return isFiring;
}

void Ship::draw(sf::RenderWindow* winPtr) {
	this->winPtr = winPtr;
	draw();
}

void Ship::draw() {
	//timeTot = clock.getElapsedTime();
	//timeC = clock.getElapsedTime();
	if (frameCount == 61)
		frameCount = 0;
	if (animSpeed == 0)
		animSpeed = 0.4f;
	if (isAlive) {
		xyTransition();
		if (texLoaded) {
			if (SpaceShip->getPosition() != Pos) {
				SpaceShip->setPosition(Pos);
				SpaceShip->setPosition(Pos - sf::Vector2f(22.f, -7.f));
			}
			winPtr->draw(*SpaceShip);
		}
		else {
			delete Explosion;
			Explosion = new sf::Sprite(*explosion);
			animSpeed = 0.4f;
		}
	}
	else if (!toRemove) {
		if (!texLoaded)return;
		if (frame > 64)	frame += 0.0;
		frame += animSpeed;
		bool cont = 1;
		if (frame > 64) {
			toRemove = 1; cont = 0;
			srand(std::time(NULL));
			Pos.x = static_cast<float>(-120 + (std::rand() % 2) * 1240);
			Pos.y = static_cast<float>(90 + std::rand() % 400);

			if (Pos.y == 0)
				Pos.y = static_cast<float>(90 + std::rand() % 400);
		}
		if (cont) {
			Explosion->setPosition(Pos - sf::Vector2f(85.f, 85.f));
			Explosion->setTextureRect(sf::IntRect(int(frame) * 192, 0, 192, 192));
			winPtr->draw(*Explosion);
		}
	}
	else {
		delete SpaceShip;
		delete Laser;
		delete Explosion;
	}
}