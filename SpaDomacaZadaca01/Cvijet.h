#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include<iostream>

class Cvijet
{
private:
	sf::RenderWindow& Window;
	sf::Vector2f pozicija1 = sf::Vector2f(-130, -200);
	sf::Vector2f pozicija2 = sf::Vector2f(10, -200);
	double promjena = 0.5;
public:
	void setNovaPozicija();
	Cvijet(sf::RenderWindow& window);
	void draw();

	
};

