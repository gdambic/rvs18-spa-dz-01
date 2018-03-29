#pragma once
#include <SFML/Graphics.hpp>

class Cvijet
{
public:
	Cvijet(sf::RenderWindow *window);
	~Cvijet();
	void draw();
private:
	sf::RenderWindow *window;
};

