#include "Cvijet.h"
#include <SFML\Graphics.hpp>

Cvijet::Cvijet(sf::RenderWindow * window)
{
	this->window = window;
}

void Cvijet::draw()
{

	//stabiljka
	sf::RectangleShape line(sf::Vector2f(5, 150));
	line.setPosition(150, 250);
	line.setFillColor(sf::Color::Green);
	line.setOutlineThickness(0);
	line.setOutlineColor(sf::Color::Green);
	window->draw(line);


	//stabiljka2
	sf::RectangleShape line1(sf::Vector2f(5, 150));
	line1.setPosition(300, 250);
	line1.setFillColor(sf::Color::Green);
	line1.setOutlineThickness(0);
	line1.setOutlineColor(sf::Color::Green);
	window->draw(line1);


	//cvjetiste
	sf::CircleShape shape(30);
	shape.setPosition(120, 170);
	shape.setFillColor(sf::Color::Yellow);
	shape.setOutlineThickness(30);
	shape.setOutlineColor(sf::Color::Magenta);
	window->draw(shape);

	//cvjetiste2
	sf::CircleShape shape1(30);
	shape1.setPosition(270, 170);
	shape1.setFillColor(sf::Color::White);
	shape1.setOutlineThickness(25);
	shape1.setOutlineColor(sf::Color::Cyan);
	window->draw(shape1);


	//list
	sf::CircleShape leaf1(30);
	leaf1.setPosition(150, 300);
	leaf1.setFillColor(sf::Color::Green);
	window->draw(leaf1);

	//list2
	sf::CircleShape leaf2(30);
	leaf2.setPosition(245, 300);
	leaf2.setFillColor(sf::Color::Green);
	window->draw(leaf2);

	//sunce
	sf::CircleShape sun(50);
	sun.setPosition(1, 1);
	sun.setFillColor(sf::Color::Yellow);
	window->draw(sun);

	sf::RectangleShape sunrays1(sf::Vector2f(52, 5));
	sunrays1.setPosition(88, 85);
	sunrays1.setFillColor(sf::Color::Yellow);
	sunrays1.rotate(45);
	window->draw(sunrays1);

	sf::RectangleShape sunrays2(sf::Vector2f(48, 5));
	sunrays2.setPosition(100, 50);
	sunrays2.setFillColor(sf::Color::Yellow);
	sunrays2.rotate(8);
	window->draw(sunrays2);

	sf::RectangleShape sunrays3(sf::Vector2f(53, 5));
	sunrays3.setPosition(50, 100);
	sunrays3.setFillColor(sf::Color::Yellow);
	sunrays3.rotate(88);
	window->draw(sunrays3);

	sf::RectangleShape sunrays4(sf::Vector2f(50, 5));
	sunrays4.setPosition(115, 0.5);
	sunrays4.setFillColor(sf::Color::Yellow);
	sunrays4.rotate(140);
	window->draw(sunrays4);
	
	sf::RectangleShape sunrays5(sf::Vector2f(50, 5));
	sunrays5.setPosition(25, 90);
	sunrays5.setFillColor(sf::Color::Yellow);
	sunrays5.rotate(130);
	window->draw(sunrays5);

	//oblak
	sf::CircleShape cloud1(40);
	cloud1.setPosition(300, 30);
	cloud1.setFillColor(sf::Color::Blue);
	window->draw(cloud1);

	sf::CircleShape cloud2(35);
	cloud2.setPosition(250, 35);
	cloud2.setFillColor(sf::Color::Blue);
	window->draw(cloud2);

	sf::CircleShape cloud3(40);
	cloud3.setPosition(200, 35);
	cloud3.setFillColor(sf::Color::Blue);
	window->draw(cloud3);

}
