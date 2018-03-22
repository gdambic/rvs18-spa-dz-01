#include "Cvijet.h"
#include <SFML/Graphics.hpp>

Cvijet::Cvijet(sf::RenderWindow *window) {
	this->window = window;
}

void Cvijet::draw() {

#pragma region *DrawFlower*
	sf::CircleShape shape(50);
	shape.setFillColor(sf::Color(139, 69, 19));
	shape.setOutlineThickness(10);
	shape.setOutlineColor(sf::Color(255, 255, 0));
	shape.setPosition(20, 50);

	sf::RectangleShape line(sf::Vector2f(150, 5));
	line.rotate(90);
	line.setFillColor(sf::Color(0, 100, 0));
	line.setPosition(70, 160);

	sf::ConvexShape petal;
	petal.setFillColor(sf::Color(100, 250, 50));
	petal.setPointCount(4);
	petal.setPoint(0, sf::Vector2f(0, 0));
	petal.setPoint(1, sf::Vector2f(150, -50));
	petal.setPoint(2, sf::Vector2f(100, -20));
	petal.setPoint(3, sf::Vector2f(50, 0));
	petal.setPosition(70, 220);

	window->draw(shape);
	window->draw(line);
	window->draw(petal);
#pragma endregion
}