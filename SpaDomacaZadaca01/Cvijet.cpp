#include "Cvijet.h"
#include <cmath>


Cvijet::Cvijet(sf::RenderWindow* window)
{
	this->window = window;

}


void Cvijet::draw()
{
	CreatePetal(0,200);
	window->draw(petal);
	CreatePetal(0, 300);
	petal.
	window->draw(petal);


}

void Cvijet::CreatePetal(const double x, const double y)
{
	petal.setPointCount(10);
	petal.setPoint(0, sf::Vector2f(x, y));
	double delta = y;
	petal.setPoint(1, sf::Vector2f(20, sin(0.261799)*20+delta));
	delta = sin(0.261799) * 20 + delta;
	petal.setPoint(2, sf::Vector2f(40, sin(0.174533) * 20 + delta));
	delta =sin(0.174533) * 20 + delta;
	petal.setPoint(3, sf::Vector2f(70, delta));
	petal.setPoint(4, sf::Vector2f(90, sin(-0.174533) * 20 + delta));
	delta = y;
	petal.setPoint(5, sf::Vector2f(110, delta));
	petal.setPoint(6, sf::Vector2f(90, sin(-0.261799) * 20 + delta));
	delta = sin(-0.261799) * 20 + delta;
	petal.setPoint(7, sf::Vector2f(70, sin(-0.174533) * 20 + delta));
	delta = sin(-0.174533) * 20 + delta;
	petal.setPoint(8, sf::Vector2f(40, delta));
	petal.setPoint(9, sf::Vector2f(20, sin(0.174533) * 20 + delta));
}


