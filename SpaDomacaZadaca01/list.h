#pragma once
#include <SFML/Graphics.hpp>
class list
{
public:
	list(sf::RenderWindow *window);

	void iscrtaj();

private:
	sf::RenderWindow *window;
};

