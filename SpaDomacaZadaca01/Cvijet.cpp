#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* window) {
	this->mainWindow = window;
}
void Cvijet::draw() {
	

	/*sf::Clock clock;
	sf::Time elapsed = clock.getElapsedTime();
	std::cout << elapsed.asSeconds() << std::endl;*/

	//Latica1 Centar Gore
	sf::CircleShape latica_krug1(40);
	latica_krug1.setFillColor(sf::Color(0, 76, 153));
	latica_krug1.setPosition(150, 40);
	mainWindow->draw(latica_krug1);

	sf::CircleShape latica_trokut1(40, 3);
	latica_trokut1.setFillColor(sf::Color(0, 76, 153));
	latica_trokut1.setPosition(230, 160);
	latica_trokut1.setRotation(180);
	mainWindow->draw(latica_trokut1);


	//Latica2 Desno gore
	sf::CircleShape latica_krug2(40);
	latica_krug2.setFillColor(sf::Color(0, 76, 153));
	latica_krug2.setPosition(230, 75);
	mainWindow->draw(latica_krug2);

	sf::CircleShape latica_trokut2(40, 3);
	latica_trokut2.setFillColor(sf::Color(0, 76, 153));
	latica_trokut2.setPosition(290, 120);
	latica_trokut2.setRotation(120);
	mainWindow->draw(latica_trokut2);

	//Latica3 Desno dolje
	sf::CircleShape latica_krug3(40);
	latica_krug3.setFillColor(sf::Color(0, 76, 153));
	latica_krug3.setPosition(230, 160);
	mainWindow->draw(latica_krug3);

	sf::CircleShape latica_trokut3(40, 3);
	latica_trokut3.setFillColor(sf::Color(0, 76, 153));
	latica_trokut3.setPosition(250, 125);
	latica_trokut3.setRotation(60);
	mainWindow->draw(latica_trokut3);

	//Latica4 Centar dolje
	sf::CircleShape latica_krug4(40);
	latica_krug4.setFillColor(sf::Color(0, 76, 153));
	latica_krug4.setPosition(150, 195);
	mainWindow->draw(latica_krug4);

	sf::CircleShape latica_trokut4(40, 3);
	latica_trokut4.setFillColor(sf::Color(0, 76, 153));
	latica_trokut4.setPosition(150, 155);
	latica_trokut4.setRotation(0);
	mainWindow->draw(latica_trokut4);

	//Latica5 Lijevo Gore
	sf::CircleShape latica_krug5(40);
	latica_krug5.setFillColor(sf::Color(0, 76, 153));
	latica_krug5.setPosition(70, 75);
	mainWindow->draw(latica_krug5);

	sf::CircleShape latica_trokut5(40, 3);
	latica_trokut5.setFillColor(sf::Color(0, 76, 153));
	latica_trokut5.setPosition(200, 120);
	latica_trokut5.setRotation(120);
	mainWindow->draw(latica_trokut5);

	//Latica6 Lijevo Dolje
	sf::CircleShape latica_krug6(40);
	latica_krug6.setFillColor(sf::Color(0, 76, 153));
	latica_krug6.setPosition(70, 160);
	mainWindow->draw(latica_krug6);

	sf::CircleShape latica_trokut6(40, 3);
	latica_trokut6.setFillColor(sf::Color(0, 76, 153));
	latica_trokut6.setPosition(160, 125);
	latica_trokut6.setRotation(60);
	mainWindow->draw(latica_trokut6);

	
	//Centar
	sf::CircleShape centar(25);
	centar.setFillColor(sf::Color(255, 255, 30));
	centar.setPosition(165, 135);
	mainWindow->draw(centar);
	

}