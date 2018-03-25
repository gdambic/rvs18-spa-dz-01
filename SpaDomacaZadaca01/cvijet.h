#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
class cvijet
{
public:
	cvijet(sf::RenderWindow *window);
	
	void iscrtaj();

private:
	sf::RenderWindow *window;
};

