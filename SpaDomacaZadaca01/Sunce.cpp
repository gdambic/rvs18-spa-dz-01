#include "Sunce.h"



Sunce::Sunce(sf::RenderWindow& renderWindow) : game_window(renderWindow)
{
}

void Sunce::draw()
{
	sf::CircleShape shape(50);

	shape.setRadius(velicinaSunca[trenutnaVelicina]);
	shape.setPosition(sf::Vector2f(532.0f, 48.0f));
	shape.setOrigin(shape.getRadius(), shape.getRadius());
	// set the shape color to green
	shape.setFillColor(bojeSunca[trenutnaBoja]);
	game_window.draw(shape);
}

void Sunce::setTrenutnaBoja(int trenutnaBoja)
{
	this->trenutnaBoja = trenutnaBoja;
	this->trenutnaVelicina = trenutnaBoja;
}


 