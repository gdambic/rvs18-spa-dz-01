#pragma once
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"


class Cvijet
{
public:
	Cvijet(sf::RenderWindow *window);
	void Draw(float time, bool ispucan);
private:
	sf::RenderWindow *window;
	sf::Text text;
	float pozicija = 1200;
	float pozicijaDva = 800;
	float zgradeX = 1280;
	float zemljaSeKrece = 0;
	float zemljaSeKreceDva = 1200;
	float timerMetak = 36.0f;
	bool metakTrajanje;
	float metakX = 118;
	float rotacija = 0;
};

