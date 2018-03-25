#include"cvijet.h"
#include"list.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Cvijet na vjetru by Picasso",sf::Style::Default);
	window.setFramerateLimit(30);


	cvijet cvijet1(&window);
	list list1(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		cvijet1.iscrtaj();
		list1.iscrtaj();
		window.display();
	}

	return 0;
}