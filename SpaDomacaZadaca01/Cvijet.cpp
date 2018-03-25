#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow * window)
{
	myWindow = window;
}

void Cvijet::draw()
{
	sf::RectangleShape stapka(sf::Vector2f(150, 10));
	stapka.setFillColor(sf::Color(80, 160, 30));
	stapka.rotate(90);
	stapka.move(180, 250);

	sf::CircleShape deseterokut(100, 10);
	deseterokut.setFillColor(sf::Color(118, 44, 119));
	deseterokut.move(75, 75);

	sf::CircleShape krug(60);
	krug.move(115, 115);
	krug.setFillColor(sf::Color(255, 190, 0));

	sf::ConvexShape list;
	list.setPointCount(4);
	list.setPoint(0, sf::Vector2f(170, 350));
	list.setPoint(1, sf::Vector2f(190, 340));
	list.setPoint(2, sf::Vector2f(250, 350));
	list.setPoint(3, sf::Vector2f(185, 360));
	list.setFillColor(sf::Color(80, 160, 30));

	sf::CircleShape sunce(20);
	sunce.setRadius(30);
	sunce.move(10, 10);
	sunce.setFillColor(sf::Color(255, 161, 0));


	while (myWindow->isOpen()) {

		radius = sunce.getRadius();
		
		if (granica == false) {
			radius++;
			if (radius > 50) {
				granica = true;
			}
		}
		else if (granica == true) {
			radius--;
			if (radius < 10) {
				granica = false;
			}
		}

		sunce.setRadius(radius);
    	myWindow->clear();
		myWindow->draw(sunce);
		myWindow->draw(deseterokut);
		myWindow->draw(krug);
		myWindow->draw(stapka);
		myWindow->draw(list);
		myWindow->display();
	}

}
