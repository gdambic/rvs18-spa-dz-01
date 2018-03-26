#include "Cvijet.h"
#include <iostream>
#include <string>
#include "SFML\Graphics.hpp"


Cvijet::Cvijet(sf::RenderWindow * window)
{
	this->window = window;


}

void Cvijet::Draw(float time, bool ispucaniMetak)
{



	//Ucitavanje tekstura
	sf::Font font;
	if (!font.loadFromFile("Asset/arial.ttf"))
	{
		std::cout << "Font se nije uspio ucitati" << std::endl;
	}

	sf::Texture nebo;
	if (!nebo.loadFromFile("Asset/sky2.png"))
	{
		std::cout << "Oblak se nije ucitao" << std::endl;
	}
	sf::Texture cigla;
	if (!cigla.loadFromFile("Asset/ground.png"))
	{
		std::cout << "Oblak se nije ucitao" << std::endl;
	}

	sf::Texture oblak;
	if (!oblak.loadFromFile("Asset/cloud1.png"))
	{
		std::cout << "Oblak nije ucitan" << std::endl;
	}

	sf::Texture metak;
	if (!metak.loadFromFile("Asset/metak.png"))
	{
		std::cout << "Metak se nije uspio ucitati" << std::endl;
	}

	sf::Texture sunce;
	if (!sunce.loadFromFile("Asset/sun.png"))
	{
		std::cout << "Sucne se nije uspijelo ucitati" << std::endl;
	}

	sf::Texture zgrade;
	if (!zgrade.loadFromFile("Asset/zgrade.png"))
	{
		std::cout << "Sucne se nije uspijelo ucitati" << std::endl;
	}


	//Kreiranje objekta
	sf::RectangleShape shapezaOblak(sf::Vector2f(150, 100));
	shapezaOblak.setTexture(&oblak);
	shapezaOblak.setTextureRect(sf::IntRect(0, 0, 300, 199));
	shapezaOblak.setPosition(pozicija, 50);


	sf::RectangleShape shapezaOblakDva(sf::Vector2f(150, 100));
	shapezaOblakDva.setTexture(&oblak);
	shapezaOblakDva.setTextureRect(sf::IntRect(0, 0, 300, 199));
	shapezaOblakDva.setPosition(pozicijaDva, 150);

	sf::RectangleShape objektSunce(sf::Vector2f(64, 64));
	objektSunce.setTexture(&sunce);
	objektSunce.setTextureRect(sf::IntRect(0, 0, 64, 64));
	objektSunce.setPosition(890, 90);
	objektSunce.setScale(2, 2);
	objektSunce.setOrigin(32, 32);

	sf::RectangleShape objektZgrade(sf::Vector2f(1280, 290));
	objektZgrade.setTexture(&zgrade);
	objektZgrade.setTextureRect(sf::IntRect(0, 0, 1280, 290));
	objektZgrade.setPosition(zgradeX, 300);

	sf::Text text;
	text.setString("Under construction\nStisni desnu strelicu za pucanje\!\nIzlaz - slovo A");
	text.setFont(font);
	text.setFillColor(sf::Color::White);
	text.setCharacterSize(26);
	text.setPosition(40, 20);


	sf::RectangleShape renderneba(sf::Vector2f(1024, 800));
	renderneba.setTexture(&nebo);
	renderneba.setTextureRect(sf::IntRect(0, 0, 256, 214));
	renderneba.setPosition(0, 0);


	sf::RectangleShape zid(sf::Vector2f(1225, 171));
	zid.setTexture(&cigla);
	zid.setTextureRect(sf::IntRect(0, 0, 1225, 171));
	zid.setPosition(zemljaSeKrece, 430);

	sf::RectangleShape zidDva(sf::Vector2f(1225, 171));
	zidDva.setTexture(&cigla);
	zidDva.setTextureRect(sf::IntRect(0, 0, 1225, 171));
	zidDva.setPosition(zemljaSeKreceDva, 450);

	sf::RectangleShape objektMetak(sf::Vector2f(124, 137));
	objektMetak.setTexture(&metak);
	objektMetak.setTextureRect(sf::IntRect(0, 0, 124, 137));
	objektMetak.setPosition(metakX, 440);

	//Updateanje pozicija objekta
	if (time >= 0.03f)
	{
		pozicija -= 8;
		pozicijaDva -= 10;
		zemljaSeKrece -= 10;
		zemljaSeKreceDva -= 10;
		rotacija += 5;
		objektSunce.rotate(rotacija);
	}
	if (time >= 0.03f) {
		zgradeX -= 10;
	}
	if (zgradeX <= -1300)
	{
		zgradeX = 1300;
	}
	if (pozicija <= 0)
	{

		pozicija = 1200;

	}
	if (zemljaSeKrece <= -1200)
	{
		zemljaSeKrece = 1200;
	}
	if (pozicijaDva < 0)
	{
		pozicijaDva = 1200;
	}
	if (zemljaSeKreceDva <= -1200)
	{
		zemljaSeKreceDva = 1200;
	}


	if (ispucaniMetak)
	{
		metakTrajanje = true;
	}


	//Pozivanje objekta
	window->draw(renderneba);
	window->draw(objektZgrade);
	window->draw(objektSunce);
	window->draw(shapezaOblak);
	window->draw(shapezaOblakDva);
	window->draw(zid);
	window->draw(zidDva);
	window->draw(text);


	if (metakTrajanje)
	{
		if (timerMetak >= 30.0f)
		{
			objektMetak.setPosition(metakX, 440);
			window->draw(objektMetak);
			metakX += 45;
			timerMetak--;
		}
		else if (timerMetak > 0)
		{

			objektMetak.setPosition(metakX, 440);
			window->draw(objektMetak);
			metakX += 50;
			timerMetak--;
		}
		else
		{
			this->timerMetak = 36.0f;
			metakX = 118;
			this->metakTrajanje = false;
		}
	}

}
