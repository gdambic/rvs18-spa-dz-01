#include "Kantica.h"
#include <SFML/Graphics.hpp>

Kantica::Kantica(sf::RenderWindow & renderWindow, sf::Sprite kantica_sprite) : game_window(renderWindow)
{
	this->kantica_sprite = kantica_sprite;
	set_y(250.0f);
	set_x(24.0f);
}

void Kantica::set_x(float pos_x)
{
	this->pos_x = pos_x;
	kantica_sprite.setPosition(this->pos_x, this->pos_y);
}

void Kantica::set_y(float pos_y)
{
	this->pos_y = pos_y;
	kantica_sprite.setPosition(this->pos_x, this->pos_y);
}

void Kantica::draw()
{
	game_window.draw(kantica_sprite);
}
