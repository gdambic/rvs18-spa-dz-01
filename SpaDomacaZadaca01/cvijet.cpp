#include "cvijet.h"

cvijet::cvijet(sf::RenderWindow * window)
{
	this->window = window;
}

void cvijet::iscrtaj()
{
	sf::CircleShape cvijet(130);
	cvijet.setFillColor(sf::Color(255, 255, 50));
	cvijet.setOutlineColor(sf::Color(255, 0, 0));
	cvijet.setOutlineThickness(-90);
	cvijet.setPosition(sf::Vector2f(257, 30));


	sf::RectangleShape stapka(sf::Vector2f(20, 700));
	stapka.setFillColor(sf::Color(0, 255, 0));
	stapka.setPosition(sf::Vector2f(380, 100));


	sf::Texture livada;
	sf::Texture nebo;
	if (!livada.loadFromFile("trava.jpg") || !nebo.loadFromFile("nebo.jpg"))
	{
		std::cout << "ucitavanje pozadine puklo!" << std::endl;
		system("pause");
	}

	sf::RectangleShape tlo(sf::Vector2f(800, 150));
	tlo.setFillColor(sf::Color(200, 130, 0));
	tlo.setPosition(sf::Vector2f(0, 650));
	tlo.setTexture(&livada);
	tlo.setTextureRect(sf::IntRect(0, 0, 980, 500));

	sf::RectangleShape oblaci(sf::Vector2f(800, 650));
	oblaci.setTexture(&nebo);
	window->draw(oblaci);
	window->draw(tlo);
	window->draw(stapka);
	window->draw(cvijet);
}
