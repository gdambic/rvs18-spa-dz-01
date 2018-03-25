#pragma once
using namespace std;

class Cvijet {
private:
	// Definiram si pointer za klasu:
	sf::RenderWindow *mWindow;
public:
	Cvijet(sf::RenderWindow *window);
	void draw();
};