#include <SFML/Graphics.hpp>
#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow * window){
	this->window = window;
}

void Cvijet::draw()
{
	//stabiljka
	sf::RectangleShape stem(sf::Vector2f(7, 98));
	stem.setPosition(75, 160);
	stem.setFillColor(sf::Color::Green);
	stem.setOutlineColor(sf::Color::Green);
	window->draw(stem);


	//glava
	sf::CircleShape head(30);
	head.setFillColor(sf::Color::Yellow);
	head.setPosition(50, 80);
	head.setOutlineThickness(25);
	head.setOutlineColor(sf::Color(94, 151, 246));
	window->draw(head);

	//list
	sf::ConvexShape leaf(30);
	leaf.setPointCount(4);
	leaf.setPoint(0, sf::Vector2f(80, 190));
	leaf.setPoint(1, sf::Vector2f(150, 170));
	leaf.setPoint(2, sf::Vector2f(220, 190));
	leaf.setPoint(3, sf::Vector2f(150,210));
	leaf.setFillColor(sf::Color::Green);
	window->draw(leaf);

	//sunce
	sf::CircleShape sun(20);
	sun.setFillColor(sf::Color::Yellow);
	sun.setPosition(1, 1);
	window->draw(sun);

}

