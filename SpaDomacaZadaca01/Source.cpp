#include <SFML/Graphics.hpp>
#include <chrono>
#include "Cvijet.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Hello, SFML world!");

	Cvijet cvijet(&window);

	auto time = std::chrono::steady_clock::now();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		float dt;
		{
			const auto new_time = std::chrono::steady_clock::now();
			dt = std::chrono::duration<float>(new_time - time).count();
			time = new_time;
		}
		
		cvijet.Update(dt);
		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}