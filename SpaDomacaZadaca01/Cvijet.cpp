#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow * window)
{
	this->window = window;
}

void Cvijet::draw()
{
	int pos_x = 200;
	int pos_y = 200;
	sf::CircleShape flower(100);
	flower.setFillColor(sf::Color(255, 255, 0));
	flower.setOutlineThickness(40);
	flower.setOutlineColor(sf::Color(255, 0, 0));
	flower.setPosition(pos_x, pos_x);
	window->draw(flower);

	pos_x += flower.getRadius();
	pos_y += flower.getRadius() * 2 + flower.getOutlineThickness();
	sf::RectangleShape stem(sf::Vector2f(250, 10));
	stem.setFillColor(sf::Color(0, 255, 0));
	stem.rotate(90);
	stem.setPosition(pos_x, pos_y);
	window->draw(stem);

	pos_y += 125;
	sf::ConvexShape leaf;
	leaf.setPointCount(4);
	leaf.setFillColor(sf::Color(0, 255, 0));
	leaf.setPoint(0, sf::Vector2f(pos_x, pos_y));
	leaf.setPoint(1, sf::Vector2f(pos_x + 100, pos_y - 50));
	leaf.setPoint(2, sf::Vector2f(pos_x + 100 + 250, pos_y - 100 - 50));
	leaf.setPoint(3, sf::Vector2f(pos_x + 100, pos_y + 50));
	window->draw(leaf);

}

