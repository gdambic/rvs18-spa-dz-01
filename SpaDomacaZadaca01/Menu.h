#pragma once
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"


#define MAX_NUMBER_OF_ITEMS 2

class Menu
{
public:
	Menu(sf::RenderWindow *window, float width, float height);
	~Menu();

	void draw(sf::RenderWindow &window, float vrijeme);
	void MoveUp();
	void MoveDown();
	int GetPressedItem() { return selectedItemIndex; }


private:
	sf::RenderWindow *window;
	int selectedItemIndex;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];
	float rotacija = 0;
};








