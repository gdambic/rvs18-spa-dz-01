#include <SFML/Graphics.hpp>
#include "Cvijet.h"

int main() {
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	sf::RenderWindow window(sf::VideoMode(1000, 400), "Hello, SFML world! &ln(a)", sf::Style::Default, settings);
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		if (event.type == sf::Event::KeyPressed)
			if (event.key.code == sf::Keyboard::F5)
				if(!cvijet.GetIsAlive())
					cvijet.Restart();
		window.clear();
		if(!cvijet.draw())
			window.display();
		else window.close();
	}

	return 0;
}