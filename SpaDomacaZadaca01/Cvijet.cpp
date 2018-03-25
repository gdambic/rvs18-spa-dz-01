#include "Cvijet.h"

// Constructor
Cvijet::Cvijet(sf::RenderWindow *window)
{
	sunceDraw();
	cvijetDraw();
	stapkaDraw();
	listDraw();	
}

// Drawing
void Cvijet::cvijetDraw()
{
	cvijet.setPosition(170, 70);
	cvijet.setRadius(80);
	cvijetTexture.loadFromFile("cvijettexture.jpg");
	cvijet.setTexture(&cvijetTexture);
}

void Cvijet::stapkaDraw()
{
	stapka.setPosition(245, 190);
	stapka.setFillColor(sf::Color(50, 500, 100));
	stapka.setSize(sf::Vector2f(10, 150));
}

void Cvijet::listDraw()
{
	listTexture.loadFromFile("listtexture.jpg");
	list.setTexture(&listTexture);

	list.setPointCount(6);
	list.setFillColor(sf::Color(100, 250, 50));
	list.setPoint(0, sf::Vector2f(230, 230));
	list.setPoint(1, sf::Vector2f(245, 260));
	list.setPoint(2, sf::Vector2f(200, 270));
	list.setPoint(3, sf::Vector2f(170, 250));
	list.setPoint(4, sf::Vector2f(190, 240));
	list.setPoint(5, sf::Vector2f(180, 210));
}

void Cvijet::sunceDraw()
{
	sunce.setPosition(380, 40);
	sunce.setRadius(20);
	sunceTexture.loadFromFile("suncetexture.jpg");
	sunce.setTexture(&sunceTexture);
}

 void Cvijet::draw(sf::RenderWindow &window)
{		 
	 window.draw(sunce);
	 window.draw(cvijet);
	 window.draw(stapka);	 
	 window.draw(list);	 
}


