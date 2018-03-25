#pragma once
#include <SFML/Graphics.hpp>
class Cvijet
{
public:
	Cvijet(sf::RenderWindow* renderWindow);
	void draw();
private:
	sf::RenderWindow* renderWindow;
	sf::Vector2f currentSunPos;
	float sunPowerValue = 0;
};

