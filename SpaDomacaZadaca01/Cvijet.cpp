#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow * window)
{
	this->window = window;
}

void Cvijet::draw()
{
	sf::CircleShape sun;
	sun.setFillColor(sf::Color(255, 255, 0));

	sf::CircleShape flower;
	flower.setFillColor(sf::Color(255, 255, 0));
	flower.setOutlineColor(sf::Color(255, 0, 0));

	sf::RectangleShape stem(sf::Vector2f(150, 10));
	stem.setFillColor(sf::Color(0, 255, 0));
	stem.rotate(90);
	stem.setPosition(105, 190);

	sf::ConvexShape leaf;
	leaf.setFillColor(sf::Color(0, 255, 0));
	leaf.setPointCount(4);
	leaf.setPoint(0, sf::Vector2f(50, 120));
	leaf.setPoint(1, sf::Vector2f(120, 80));
	leaf.setPoint(2, sf::Vector2f(250, 60));
	leaf.setPoint(3, sf::Vector2f(120, 130));
	leaf.setPosition(50, 150);

	sf::Time elapsed = clock.getElapsedTime();
	if (elapsed.asSeconds() > 0.5)
	{
		animation_counter++;
		if (animation_counter > 3)
		{
			animation_counter = 0;
		}
		clock.restart();
	}

	switch (animation_counter) {
	case 0:
		
		sun.setRadius(20);
		sun.setPosition(230, 20);
		flower.setRadius(80);
		flower.setOutlineThickness(10);
		flower.setPosition(20, 20);
		window->clear();
		window->draw(sun);
		window->draw(flower);
		window->draw(stem);
		window->draw(leaf);
		window->display();
		break;

	case 1:

		sun.setRadius(17);
		sun.setPosition(300, 80);
		flower.setRadius(65);
		flower.setPosition(35, 35);
		flower.setOutlineThickness(25);
		window->clear();
		window->draw(sun);
		window->draw(flower);
		window->draw(stem);
		window->draw(leaf);
		window->display();
		break;

	case 2:

		sun.setRadius(15);
		sun.setPosition(330, 150);
		flower.setRadius(50);
		flower.setPosition(50, 50);
		flower.setOutlineThickness(40);
		window->clear();
		window->draw(sun);
		window->draw(flower);
		window->draw(stem);
		window->draw(leaf);
		window->display();
		break;

	case 3:

		sun.setRadius(10);
		sun.setPosition(350, 200);
		flower.setRadius(35);
		flower.setPosition(65, 65);
		flower.setOutlineThickness(55);
		window->clear();
		window->draw(sun);
		window->draw(flower);
		window->draw(stem);
		window->draw(leaf);
		window->display();

	default:
		break;
	}
	
}
