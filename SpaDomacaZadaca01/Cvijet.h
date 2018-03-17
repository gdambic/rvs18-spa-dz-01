#pragma once
#include <SFML/Graphics.hpp>

class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	void draw();

private:
	sf::RenderWindow* window;
	sf::ConvexShape petal;
	void CreatePetal(const double x, const double y);
	sf::Vector2f petal_position = petal.getPosition();
};

