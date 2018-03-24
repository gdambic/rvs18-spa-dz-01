#pragma once
#include <SFML\Graphics.hpp>
#include <thread>
#include <chrono>
#include "Elipse.h"
using std::chrono::system_clock;
using namespace std::chrono_literals;


class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	void draw();
private:
	sf::RenderWindow *Rwindow;
};

