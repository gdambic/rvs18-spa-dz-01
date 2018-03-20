#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "Sunce.h"

enum Stadij_Rasta
{
	Nista, Proklijalo, Stabljika, Stabljika_Cvijet, Izrastao
};

class Cvijet
{
public:


	Cvijet(sf::RenderWindow& renderWindow, Sunce& sunce, int idSunce);
	void set_Rast(int rast);
	int get_Rast() const;

	void set_Stadij_Rasta(Stadij_Rasta stadij_rasta);
	Stadij_Rasta get_Stadij_Rasta() const;

	void provjeri_Stadij(int rast);

	void set_x(float pos_x);
	void set_y(float pos_y);

	void set_Trenutni_Sprite(Stadij_Rasta trenutni_stadij, sf::Sprite (&spriteovi)[4]);
	void draw();


	std::string StadijToString();





private:
	sf::RenderWindow &game_window;
	int rast = 0;
	Stadij_Rasta trenutni_stadij = Stadij_Rasta::Nista;
	sf::Sprite trenutni_sprite;
	Sunce &moje_sunce;
	float pos_x = 0.0f;
	float pos_y = 0.0f;
	int idSunce;
	sf::Clock clock;
	int brojac_Animacije = 0;
};

