#pragma once
#include <SFML/Graphics.hpp>
#include<fstream>
#include<string>
#include <thread>
#include <chrono>
using std::chrono::system_clock;
class Cvijet
{
public:
	Cvijet();
	Cvijet(sf::RenderWindow *window);
	void draw();
	void set_a(sf::CircleShape &a,float radius,float radius2,sf::Color &b);

private:
	sf::CircleShape a;
	sf::Color b;
	sf::RenderWindow *window;
};

