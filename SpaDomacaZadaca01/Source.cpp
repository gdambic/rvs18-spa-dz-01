#include <SFML/Graphics.hpp>
#include "Cvijet.h"
#include "Editor.h"
int main()
{
	//Use Scrollwheel to scale, drag and drop to move,rotate with pageup and pagedown, save current state by pressing s, stop animation by pressing a, activate epilepsy mode by pressing e
	//No textures because textures are for nerds, shapes are superior in every way, if you want texture go eat a steak.
	sf::RenderWindow window(sf::VideoMode(400, 400), "Editor Flower");
	window.setFramerateLimit(60);
	srand(time(nullptr));
	Cvijet cvijet(&window);
	Editor ed(&window);
	std::vector<sf::ConvexShape> alltheshapes;
	cvijet.Init(alltheshapes);
	ed.LoadsShapestoFile(alltheshapes);
	bool epilepsy = false;
	bool animate = true;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			ed.DragToMoveShape(event, alltheshapes);//Despite its name it also handles Scaling, and Rotation and Dragging.
			if (event.type == sf::Event::EventType::KeyPressed) {
				if (event.key.code==sf::Keyboard::Key::S)
				{
					ed.SaveShapestoFile(alltheshapes);
				}
			}
			if (event.type == sf::Event::EventType::KeyPressed) {
				if (event.key.code == sf::Keyboard::Key::E)
				{
					if (epilepsy)
					{
						epilepsy = false;
					}
					else {
						epilepsy = true;

					}
				}
				if (event.key.code == sf::Keyboard::Key::A)
				{
					if (animate)
					{
						animate = false;
					}
					else {
						animate = true;

					}
				}
			}
		}
		if (animate)
		{
			cvijet.Animation(alltheshapes, epilepsy);
		}
		window.clear();
		cvijet.draw(alltheshapes);
		window.display();
	}

	return 0;
}