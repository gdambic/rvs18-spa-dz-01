#include "Menu.h"
#include <iostream>
#include "SFML\Graphics.hpp"

Menu::Menu(sf::RenderWindow *window, float width, float height)
{
	this->window = window;
	if (!font.loadFromFile("Asset/arial.ttf"))
	{
		std::cout << "Font se nije ucitao" << std::endl;
	}

	menu[0].setFont(font);
	menu[0].setFillColor(sf::Color::Yellow);
	menu[0].setString("Igraj");
	menu[0].setCharacterSize(45);
	menu[0].setPosition(sf::Vector2f(width / 2.08, height / (MAX_NUMBER_OF_ITEMS + 1) * 1.3));

	menu[1].setFont(font);
	menu[1].setFillColor(sf::Color::White);
	menu[1].setString("Izlaz");
	menu[1].setCharacterSize(45);
	menu[1].setPosition(sf::Vector2f(width / 2.08, height / (MAX_NUMBER_OF_ITEMS + 1) * 1.7));

	selectedItemIndex = 0;


}


Menu::~Menu()
{
}

void Menu::draw(sf::RenderWindow &window, float vrijeme)
{


	//Ucitavanje 
	sf::Font font;
	if (!font.loadFromFile("Asset/arial.ttf"))
	{
		std::cout << "Font se nije uspio ucitati" << std::endl;
	}

	sf::Texture logo;
	if (!logo.loadFromFile("Asset/logo.png"))
	{
		std::cout << "Logo se nije uspio ucitati" << std::endl;
	}

	sf::Texture pozadina;
	if (!pozadina.loadFromFile("Asset/pozadina.png"))
	{
		std::cout << "Pozadina se nije uspio ucitati" << std::endl;
	}

	sf::Texture tucak;
	if (!tucak.loadFromFile("Asset/tucak.png"))
	{
		std::cout << "Tucak se nije uspio ucitati" << std::endl;
	}

	sf::Texture stabiljka;
	if (!stabiljka.loadFromFile("Asset/cvijetDonji.png"))
	{
		std::cout << "Stabiljka se nije uspjela ucitati" << std::endl;
	}

	//Kreiranje objekta i povezivanje sa teksturom
	sf::RectangleShape objektLogo(sf::Vector2f(200, 70));
	objektLogo.setTexture(&logo);
	objektLogo.setTextureRect(sf::IntRect(0, 0, 200, 70));
	objektLogo.setPosition(5, 5);

	sf::RectangleShape objektPozadina(sf::Vector2f(1024, 600));
	objektPozadina.setTexture(&pozadina);
	objektPozadina.setTextureRect(sf::IntRect(0, 0, 1024, 600));

	sf::RectangleShape objektTucak(sf::Vector2f(151, 151));
	objektTucak.setTexture(&tucak);
	objektTucak.setTextureRect(sf::IntRect(0, 0, 151, 151));
	objektTucak.setPosition(890, 410);
	objektTucak.setOrigin(75, 75);

	sf::RectangleShape objektStabiljka(sf::Vector2f(200, 250));
	objektStabiljka.setTexture(&stabiljka);
	objektStabiljka.setTextureRect(sf::IntRect(0, 0, 200, 250));
	objektStabiljka.setPosition(800, 370);

	sf::RectangleShape objektTucakDva(sf::Vector2f(151, 151));
	objektTucakDva.setTexture(&tucak);
	objektTucakDva.setTextureRect(sf::IntRect(0, 0, 151, 151));
	objektTucakDva.setPosition(190, 410);
	objektTucakDva.setOrigin(75, 75);

	sf::RectangleShape objektStabiljkaDva(sf::Vector2f(200, 250));
	objektStabiljkaDva.setTexture(&stabiljka);
	objektStabiljkaDva.setTextureRect(sf::IntRect(0, 0, 200, 250));
	objektStabiljkaDva.setPosition(100, 370);

	sf::Text naslov;
	naslov.setString("Algebra flower");
	naslov.setFont(font);
	naslov.setFillColor(sf::Color::White);
	naslov.setCharacterSize(56);
	naslov.setPosition(350, 50);

	sf::Text footer;
	footer.setString("Verzija 0.1    by Kris Peklaric");
	footer.setFont(font);
	footer.setFillColor(sf::Color::White);
	footer.setCharacterSize(26);
	footer.setPosition(400, 550);


	if (vrijeme > 0.03f)
	{
		rotacija += 5;
		objektTucak.rotate(rotacija);
		objektTucakDva.rotate(-rotacija);
	}
	//Crtanje objekta

	this->window->draw(objektPozadina);
	this->window->draw(objektLogo);
	this->window->draw(naslov);
	this->window->draw(footer);
	this->window->draw(objektStabiljka);
	this->window->draw(objektTucak);
	this->window->draw(objektStabiljkaDva);
	this->window->draw(objektTucakDva);


	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
	{
		window.draw(menu[i]);
	}

}

void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(sf::Color::Yellow);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(sf::Color::Yellow);
	}
}

