#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cvijet.h"
#include "AssetManager.h"

#define DEBUG

//helper function to figure out where to pain the flower
void pprint(sf::Vector2i localPosition) { 
	std::cout << localPosition.x << ", " << localPosition.y << std::endl; 
}

int main(){
	// make window and set framerate
	sf::RenderWindow window(sf::VideoMode(1024, 548), "sDollars pls");
	window.setFramerateLimit(60);

	// load background (todo: use assetmanager)
	sf::Texture texture;
	if (!texture.loadFromFile("data\\sprites\\background.jpg")) {
		std::cerr << "Failed to load background, exiting..." << std::endl;
		return -1;
	}
	sf::Sprite background(texture);

	// load  distortionMap for shader
	sf::Texture distortionMap;
	distortionMap.setRepeated(true);
	distortionMap.setSmooth(true);
	if (!distortionMap.loadFromFile("data\\sprites\\distortion_map.png")) {
		std::cerr << "Failed to load distortion map, exiting..." << std::endl;
		return -1;
	}
	// load and setup shaders
	sf::Shader shader;
	if (!shader.loadFromFile("data\\shaders\\heat_shader.vs", "data\\shaders\\heat_shader.fs")) {
		std::cerr << "Failed to load shader, exiting..." << std::endl;
		return -1;
	}
	shader.setUniform("currentTexture", sf::Shader::CurrentTexture);
	shader.setUniform("distortionMapTexture", distortionMap);
	float distortionFactor = .007f; // Shader, Fragment Shader
	float riseFactor = .05f;

	// initialize clock for shader and animations
	sf::Clock clock;

	// initialize flower object and possition it
	Cvijet cvijet(&window);
	cvijet.setPos(700, 145);

	while (window.isOpen()){
		// handle input
		sf::Event event;
		while (window.pollEvent(event)){
			// close window with mouse or esc
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.key.code == sf::Keyboard::Key::Escape)
				window.close();
		}

		// shader
		shader.setUniform("time", clock.getElapsedTime().asSeconds());
		shader.setUniform("distortionFactor", distortionFactor);
		shader.setUniform("riseFactor", riseFactor);

		//mouse coords
		#ifdef DEBUG
			sf::Vector2i localPosition = sf::Mouse::getPosition(window);
			pprint(localPosition);
		#endif

		// todo: put tree in new layer and render shader
		// only over the tree to simulate wind
		///////////////////////////////////////////////////
		// render
		///////////////////////////////////////////////////

		window.clear();

		window.draw(background, &shader);
		cvijet.draw();

		window.display();
		///////////////////////////////////////////////////
	}
	return 0;
}