#include <SFML/Graphics.hpp>
#include "Cvijet.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Proljece je stiglo!");
	window.setFramerateLimit(1);
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
		cvijet.draw();
		window.display();
	}

	return 0;
}