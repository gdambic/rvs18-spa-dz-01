#pragma once
#include <SFML/Graphics.hpp>

class Cvijet
{
public:
	Cvijet(sf::RenderWindow *window);
	void draw(int& brojilo);
private:
	sf::RenderWindow *window;
	void Sunce(int& brojilo);

};

