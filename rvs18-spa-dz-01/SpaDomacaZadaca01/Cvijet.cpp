#include <SFML/Graphics.hpp>
#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow * window) {
	this->window = window;
}


void Cvijet::draw() {

	// drska

	sf::RectangleShape line(sf::Vector2f(10, 300));

	line.setPosition(180, 200);
	line.setFillColor(sf::Color::Green);
	line.setOutlineThickness(5);
	line.setOutlineColor(sf::Color::Green);
	line.rotate(25);
	window->draw(line);

	//cvijet

	sf::CircleShape circle1(60, 20);

	circle1.setFillColor(sf::Color::Yellow);
	circle1.setPosition(140, 100);
	circle1.setOutlineColor(sf::Color::Magenta);
	circle1.setOutlineThickness(50);
	window->draw(circle1);

	// list

	sf::ConvexShape leaf;

	leaf.setPointCount(4);
	leaf.setFillColor(sf::Color::Green);
	leaf.setPoint(0, sf::Vector2f(130, 300));
	leaf.setPoint(1, sf::Vector2f(300, 360));
	leaf.setPoint(2, sf::Vector2f(250, 300));
	leaf.setPoint(3, sf::Vector2f(130, 320));
	window->draw(leaf);

	// mjesec

	sf::CircleShape circle2(30, 30);

	circle2.setFillColor(sf::Color::White);
	circle2.setPosition(20, 20);
	window->draw(circle2);

	sf::CircleShape circle3(30, 30);

	circle3.setFillColor(sf::Color::Black);
	circle3.setPosition(40, 15);
	window->draw(circle3);

}