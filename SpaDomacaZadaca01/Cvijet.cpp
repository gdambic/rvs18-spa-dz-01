#include <SFML\Graphics.hpp>
#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow *popUp) {
	window = popUp;
}

void Cvijet::draw() {
	sf::CircleShape krug1(60);
	sf::CircleShape krug2(30);
	sf::RectangleShape line(sf::Vector2f(150, 15));
	sf::CircleShape triangle(30, 3);
		
	krug1.setFillColor(sf::Color(244, 66, 203));
	krug1.setOutlineColor(sf::Color(252, 22, 22));
	krug1.setOutlineThickness(20);	
	krug1.setPosition(50, 50);

	krug2.setFillColor(sf::Color(252, 252, 22));
	krug2.setOutlineColor(sf::Color(252, 22, 22));
	krug2.setOutlineThickness(10);
	krug2.setPosition(80, 80);

	line.rotate(90);
	line.setFillColor(sf::Color(110, 244, 66));
	line.setPosition(117, 188);

	triangle.setFillColor(sf::Color(110, 244, 66));
	triangle.setPosition(135, 195);
	triangle.rotate(45);

	if (frameClock.getElapsedTime().asSeconds() > 0.5f) {
		if (r == 0) {
			krug2.setRadius(50);
			krug2.setPosition(60, 60);
			r = 1;
		}
		else {
			krug2.setRadius(30);
			r = 0;
		}

		frameClock.restart();
	}

	window->draw(krug1);
	window->draw(krug2);
	window->draw(line);
	window->draw(triangle);		
	
}