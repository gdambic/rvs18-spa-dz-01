#include "Cvijet.h"

#include<iostream>
#include<array>
Cvijet::Cvijet()
{
}

Cvijet::Cvijet(sf::RenderWindow *window)
{
	this->window = window;
	
}
void Cvijet::set_a(sf::CircleShape & a,float radius,float radius2,sf::Color &b)
{
	this->a = a;
	this->b = b;
	a.setRadius(radius);
	a.setFillColor(sf::Color::Cyan);
	window->draw(a);
	a.setRadius(radius2);
	a.setFillColor(sf::Color::Blue);
	window->draw(a);
	//std::this_thread::sleep_until(system_clock::now() + 0.3s);
}

void Cvijet::draw()
{
	sf::Clock clock;
	set_a(a, 10,20, b);
	sf::Time Elapsed = clock.getElapsedTime();
	sf::Time DeltaTime = clock.restart();
	std::cout << Elapsed.asMilliseconds() << std::endl;
	//a.move(10 * clock.getElapsedTime().asSeconds(), 5);
	//a.move(sf::Vector2f(0, 0.1f));
	
	if ( Elapsed.asMilliseconds() <7)
	{
		a.setFillColor(sf::Color::Black);
		set_a(a, 30,35, b);
		a.move(sf::Vector2f(0.2f, 0.1f));
	}
	else if (Elapsed.asMilliseconds() > 7)
	{
		a.setFillColor(sf::Color::Black);
		set_a(a, 25, 30, b);
		a.move(sf::Vector2f(-5.5f, 0));
	}
	clock.restart();
	
	
}





 




