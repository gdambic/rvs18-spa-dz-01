#pragma once
#include <SFML/Graphics.hpp>
class Cvijet
{
private:
	sf::RenderWindow* window;
	int radius_of_sunce;
	float sunce_position_x;
	float sunce_position_y; 
	sf::Color sunce_boja;
	float sunce_thickness = 0;
	short int sunce_rub_boja1;
	short int sunce_rub_boja2;
	short int sunce_rub_boja3;
	sf::Clock clock;
	sf::Clock clockFrame;

	
	
public:
	Cvijet(sf::RenderWindow* adresa);
	void set_radius_sunce(int r);
	void set_position_sunce(float x, float y);
	void set_color_sunce(sf::Color boja);
	void set_color_SunceRub(short int c1, short int c2, short int c3);
	void animacija();
	

	void draw();
};

