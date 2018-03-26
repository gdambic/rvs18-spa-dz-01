#include "Cvijet.h"
#include <string>
#include <SFML/Graphics.hpp>



Cvijet::Cvijet(sf::RenderWindow *window)
{
	this->window = window;
}



void Cvijet::draw()
{

#pragma region *Cvjetic*
	sf::CircleShape oblik(50);
	oblik.setFillColor(sf::Color(190, 180, 71));
	oblik.setOutlineColor(sf::Color(220, 255, 10));
	oblik.setOutlineThickness(15);
	oblik.setPosition(130, 50);

	sf::ConvexShape list;
	list.setFillColor(sf::Color(0, 100, 0));
	list.setPointCount(4);
	list.setPoint(0, sf::Vector2f(0, 0));
	list.setPoint(1, sf::Vector2f(130, -70));
	list.setPoint(2, sf::Vector2f(110, -30));
	list.setPoint(3, sf::Vector2f(70, 10));
	list.setPosition(179, 200);

	sf::RectangleShape stab(sf::Vector2f(150, 5));
	stab.rotate(90);
	stab.setFillColor(sf::Color(0, 100, 0));
	stab.setPosition(180, 165);

	window->draw(oblik);
	window->draw(stab);
	window->draw(list);
	
#pragma endregion
}
