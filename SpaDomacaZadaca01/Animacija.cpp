#include "Animacija.h"

Animacija::Animacija(sf::Texture* tekstura, sf::Vector2u broj_slika, float promjena_vremena) {

	this->broj_slika = broj_slika;
	this->promjena_vremena = promjena_vremena;

	ukupno_vrijeme = 0.0;
	trenutna_slika.x = 0;

	uvRect.width = tekstura->getSize().x / float(broj_slika.x); //sirina frameova animacije
	uvRect.height = tekstura->getSize().y / float(broj_slika.y); //visina frameova animacije
}

void Animacija::set_uvRect(sf::IntRect uvRect) {

	this->uvRect = uvRect;

}
sf::IntRect Animacija::get_uvRect() {

	return uvRect;
}

void Animacija::osvjezi(int redak, float vremenski_razmak) {

	trenutna_slika.y = redak;
	
	ukupno_vrijeme = ukupno_vrijeme + vremenski_razmak;

	if (ukupno_vrijeme >= promjena_vremena) {

		ukupno_vrijeme = ukupno_vrijeme - promjena_vremena;  

		trenutna_slika.x++; //promjena framea u animaciji 
		
		if (trenutna_slika.x >= broj_slika.x) {

			trenutna_slika.x = 0; // kod maksimalnog broja frameova, prebaci natrag na prvi
		}

	}

	uvRect.left = trenutna_slika.x * uvRect.width; // koordinate
	uvRect.top = trenutna_slika.y * uvRect.height;

}