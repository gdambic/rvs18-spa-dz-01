#include "Cvijet.h"
#include <iostream>
#include <SFML/Graphics.hpp>


Cvijet::Cvijet(sf::RenderWindow* window)
{
	mwindow = window;
}

void Cvijet::draw()
{
	
	sf::RectangleShape line(sf::Vector2f(150, 15));
	line.setFillColor(sf::Color(0, 255, 127));
	line.rotate(90);
	line.setPosition(200, 220);

	sf::CircleShape circle(35);
	circle.setFillColor(sf::Color(255, 192, 203));
	circle.setPosition(160, 150);
	circle.setOutlineThickness(20);
	circle.setOutlineColor(sf::Color(178, 34, 34));

	sf::ConvexShape convex;
	convex.setPointCount(3);
	convex.setFillColor(sf::Color(0, 255, 127));
	convex.setPoint(0, sf::Vector2f(100, 220));
	convex.setPoint(1, sf::Vector2f(185, 315));
	convex.setPoint(2, sf::Vector2f(150, 260));

	sf::CircleShape sun(20);
	sun.setFillColor(sf::Color::Yellow);
	sun.setPosition(30, 30);


	while (mwindow->isOpen())
	{
		sf::Event event;
		while (mwindow->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				mwindow->close();
		}
		mwindow->clear();
		mwindow->draw(line);
		mwindow->draw(circle);
		mwindow->draw(convex);
		mwindow->draw(sun);
		mwindow->display();
	}

	
	
}


