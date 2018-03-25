#include "list.h"

list::list(sf::RenderWindow *window)
{
	this->window = window;
}

void list::iscrtaj()
{
	sf::ConvexShape list(3);
	list.setPoint(0, sf::Vector2f(400, 650));
	list.setPoint(1, sf::Vector2f(600, 290));
	list.setPoint(2, sf::Vector2f(600, 490));
	list.setFillColor(sf::Color(0, 255, 0));

	sf::Clock sat;
	sf::Time proslo = sat.getElapsedTime();

	if (proslo.asMicroseconds()==1)
	{
		list.setPoint(0, sf::Vector2f(400, 650));
		list.setPoint(1, sf::Vector2f(600, 290));
		list.setPoint(2, sf::Vector2f(600, 490));
		
	}
	if (proslo.asMicroseconds() == 0)
	{
		list.setPoint(0, sf::Vector2f(400, 650));
		list.setPoint(1, sf::Vector2f(600, 390));
		list.setPoint(2, sf::Vector2f(600, 590));
	}
	sat.restart();
	window->draw(list);
}
