#include <SFML/Graphics.hpp>
#include<string>
#include<vector>
#include"Cvijet.h"
#include <SFML/Window.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);




	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		//cvijet.draw();// Prva verzija sa witch caseom i biranjem cvijetova(zakomentirati liniju 29 prije runa)
		cvijet.draw1();// Druga verzija(animacija techno djurdjica & Psychodelic Sun)

		
		

		window.display();
	}


	return 0;
}