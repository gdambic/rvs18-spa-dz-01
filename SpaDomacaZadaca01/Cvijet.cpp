#include "Cvijet.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Sunce.h"

#pragma region konstruktor
Cvijet::Cvijet(sf::RenderWindow& renderWindow, Sunce& sunce, int idSunce) : game_window(renderWindow), moje_sunce(sunce)
{
	this->idSunce = idSunce;
}

#pragma endregion

#pragma region Getteri i setteri

void Cvijet::set_Rast(int rast)
{
	this->rast = rast;
	if (this->rast >= 100)
		this->rast = 100;

	provjeri_Stadij(rast);

}

int Cvijet::get_Rast() const
{
	return rast;
}

void Cvijet::set_Stadij_Rasta(Stadij_Rasta stadij_rasta)
{
	this->trenutni_stadij = stadij_rasta;

}

Stadij_Rasta Cvijet::get_Stadij_Rasta() const
{
	return trenutni_stadij;
}

void Cvijet::provjeri_Stadij(int rast)
{
	// Gledamo koliko nam je cvijet narastao i ovisno o tome settamo trenutni stadij rasta
	if (rast >= 25  && rast < 50) {
		set_Stadij_Rasta(Stadij_Rasta::Proklijalo);
	}
	else if (rast >= 50 && rast < 75) {
		set_Stadij_Rasta(Stadij_Rasta::Stabljika);
	}
	else if (rast >= 75 && rast < 100) {
		set_Stadij_Rasta(Stadij_Rasta::Stabljika_Cvijet);
	}
	else if (rast >= 100) {
		set_Stadij_Rasta(Stadij_Rasta::Izrastao);
	}
}

void Cvijet::set_x(float pos_x)
{
	this->pos_x = pos_x;
	trenutni_sprite.setPosition(this->pos_x, this->pos_y);
}

void Cvijet::set_y(float pos_y)
{
	this->pos_y = pos_y;
	trenutni_sprite.setPosition(this->pos_x, this->pos_y);
}

#pragma endregion


void Cvijet::set_Trenutni_Sprite(Stadij_Rasta trenutni_stadij, sf::Sprite (&spriteovi)[4])
{
	// Provjeravamo trenutni stadij rasta i ovisno o tome mjenjamo sprite koji ce cvijet crtati
	switch (trenutni_stadij)
	{
	case Stadij_Rasta::Nista:
		trenutni_sprite = spriteovi[0];
		set_y(330.0f);
		break;

	case Stadij_Rasta::Proklijalo:
		trenutni_sprite = spriteovi[1];
		set_y(330.0f);
		break;

	case Stadij_Rasta::Stabljika:
		trenutni_sprite = spriteovi[2];
		set_y(330.0f);
		break;

	case Stadij_Rasta::Stabljika_Cvijet:
		trenutni_sprite = spriteovi[3];
		set_y(330.0f);
		break;

	case Stadij_Rasta::Izrastao:
		trenutni_sprite = spriteovi[3];
		set_y(330.0f);
		break;

	default:
		break;
	}
}

void Cvijet::draw()
{
	game_window.draw(trenutni_sprite);

	// Animacija sunca
	if (idSunce == 0) // Samo jedan cvijet ce kontrolirati animaciju
	{
	
			sf::Time elapsed1 = clock.getElapsedTime();
		if (elapsed1.asSeconds() > 0.1f) {
			if (animacija_rast)
			{
				brojac_Animacije++;
				if (brojac_Animacije > 8)
				{
					animacija_rast = false;
					brojac_Animacije = 8;
				}
			}
			else 
			{
				brojac_Animacije--;
				if (brojac_Animacije < 0)
				{
					animacija_rast = true;
					brojac_Animacije = 0;
				}
			}

			moje_sunce.setTrenutnaBoja(brojac_Animacije);
			clock.restart();
		}
	}
}

std::string Cvijet::StadijToString()
{
	switch (trenutni_stadij)
	{
	case Stadij_Rasta::Nista:
		return "Nista";
		break;

	case Stadij_Rasta::Proklijalo:
		return "Proklijao";
		break;

	case Stadij_Rasta::Stabljika:
		return "Narasla stabljika";
		break;

	case Stadij_Rasta::Stabljika_Cvijet:
		return "Narasla stabljika i cvijet";
		break;

	case Stadij_Rasta::Izrastao:
		return "Potpuno Izrastao";
		break;

	default:
		return "GRESKA";
		break;
	}
}
