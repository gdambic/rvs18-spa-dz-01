#include <iostream>
#include <fstream>

#include <SFML/Graphics.hpp>

#include "QuadStruct.h"
#include "VertParse.h"
#include "VertQuad.h"

struct ClickType {
	sf::Vector2i position;
	std::string type;
};

void inputHandler(ClickType& click, sf::RenderWindow& window);

// global clock for input handler
sf::Clock gClock;

int main() {
	sf::RenderWindow window(sf::VideoMode(1024, 548), "shape loader test");

	ClickType click;

	while (window.isOpen()) {

		// handle events
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.key.code == sf::Keyboard::Key::Escape)
				window.close();
		}

		// create QuadContainer to test parser
		QuadContainer bar;

		// make VerParser instance and load model
		VertParser spaz;
		if (!spaz.loadVert("test.vert"))
			std::cout << "Failed to load model file.\n";

		// test the parser
		bar = spaz.get_container();

		// magic <3
		VertQuad test;
		if (!test.load(bar)) return -1;

		// render stuff
		window.clear(sf::Color::Black);
		window.draw(test); // testing
		window.display();

		inputHandler(click, window);
		std::cout << "x: " << click.position.x << ", y: " << click.position.y << ", type: " << click.type << '\n';
	}

	std::cout << "Bye!" << std::endl;
	return 0;
}


void inputHandler(ClickType& click, sf::RenderWindow& window) {
	static bool pressed = false;
	while (true) {
		// this is used to refresh window every ~second
		// todo: fix input handler so it doesnt halt the execution
		sf::Time elapsed1 = gClock.getElapsedTime();
		if (elapsed1.asSeconds()>1) {
			gClock.restart();
			click.type = "";
			return;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
			if (!pressed) {
				click.position = sf::Mouse::getPosition(window);
				click.type = "Ctrl-Z";
				pressed = true;
				break;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::Y)) {
			if (!pressed) {
				click.position = sf::Mouse::getPosition(window);
				click.type = "Ctrl-Y";
				pressed = true;
				break;
			}
		}
		else if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			if (!pressed) {
				click.position = sf::Mouse::getPosition(window);
				click.type = "Left Click";
				pressed = true;
				break;
			}
		}
		else if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
			if (!pressed) {
				click.position = sf::Mouse::getPosition(window);
				click.type = "Right Click";
				pressed = true;
				break;
			}
		}
		else {
			pressed = false;
		}
	}
}