#pragma once
#include <SFML/Graphics.hpp>
#include <fstream>
#include <vector>
class Editor
{
public:
	Editor(sf::RenderWindow* window);
	void SaveShapestoFile(std::vector<sf::ConvexShape>& alltheshapes);
	void LoadsShapestoFile(std::vector<sf::ConvexShape>& alltheshapes);
	void DragToMoveShape(sf::Event & event, std::vector<sf::ConvexShape>& alltheshapes);
	int FindCurrentMousedOverShape(std::vector<sf::ConvexShape>& alltheshapes, sf::Event& event);
private:
	sf::RenderWindow* window;
	int mousedover = -1;
};

