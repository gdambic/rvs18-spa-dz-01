#include "Cvijet.h"
#include <iostream>
using namespace sf;

Cvijet::Cvijet(sf::RenderWindow *window)
{
	this->window = window;
}

void Cvijet::draw(int &brojilo)
{
	CircleShape circle(100);
	circle.setFillColor(Color(230, 55, 110));
	circle.setOutlineThickness(20);
	circle.setOutlineColor(sf::Color(250, 150, 100));
	circle.setPosition(200, 80);

	RectangleShape line(Vector2f(14.f, 300.f));
	line.setFillColor(sf::Color(100, 250, 50));
	line.setPosition(288, 250);

	ConvexShape convex;

	convex.setPointCount(4);
	convex.setFillColor(sf::Color(100, 250, 50));

	convex.setPoint(0, sf::Vector2f(288.f, 500.f));
	convex.setPoint(1, sf::Vector2f(400.f, 500.f));
	convex.setPoint(2, sf::Vector2f(500.f, 400.f));
	convex.setPoint(3, sf::Vector2f(388.f, 400.f));

	window->draw(line);
	window->draw(circle);
	window->draw(convex);

	Sunce(brojilo);
}

void Cvijet::Sunce(int& brojilo)
{
	CircleShape circle;
	circle.setFillColor(Color(255, 251, 31));
	if (brojilo%60 < 30)
	{
		circle.setRadius(40.0 + (brojilo % 60));
	}
	else
	{
		circle.setRadius(100.0 - (brojilo%60));
	}

	window->draw(circle);
	brojilo++;
	std::cout << brojilo << std::endl;
}
