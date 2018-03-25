#include "Cvijet.h"
#include <SFML/Graphics.hpp>




Cvijet::Cvijet(sf::RenderWindow * window)
{
	this->window = window;
}

void Cvijet::draw()
{

	
	sf::RectangleShape line(sf::Vector2f(10, 300));
	line.setPosition(150, 200);
	line.setFillColor(sf::Color::Green);
	line.setOutlineThickness(0);
	line.setOutlineColor(sf::Color::Green);
	line.rotate(10);
	window->draw(line);

	sf::CircleShape krug(60, 8);
	krug.setFillColor(sf::Color::White);
	krug.setPosition(140, 100);
	krug.setOutlineColor(sf::Color::Yellow);
	krug.setOutlineThickness(50);
	
	window->draw(krug);

	sf::ConvexShape list;


	list.setPointCount(3);

	list.setFillColor(sf::Color::Green);
	list.setPoint(0, sf::Vector2f(150, 300));
	list.setPoint(1, sf::Vector2f(300, 360));
	list.setPoint(2, sf::Vector2f(300, 300));
	window->draw(list);

	


}
