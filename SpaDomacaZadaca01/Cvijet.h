#pragma once
#include <SFML/Graphics.hpp>

class Cvijet
{
private:
	// Variables
	sf::RenderWindow *window;
	sf::CircleShape cvijet;
	sf::RectangleShape stapka;
	sf::ConvexShape list;
	sf::CircleShape sunce;
	sf::Texture sunceTexture;	
	sf::Texture cvijetTexture;
	sf::Texture listTexture;
	sf::Clock clock;


public:
	// Constructor
	Cvijet(sf::RenderWindow *window);

	// Drawing
	void cvijetDraw();
	void stapkaDraw();
	void listDraw();
	void sunceDraw();
	void draw(sf::RenderWindow &window);	

};

