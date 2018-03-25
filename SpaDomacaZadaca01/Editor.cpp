#include "Editor.h"
#include <sstream>

Editor::Editor(sf::RenderWindow* window)
{
	this->window = window;
}

int Editor::FindCurrentMousedOverShape(std::vector<sf::ConvexShape>& alltheshapes, sf::Event& event)
{
	//Returns the position(int) of the currently moused over shape
	for (int i = alltheshapes.size() - 1; i >= 0; i--)
	{
		if (alltheshapes[i].getGlobalBounds().contains(window->mapPixelToCoords(sf::Mouse::getPosition(*window)))) {
			return i;
		}
	}
	return -1;
}

void Editor::SaveShapestoFile(std::vector<sf::ConvexShape>& alltheshapes)
{
	//Writes one shape in each line in the format of:: X-coordinate,Y-coordinate,Rotation,Scale
	std::ofstream Out("ShapePositions.csv");
	//		Out << towrite.getPoint(i).x << ';' << towrite.getPoint(i).y << ',';
	for (auto i : alltheshapes) {
		Out << i.getPosition().x << ',' << i.getPosition().y << ',' << i.getRotation() << ',' << i.getScale().x << ',' << i.getScale().y;
		Out<<std::endl;
	}
	Out.close();
}

void Editor::LoadsShapestoFile(std::vector<sf::ConvexShape>& alltheshapes)
{//Requires you to initialize the required number of Vectors first;
	const int HOWMANYATTRIBUTES = 5;
	float arr[5] = {};
	std::stringstream convert;
	std::ifstream In("ShapePositions.csv");
	
	for (size_t i = 0; i < alltheshapes.size(); i++)
	{
		for (size_t i = 0; i < HOWMANYATTRIBUTES; i++)
		{
			std::string temp;
			if (i==HOWMANYATTRIBUTES-1)
			{
				getline(In, temp);
			}
			else {
				getline(In, temp, ',');
			}
			convert << temp;
			convert >> arr[i];
			convert.clear();
			convert.str(std::string());
		}
		alltheshapes[i].setPosition(arr[0], arr[1]);
		alltheshapes[i].setRotation(arr[2]);
		alltheshapes[i].setScale(arr[3], arr[4]);

	}
	In.close();
}

void Editor::DragToMoveShape(sf::Event & event,std::vector<sf::ConvexShape>& alltheshapes)
{
	if (event.type==sf::Event::MouseButtonPressed)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			mousedover = FindCurrentMousedOverShape(alltheshapes, event); //Forcing a mouse click to select a shape, but you can just remove the (if) and it'll worth without...or it should.
		}
	}
	if (mousedover!=-1)// This guards against the program crashing due to vector subscript if one uses a hotkey without selecting a shape.
	{
		switch (event.type) {
		case sf::Event::MouseMoved:
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && mousedover != -1)
			{
				alltheshapes[mousedover].setPosition(event.mouseMove.x, event.mouseMove.y);
			}
			break;
		case sf::Event::KeyPressed:
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::PageUp) && mousedover != -1)
			{
				alltheshapes[mousedover].rotate(1);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::PageDown) && mousedover != -1)
			{
				alltheshapes[mousedover].rotate(-1);
			}
			break;
		case sf::Event::MouseWheelMoved:
			if (event.mouseWheel.delta > 0)
			{
				alltheshapes[mousedover].scale(1.05f, 1.05f);
			}
			else {
				alltheshapes[mousedover].scale(0.95f, 0.95f);

			}
			break;
		default:
			break;
		}
	}
	else {
		return;
	}
}

