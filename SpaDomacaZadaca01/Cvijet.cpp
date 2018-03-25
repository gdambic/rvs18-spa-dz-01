#include "Cvijet.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

Cvijet::Cvijet(sf::RenderWindow* renderWindow)
{
	this->renderWindow = renderWindow;
}

void Cvijet::draw()
{
	sf::CircleShape sun(20);
	sun.setFillColor(sf::Color(255, 255, 0));
	sun.setPosition(-20, 10);


	sf::CircleShape flower(60);
	flower.setFillColor(sf::Color(255, 255, 0));
	flower.setOutlineColor(sf::Color(255, 0, 0));
	flower.setOutlineThickness(20);
	flower.setPosition(50, 100);

	sf::RectangleShape rect(sf::Vector2f(10, 200));
	rect.setFillColor(sf::Color(0, 204, 0));
	rect.setPosition(105, 170);

	sf::RectangleShape bg(sf::Vector2f(400, 400));
	bg.setFillColor(sf::Color(0, 255, 255));
	bg.setPosition(0, 0);


	sf::ConvexShape convex;
	convex.setPointCount(4);

	// define the points
	convex.setPoint(0, sf::Vector2f(115, 300));
	convex.setPoint(1, sf::Vector2f(150, 270));
	convex.setPoint(2, sf::Vector2f(230, 300));
	convex.setPoint(3, sf::Vector2f(160, 310));
	convex.setFillColor(sf::Color(0, 204, 0));


	sf::Clock clock;
	while (renderWindow->isOpen())
	{
		sf::Time elapsed = clock.restart();
		//sf::Vector2f currentSunPos(sun.getPosition());
		currentSunPos = sun.getPosition();
		currentSunPos.x += 1;
		if (currentSunPos.x == 500) {
			currentSunPos.x = -20;
		}
		sun.setPosition(currentSunPos);
		if (currentSunPos.x < 250) {
			if (sunPowerValue < 255) {
				sunPowerValue += 1;
			}
			bg.setFillColor(sf::Color(0, sunPowerValue, sunPowerValue));
		}
		else {
			if (sunPowerValue > 0) {
				sunPowerValue -= 1;
			}
			bg.setFillColor(sf::Color(0, sunPowerValue, sunPowerValue));
		}


		renderWindow->clear();
		renderWindow->draw(bg);
		renderWindow->draw(rect);
		renderWindow->draw(sun);
		renderWindow->draw(flower);
		renderWindow->draw(convex);

		renderWindow->display();
	}

}


