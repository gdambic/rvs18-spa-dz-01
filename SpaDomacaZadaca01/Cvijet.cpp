#include "Cvijet.h"



Cvijet::Cvijet(sf::RenderWindow * window)
{
	this->window = window;
}

void Cvijet::draw()
{
	sf::CircleShape glava(50);
	glava.setFillColor(sf::Color(255, 250, 50));
	glava.setPosition(50, 50);
	glava.setOutlineThickness(20);
	glava.setOutlineColor(sf::Color(250, 150, 100));

	sf::RectangleShape trup(sf::Vector2f(200, 10));
	trup.setPosition(100, 150);
	trup.setFillColor(sf::Color(155, 229, 87));
	trup.rotate(90);

	sf::ConvexShape list;

	
	list.setPointCount(4);

	
	list.setPoint(0, sf::Vector2f(50, 50));
	list.setPoint(1, sf::Vector2f(30, 80));
	list.setPoint(2, sf::Vector2f(90, 80));
	list.setPoint(3, sf::Vector2f(100, 30));
	list.setFillColor(sf::Color(155, 229, 87));
	list.setPosition(70, 150);
	
	window->draw(trup);
	window->draw(glava);
	window->draw(list);
}
