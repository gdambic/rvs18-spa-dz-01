#include <SFML/Graphics.hpp>
#include "Cvijet.h"
#include <iostream>

Cvijet::Cvijet(sf::RenderWindow *prozor) {

	window = prozor;
};

void Cvijet::draw() {

	sf::CircleShape sunce(28);
	sf::RectangleShape trava(sf::Vector2f(512, 45));

	sf::Texture oblak_tekstura;
	sf::Texture sunce_tekstura;
	sf::Texture trava_tekstura;
	
	sf::RectangleShape trava_obrub(sf::Vector2f(512, 80));
	trava_tekstura.loadFromFile("trava_obrub.png");
	trava_obrub.setTexture(&trava_tekstura);
	trava_obrub.setPosition(0, 475);


	sf::CircleShape sunce_obrub(60);
	sunce_tekstura.loadFromFile("sunce_obrub.png");
	sunce_obrub.setTexture(&sunce_tekstura);
	sunce_obrub.setPosition(10, 10);

	sf::RectangleShape oblak(sf::Vector2f(300.0f, 174.0f));
	oblak_tekstura.loadFromFile("oblak.png");
	oblak.setTexture(&oblak_tekstura);
	oblak.setPosition(190, 10);


	trava.setPosition(0, 475);
	trava.setFillColor(sf::Color(96, 128, 56));
	sunce.setPosition(40, 45);
	sunce.setFillColor(sf::Color(253, 184, 19));

	window->draw(sunce_obrub);
	window->draw(trava_obrub);
	window->draw(oblak);
	window->draw(sunce);
	window->draw(trava);


}