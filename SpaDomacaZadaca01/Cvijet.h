#pragma once
#include <SFML/Graphics.hpp>
class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	void draw();
	void ini_stem();
	void ini_right_leaf();
	void ini_left_leaf();
	void ini_petal();
	void ini_speal();
private:
	sf::ConvexShape stem;
	sf::ConvexShape left_leaf1;
	sf::ConvexShape left_leaf2;
	sf::ConvexShape right_leaf1;
	sf::ConvexShape right_leaf2;
	sf::ConvexShape speal_b;
	sf::ConvexShape speal[4];
	sf::ConvexShape petal[25];
	sf::RenderWindow* window;
	sf::Clock Clock;
	sf::Time Time;
	bool initialized = false;
};

