#include "Sunce.h"
#include <SFML/Graphics.hpp>

Sunce::Sunce(sf::RenderWindow *window) {
	this->window = window;
}


void Sunce::draw() {


	sf::CircleShape shape(25);
	shape.setFillColor(sf::Color(253, 184, 19));
	shape.setPosition(5, 5);

	sf::Clock clock;

	sf::Time Elapsed = clock.getElapsedTime();

	//std::cout << Elapsed.asMicroseconds() << std::endl;

	if (Elapsed.asSeconds() == 1)
	{
		sf::CircleShape shape(50);
	}

	if (Elapsed.asMilliseconds() == 2)
	{
		sf::CircleShape shape( 20);
	}


	if (Elapsed.asSeconds() == 3)
	{
		sf::CircleShape shape(30);
	}


	if (Elapsed.asSeconds() == 4)
	{
		sf::CircleShape shape(10);
	}
	if (Elapsed.asSeconds() == 5)
	{
		sf::CircleShape shape(50);
	}

	if (Elapsed.asSeconds() == 6)
	{
		sf::CircleShape shape(60);
	}

	clock.restart();

	window->draw(shape);

}
