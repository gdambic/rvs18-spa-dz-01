#include "Cvijet.h"
#include "iostream"

Cvijet::Cvijet(sf::RenderWindow * window)
{
	this->window = window;
}

void Cvijet::draw()
{
	//Sun
	sf::CircleShape sun(30);
	sun.setFillColor(sf::Color(255, 255, 0));
	sun.setPosition(-20, -20);

	//Stem of a plant
	sf::RectangleShape stem(sf::Vector2f(10,150));
	stem.setFillColor(sf::Color(0,255,0));
	stem.setPosition(200, 200);

	//Flower
	sf::CircleShape flower(30);
	flower.setFillColor(sf::Color(255, 0, 0));
	flower.setPosition(175, 175);
	flower.setOutlineThickness(5);
	flower.setOutlineColor(sf::Color(250, 150, 100));

	if (clock.getElapsedTime().asSeconds() < 3)
	{
		scale = scale + 0.00075;
		sun.setScale(scale, scale);

	}
	else if (clock.getElapsedTime().asSeconds() < 6)
	{
		scale = scale - 0.00075;
		sun.setScale(scale, scale);
	}
	else
	{
		clock.restart();
		scale = 1;
	}
	
	window->draw(sun);
	window->draw(stem);
	window->draw(flower);
	
}
