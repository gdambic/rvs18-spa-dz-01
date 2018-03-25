#include "Cvijet.h"
#include <SFML/Graphics.hpp>

Cvijet::Cvijet(sf::RenderWindow *window) {
	this->window = window;
}

void Cvijet::draw() {

#pragma region *DrawFlower*
	sf::CircleShape shape(50);
	shape.setFillColor(sf::Color(107, 15, 171));
	shape.setOutlineThickness(20);
	shape.setOutlineColor(sf::Color(216, 184, 0));
	shape.setPosition(150, 70);

	sf::RectangleShape line(sf::Vector2f(150, 5));
	line.rotate(90);
	line.setFillColor(sf::Color(0, 100, 0));
	line.setPosition(200, 180);

	sf::ConvexShape petal;
	petal.setFillColor(sf::Color(100, 250, 50));
	petal.setPointCount(4);
	petal.setPoint(0, sf::Vector2f(0, 0));
	petal.setPoint(1, sf::Vector2f(150, -70));
	petal.setPoint(2, sf::Vector2f(100, -25));
	petal.setPoint(3, sf::Vector2f(50, 0));
	petal.setPosition(200, 220);

	window->draw(shape);
	window->draw(line);
	window->draw(petal);


#pragma endregion
}
