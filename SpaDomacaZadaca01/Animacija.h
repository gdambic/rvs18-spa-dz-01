#pragma once

#include<SFML\Graphics.hpp>

class Animacija
{
public:
	Animacija(sf::Texture* tekstura, sf::Vector2u broj_slika, float promjena_vremena);
	void set_uvRect(sf::IntRect uvRect);
	sf::IntRect get_uvRect();

	void osvjezi(int redak, float vremenski_razmak);

private:
	sf::Vector2u broj_slika; // Vector2u (unsigned int) - nikad neće biti broj manji od 0 
	sf::Vector2u trenutna_slika;
	float ukupno_vrijeme; 
	float promjena_vremena; // vrijeme promjene na idući frame
	sf::IntRect uvRect; // koordinate teksture

};