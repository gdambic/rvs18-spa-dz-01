#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow * window)
{
	Rwindow = window;
}

void Cvijet::draw()
{
	//draws upper part of the flower 
	sf::CircleShape flower(50);
	flower.setPosition(60, 130);
	flower.setFillColor(sf::Color(238, 242, 26));
	flower.setOutlineThickness(25);
	flower.setOutlineColor(sf::Color(209, 25, 241));

	
	//draws the stem
	sf::RectangleShape stem(sf::Vector2f(150, 10));
	stem.setFillColor(sf::Color(69, 173, 53));
	stem.setPosition(115, 255);
	stem.rotate(90);

	
	//draws the sun
	sf::CircleShape sun(100);
	sun.setPosition(300, -110);
	sun.setFillColor(sf::Color::Yellow);

	
	//draws the leaf
	sf::ConvexShape leaf;
	leaf.setPointCount(6);
	leaf.setPoint(0, sf::Vector2f(115, 330));
	leaf.setPoint(1, sf::Vector2f(150, 310));
	leaf.setPoint(2, sf::Vector2f(200, 290));
	leaf.setPoint(3, sf::Vector2f(250, 280));
	leaf.setPoint(4, sf::Vector2f(200, 330));
	leaf.setPoint(5, sf::Vector2f(160, 340));
	leaf.setFillColor(sf::Color(69, 173, 53));

	
	//draws the rays of the sun from the upper ray
	EllipseShape sunray1(sf::Vector2f(10, 55));
	sunray1.setPosition(sf::Vector2f(290, 2));
	sunray1.setFillColor(sf::Color::Yellow);
	sunray1.rotate(90);

	EllipseShape sunray2(sf::Vector2f(10, 40));
	sunray2.setPosition(sf::Vector2f(295, 33));
	sunray2.setFillColor(sf::Color::Yellow);
	sunray2.rotate(70);

	EllipseShape sunray3(sf::Vector2f(10, 55));
	sunray3.setPosition(sf::Vector2f(315, 60));
	sunray3.setFillColor(sf::Color::Yellow);
	sunray3.rotate(45);

	EllipseShape sunray4(sf::Vector2f(10, 40));
	sunray4.setPosition(sf::Vector2f(345, 85));
	sunray4.setFillColor(sf::Color::Yellow);
	sunray4.rotate(20);

	EllipseShape sunray5(sf::Vector2f(10, 55));
	sunray5.setPosition(sf::Vector2f(378, 100));
	sunray5.setFillColor(sf::Color::Yellow);

	
	
	Rwindow->draw(flower);
	Rwindow->draw(stem);
	Rwindow->draw(sun);
	Rwindow->draw(leaf);
	Rwindow->draw(sunray1);
	Rwindow->draw(sunray2);
	Rwindow->draw(sunray3);
	Rwindow->draw(sunray4);
	Rwindow->draw(sunray5);
	Rwindow->display();
	std::this_thread::sleep_until(system_clock::now() + 0.8s);


	//changes the rays of the sun as animation
	sunray1.setRadius(sf::Vector2f(10, 40));
	sunray2.setRadius(sf::Vector2f(10, 55));
	sunray3.setRadius(sf::Vector2f(10, 40));
	sunray4.setRadius(sf::Vector2f(10, 55));
	sunray5.setRadius(sf::Vector2f(10, 40));
	Rwindow->clear(sf::Color(137, 202, 255));
	Rwindow->draw(flower);
	Rwindow->draw(stem);
	Rwindow->draw(sun);
	Rwindow->draw(leaf);
	Rwindow->draw(sunray1);
	Rwindow->draw(sunray2);
	Rwindow->draw(sunray3);
	Rwindow->draw(sunray4);
	Rwindow->draw(sunray5);
	Rwindow->display();
	std::this_thread::sleep_until(system_clock::now() + 0.8s);
}
