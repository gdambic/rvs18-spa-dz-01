#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Sunce
{
public:
	Sunce(sf::RenderWindow& renderWindow);
	void draw();
	void setTrenutnaBoja(int trenutnaBoja);
	

private:
	int trenutnaBoja = 0;
	int trenutnaVelicina = 0;
	sf::RenderWindow &game_window;
	sf::Color bojeSunca[4] = { sf::Color(255,0,0,255), sf::Color(255,128,0,255), sf::Color(255,192,0,255), sf::Color(255,255,0,255) };
	int velicinaSunca[4] = { 10, 15, 20, 25 };
};


