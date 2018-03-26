#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cvijet.h"
#include "Menu.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 600), "Algebra boy ver 0.1");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);

	//Ucitavanje naseg junaka, Algebraboya
	sf::Texture algebra;

	if (!algebra.loadFromFile("Asset/algebraBoy.png"))
	{
		std::cout << "Nije se ucitao algebraBoy karakter" << std::endl;
	}


	sf::IntRect rectAlgebraboySprite(0, 0, 150, 256);
	sf::Sprite karakter(algebra, sf::IntRect(0, 0, 150, 200));
	karakter.setPosition(0, 400);

	sf::Clock clock;
	sf::Clock vrijemeZaForward;

	bool meni = true; //Mjenjanje scene iz menu u igru
	bool metak = false;
	Menu menu(&window, 1024.0f, 600.0f);


	while (window.isOpen())
	{


		sf::Event event;
		while (window.pollEvent(event))
		{

			switch (event.type)
			{
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Up:
					menu.MoveUp();
					break;

				case sf::Keyboard::Down:
					menu.MoveDown();
					break;
				case sf::Keyboard::Right:
					metak = true;
					break;
				case sf::Keyboard::A:
				{
					std::cout << "Izlaz" << std::endl;
					window.close();
					break;
				}
				case sf::Keyboard::Return:
					switch (menu.GetPressedItem())
					{
					case 0:
						std::cout << "Ovaj dio jos nema funkcionalnosti\nZa izlaz pritisni tipku A !" << std::endl;
						meni = false;
						break;
					case 1:
						std::cout << "Izlaz" << std::endl;
						window.close();
						break;

					}

					break;
				}
				break;
			case sf::Event::Closed:
				window.close();

				break;

			}

			if (event.type == sf::Event::Closed)
				window.close();
		}


		if (meni == false)
		{


			if (clock.getElapsedTime().asSeconds() > 0.04f) {
				if (rectAlgebraboySprite.left >= 1800)
					rectAlgebraboySprite.left = 0;
				else
					rectAlgebraboySprite.left += 150;

				karakter.setTextureRect(rectAlgebraboySprite);
				clock.restart();
			}
			if (vrijemeZaForward.getElapsedTime().asSeconds() > 1.0f)
			{
				vrijemeZaForward.restart();
			}
			window.clear();
			cvijet.Draw(vrijemeZaForward.getElapsedTime().asSeconds(), metak);
			window.draw(karakter);
			metak = false;

		}
		else
		{
			if (vrijemeZaForward.getElapsedTime().asSeconds() > 3.0f)
			{
				vrijemeZaForward.restart();
			}
			window.clear();
			menu.draw(window, vrijemeZaForward.getElapsedTime().asSeconds());

		}
		window.display();
	}

	return 0;
}