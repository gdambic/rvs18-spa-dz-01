#include "Cvijet.h"

//#include <thread>
//#include<chrono>
//using namespace std::chrono_literals;
//using std::chrono::system_clock;

Cvijet::Cvijet(sf::RenderWindow *window)
{
	this->window = window;
}


void Cvijet::draw() {
	//isprike na redundantnom kodu :/
	sf::Clock clock;
	sf::Time elapsed = clock.getElapsedTime();

	if (elapsed.asMicroseconds() == 1)
	{
		sf::CircleShape shape(30);
		shape.setFillColor(sf::Color(255, 255, 255));
		shape.setPosition(100, 100);
		sf::RectangleShape line(sf::Vector2f(150, 5));
		line.setFillColor(sf::Color(0, 128, 0));
		line.rotate(90);
		line.setPosition(130, 160);
		(*window).draw(shape);
		(*window).draw(line);
	}
	else
	{
		sf::CircleShape shape(30);
		shape.setFillColor(sf::Color(255, 215, 0));
		shape.setPosition(100, 100);
		sf::RectangleShape line(sf::Vector2f(150, 5));
		line.setFillColor(sf::Color(0, 128, 0));
		line.rotate(90);
		line.setPosition(130, 160);
		(*window).draw(shape);
		(*window).draw(line);
	}
	/*for (int i = 0; i < 5000; i++)
	{

	}*/
	clock.restart();
}

Cvijet::~Cvijet()
{
}
