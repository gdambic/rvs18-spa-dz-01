// rewrite me!
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

#include "QuadStruct.h"
#include "VertParse.h"
#include "VertQuad.h"

struct ClickType {
	sf::Vector2i position;
	std::string type;
};

void inputHandler(ClickType& click, sf::RenderWindow& window); //, int numQuads);

static void appendLineToFile(std::string filepath, std::string line) {
	std::ofstream file;

	file.open(filepath, std::ios::out | std::ios::app);
	if (file.fail())
		std::cout << "failed to open destination file." << std::endl;
	// line.append("numQuads=",numQuads)

	//make sure write fails with exception if something is wrong
	file.exceptions(file.exceptions() | std::ios::failbit | std::ifstream::badbit);

	file << line << std::endl;
}

// global clock for input handler
sf::Clock gClock;
std::vector<ClickType> tempVec;

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
		std::cout << "Vector size: " << tempVec.size() << std::endl;


		if (tempVec.size() == 4) {
			std::stringstream ss;
			for (int i = 0; i < tempVec.size(); i++) {
				switch (i) {
				case 0: ss << "\nquad.a.x = " << tempVec[i].position.x
					<< "\nquad.a.y = " << tempVec[i].position.y; break;
				case 1: ss << "\nquad.b.x = " << tempVec[i].position.x
					<< "\nquad.b.y = " << tempVec[i].position.y; break;
				case 2: ss << "\nquad.c.x = " << tempVec[i].position.x
					<< "\nquad.c.y = " << tempVec[i].position.y; break;
				case 3: ss << "\nquad.d.x = " << tempVec[i].position.x
					<< "\nquad.d.y = " << tempVec[i].position.y; break;
				default: break;
				}
			}
			appendLineToFile("test.vert", ss.str());
			tempVec.clear();
		}
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
				tempVec.push_back(click);
				pressed = true;
				break;
			}
		}
		else {
			pressed = false;
		}
	}
}