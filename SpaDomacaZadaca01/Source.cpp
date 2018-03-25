#include <SFML/Graphics.hpp>
#include "Cvijet.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);

	//Sunce
	cvijet.set_radius_sunce(30);
	cvijet.set_color_sunce(sf::Color::Yellow);
	cvijet.set_position_sunce(10, 10);
	cvijet.set_color_SunceRub(255,193,7);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(190, 225, 255));
		cvijet.draw();
		window.display();
	}

	return 0;
}