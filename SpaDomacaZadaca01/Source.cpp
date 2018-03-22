#include <SFML/Graphics.hpp>
#include "Animacija.h"
#include "Cvijet.h"
#include <iostream>

int main()
{

	std::cout << "Disclaimer:\nCijela animacija je vlastite(kucne) izrade.\nSvaka slicnost sa stvarnim osobama i dogadajima je slucajna!" << std::endl; // ispis disclaimera na konzolu
	
	sf::RenderWindow window(sf::VideoMode(512, 512), "Hello, SFML world!");
	window.setFramerateLimit(60);
	
	Cvijet cvijet(&window);
	
	sf::RectangleShape animacija_sheet(sf::Vector2f(312.0f, 400.0f));  
	animacija_sheet.setPosition(100.0, 100.0);
	sf::Texture animacija_tekstura;
	animacija_tekstura.loadFromFile("animacija.png");
	animacija_sheet.setTexture(&animacija_tekstura);
	Animacija animacija(&animacija_tekstura, sf::Vector2u(51, 1), 0.1);

	float vremenski_razmak = 0;
	sf::Clock clock;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
		}


		vremenski_razmak = clock.restart().asSeconds();
		window.setFramerateLimit(7); // ne smije biti više od 7 frameova po sekundi
		
		animacija.osvjezi(0, vremenski_razmak);
		animacija_sheet.setTextureRect(animacija.get_uvRect());
		window.clear(sf::Color(135,206,235));
		cvijet.draw();
		window.draw(animacija_sheet);
		
		window.display();
	}

	return 0;
}