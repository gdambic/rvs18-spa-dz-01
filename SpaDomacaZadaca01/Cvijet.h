#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	void draw();
private:
	int animation_counter = 0;
	sf::Clock clock;
	sf::RenderWindow* window;
};

