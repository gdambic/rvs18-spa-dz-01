#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cvijet.h"
#include "NacrtajCvijet.h"




Cvijet::Cvijet(sf::RenderWindow *window) : mWindow(window) {
	// Setup mParts similar to the example above
}

// Ovo je funkcija za crtanje u mainu:
void Cvijet::draw(){

	sf::Clock clock;
	sf::Time time;

	time = clock.getElapsedTime();
	//std::cout << time.asSeconds() << endl;
	// create an empty shape
	sf::ConvexShape convex;

	// resize it to 5 points
	convex.setPointCount(5);

	// define the points
	convex.setPoint(0, sf::Vector2f(0, 0));
	convex.setPoint(1, sf::Vector2f(150, 10));
	convex.setPoint(2, sf::Vector2f(120, 90));
	convex.setPoint(3, sf::Vector2f(30, 100));
	convex.setPoint(4, sf::Vector2f(0, 50));

	convex.move(sf::Vector2f(0.000000002 * time.asMilliseconds(), 10));
	clock.restart().asSeconds();
	mWindow->draw(convex);

	// Testirao sam kako izgleda drugi ovaj mi je bolji:
	NacrtajCvijet cvijet2(sf::Color::Magenta, 8, 10, 10);
	cvijet2.setPosition(sf::Vector2f(200, 100));
	// Crtanje prema main screenu:
	//mWindow->draw(cvijet1);
	mWindow->draw(cvijet2);

	// Crtam stabiljku:
	sf::RectangleShape stabiljka(sf::Vector2f(150, 5));
	stabiljka.setPosition(sf::Vector2f(200, 130));
	stabiljka.rotate(90);
	stabiljka.setFillColor(sf::Color(100, 250, 50));
	// Printam stabiljku:
	mWindow->draw(stabiljka);


	// Crtam tlo :
	sf::RectangleShape tlo(sf::Vector2f(400, 150));
	tlo.setPosition(sf::Vector2f(0, 280));
	tlo.rotate(0);
	tlo.setFillColor(sf::Color(139, 69, 19));
	// Printam stabiljku:
	mWindow->draw(tlo);

	// Kreiram list:
	// create an empty shape
	sf::ConvexShape listic;
	// resize it to 5 points
	listic.setPointCount(4);
	// define the points
	listic.setPoint(0, sf::Vector2f(30, 70));
	listic.setPoint(1, sf::Vector2f(10, 70));
	listic.setPoint(2, sf::Vector2f(80, 80));
	listic.setPoint(3, sf::Vector2f(0, 0));
	listic.setFillColor(sf::Color(100, 250, 50));
	listic.setPosition(sf::Vector2f(115, 120));

	// Crtam list:
	mWindow->draw(listic);
}

