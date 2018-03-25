#pragma once
#include <SFML/Graphics.hpp>

class Cvijet
{
public:
	Cvijet(sf::RenderWindow *window);
	void draw();
private:
	sf::RenderWindow *myWindow;
	float radius;
	bool granica;
};