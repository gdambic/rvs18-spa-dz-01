#include "Cvijet.h"
#include <SFML/Graphics.hpp>

void Cvijet::setNovaPozicija()
{
	if (pozicija2.x == 210||pozicija1.x==-131)
		promjena *= -1;
	    pozicija1.x += promjena;
		pozicija2.x += promjena;
}

Cvijet::Cvijet(sf::RenderWindow& window):Window(window)
{
}

void Cvijet::draw()
{
	int kut = 0;
	sf::RectangleShape pozadina(sf::Vector2f(400, 400));  //pozadina
	if (pozicija2.x >= 165)
		pozadina.setFillColor(sf::Color(0, 0, 153));
	else
		pozadina.setFillColor(sf::Color(23, 200, 228));
	Window.draw(pozadina );
	sf::CircleShape sunce(40);     //sunce
	sunce.setPosition(310, 10);
	sunce.setFillColor(sf::Color(255, 225, 68));  
	Window.draw(sunce);
	sf::CircleShape oblak1(150);   //oblak1
	oblak1.setPosition(pozicija1);
	Window.draw(oblak1);
	sf::CircleShape oblak2(150);     //oblak2
	oblak2.setPosition(pozicija2);
	Window.draw(oblak2);
	sf::RectangleShape trava(sf::Vector2f(400, 15));   //trava
	trava.setFillColor(sf::Color(0, 153, 0));
	trava.setPosition(0, 385);
	Window.draw(trava);
	sf::RectangleShape stabljika(sf::Vector2f(300, 8));   //stab
	stabljika.setPosition(150, 170);
	stabljika.setFillColor(sf::Color(0, 153, 0));
	stabljika.rotate(90);
	Window.draw(stabljika);
	for (int i = 0; i < 18; i++)                 //latice
	{
		sf::RectangleShape latica(sf::Vector2f(55, 5));
		latica.setPosition(150, 170);
		latica.setFillColor(sf::Color(255, 255, 0));
		latica.rotate(kut);
		kut += 20;
		Window.draw(latica);
	}
	sf::CircleShape tucak(15);      //tucak
	tucak.setPosition(135, 155);
	tucak.setFillColor(sf::Color(51, 51, 0));
	Window.draw(tucak);
	setNovaPozicija();
}
