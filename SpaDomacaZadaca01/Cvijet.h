#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
class Cvijet
{
public:
	Cvijet(sf::RenderWindow *window);
	void draw();
private:
	sf::RenderWindow *window;
};

