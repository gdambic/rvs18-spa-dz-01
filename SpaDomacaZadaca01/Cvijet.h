#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Cvijet {
public:
	Cvijet(sf::RenderWindow* window);
	void draw();

private:
	sf::RenderWindow* mainWindow;
};