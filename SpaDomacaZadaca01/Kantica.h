#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Kantica
{
public:
	Kantica(sf::RenderWindow& renderWindow, sf::Sprite kantica_sprite);
	void set_x(float pos_x);
	void set_y(float pos_y);
	void draw();

private:
	sf::RenderWindow &game_window;
	float pos_x = 0.0f;
	float pos_y = 0.0f;
	sf::Sprite kantica_sprite;
};

