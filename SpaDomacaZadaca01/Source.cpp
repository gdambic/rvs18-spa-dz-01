#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cvijet.h"
#include "Kantica.h"
#include "Sunce.h"
#include <vector>
#include <sstream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(624, 390), "Plant world");
	window.setFramerateLimit(60);


#pragma region Stvaranje Spriteova

	// Prvo ucitavamo teksturu za svaku slicicu cvijeta
	sf::Texture cvijet_texture[4];
	cvijet_texture[0].loadFromFile("Resursi/spr_cvijet_1.png");
	cvijet_texture[1].loadFromFile("Resursi/spr_cvijet_2.png");
	cvijet_texture[2].loadFromFile("Resursi/spr_cvijet_3.png");
	cvijet_texture[3].loadFromFile("Resursi/spr_cvijet_4.png");

	// Kreiramo polje spriteova koje popunimo s nekim osnovnim postavkama spritea
	sf::Sprite cvijet_spriteovi[4];
	for (int i = 0; i < 4; i++)
	{
		cvijet_spriteovi[i].setTexture(cvijet_texture[i]);
		cvijet_spriteovi[i].setColor(sf::Color(255, 255, 255, 200));
		cvijet_spriteovi[i].scale(2.0f, 2.0f); // Povecava velicinu spritea za 2x originalne velicine
	}
#pragma endregion

	Sunce sunce(window);

#pragma region Stvaranje Cvjetova

	// Stvaramo polje objekata klase cvijet
	Cvijet cvjetovi[5] =
	{
		Cvijet(window, sunce, 0),
		Cvijet(window, sunce, 1),
		Cvijet(window, sunce, 2),
		Cvijet(window, sunce, 3),
		Cvijet(window, sunce, 4)

	};

	// Za svaki cvijet postavljamo pocetne postavke
	for (int i = 0; i < 5; i++)
	{
		cvjetovi[i].set_Rast(0);
		cvjetovi[i].set_x(i * 124.0f);
		cvjetovi[i].set_Trenutni_Sprite(cvjetovi[i].get_Stadij_Rasta(), cvijet_spriteovi);

	}

	int odabraniCvijet = 0; // Ova varijabla odreduje koji smo cvijet trenutno odabrali za zaljevanje/prikaz informacija o cvijetu

#pragma endregion

	

#pragma region Stvaranje Teksta

	// Da bi koristili tekst moramo prvo ucitati neki font u program
	sf::Font font;
	if (!font.loadFromFile("Resursi/arial.ttf"))
	{
		return 1;
	}

	// Stvaramo text objekt i zadajemo mu neke osnovne postavke
	sf::Text text;
	text.setFont(font);
	text.setString("");
	text.setCharacterSize(24);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);

	std::stringstream ss; // Koristimo stringstream kako bi mogli sve informacije o cvijetu strpati u jedan string, tako mozemo koristiti samo jedan Text objekt
#pragma endregion


	sf::Texture kantica_texture;
	kantica_texture.loadFromFile("Resursi/spr_kantica_1.png");
	sf::Sprite kantica_sprite;
	kantica_sprite.setTexture(kantica_texture);
	kantica_sprite.setColor(sf::Color(255, 255, 255, 200));
	kantica_sprite.setScale(sf::Vector2f(1.5f, 1.5f));

	Kantica kantica(window, kantica_sprite);
	


	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			// Ovdje provjeravamo da li smo pritisnuli bilokoju tipku u rangu od 1 do 5 i ovisno o tome mjenjamo trenutno odabrani cvijet
			if (event.type == sf::Event::KeyPressed) {
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
				{
					odabraniCvijet = 0;
					kantica.set_x(24.0f);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
				{
					odabraniCvijet = 1;
					kantica.set_x(144.0f);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
				{
					odabraniCvijet = 2;
					kantica.set_x(264.0f);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
				{
					odabraniCvijet = 3;
					kantica.set_x(384.0f);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
				{
					odabraniCvijet = 4;
					kantica.set_x(504.0f);
				}

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
				{
					int tempRast = cvjetovi[odabraniCvijet].get_Rast();
					cvjetovi[odabraniCvijet].set_Rast(tempRast += 10);
				}
			}
		}

		window.clear();

		// Ovdje se crtaju svi objekti iz polja cvjetovi 
		for (int i = 0; i < 5; i++)
		{
			cvjetovi[i].set_Trenutni_Sprite(cvjetovi[i].get_Stadij_Rasta(), cvijet_spriteovi); // Mjenjamo sprite ovisno o trenutnom rastu
			cvjetovi[i].draw();
		}

		kantica.draw();

		// U stringstream stavljamo sve podatke o cvijetu koje zelimo prikazati
		ss << "Cvijet " << odabraniCvijet + 1 << std::endl << "Rast: " << cvjetovi[odabraniCvijet].get_Rast() << std::endl << "Stadij rasta: " << cvjetovi[odabraniCvijet].StadijToString() << std::endl << "1-5 Odabiranje cvijeta" << std::endl << "Pritisnite x za zaljevanje cvijeta";

		text.setString(ss.str());
		window.draw(text); // Crtanje teksta

		ss.str("");

		sunce.draw();
		
		window.display();
	}

	return 0;
}