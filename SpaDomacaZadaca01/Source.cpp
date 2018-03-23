#include "Cvijet.h"
#include <SFML/Graphics.hpp>


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


		/*sf::CircleShape shape(50,4);
		shape.setFillColor(sf::Color(100, 250, 50));*/

		window.clear();
		cvijet.draw();
		//window.draw(shape);
		window.display();
	}

	return 0;
}