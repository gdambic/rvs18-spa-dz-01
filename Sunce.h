#pragma once
#include <SFML/Graphics.hpp>
class Sunce {
public:
	Sunce(sf::RenderWindow *window);
	void set_sun(sf::CircleShape& Sun_circle, float radijus, float radijus2, float boja1, float boja2, float boja3);
	void draw();
private:
	sf::RenderWindow *window;
};