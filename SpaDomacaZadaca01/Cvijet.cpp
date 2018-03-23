#include "Cvijet.h"
#include <chrono>
#include <iostream>
#include <thread>
using std::chrono::system_clock;
using namespace std::chrono_literals;


Cvijet::Cvijet(sf::RenderWindow * window)
{
	WindowPosition = window;
}

void Cvijet::draw()
{
	//Stabiljka
	sf::RectangleShape ment(sf::Vector2f(400,6));
	ment.setPosition(100,200);
	ment.setFillColor(sf::Color::Green);
	ment.rotate(90);
	ment.setPosition(445,240);
	

	//Sredina cvijeta
	sf::CircleShape flower(100);
	flower.setPosition(400,240);
	flower.setRadius(45);
	flower.setFillColor(sf::Color(255,180,0));
	flower.setOutlineThickness(20);
	flower.setOutlineColor(sf::Color(255,215,0));

	//Latice
	sf::CircleShape leaf1(60);
	leaf1.setPosition(340, 250);
	leaf1.setFillColor(sf::Color(255,230,250));
	leaf1.setRadius(60);
	
	sf::CircleShape leaf2(60);
	leaf2.setPosition(350,180);
	leaf2.setFillColor(sf::Color(255, 230, 250));

	sf::CircleShape leaf3(60);
	leaf3.setPosition(450, 220);
	leaf3.setFillColor(sf::Color(255, 230, 250));

	sf::CircleShape leaf4(60);
	leaf4.setPosition(415, 280);
	leaf4.setFillColor(sf::Color(255, 230, 250));

	sf::CircleShape leaf5(60);
	leaf5.setPosition(425, 170);
	leaf5.setFillColor(sf::Color(255, 230, 250));

	//Sunce
	sf::CircleShape Sun(60);
	Sun.setPosition(0, 0);
	Sun.setRadius(60);
	Sun.setFillColor(sf::Color::Yellow);



	//Crtanje stabiljke
	WindowPosition->draw(ment);
	//Crtanje cvijeta
	WindowPosition->draw(leaf1);//lijeva,dolje
	WindowPosition->draw(leaf2);//lijeva,gore
	WindowPosition->draw(leaf3);//srednja-ish
	WindowPosition->draw(leaf4);//desna,gore
	WindowPosition->draw(leaf5);//desna,dolje
	WindowPosition->draw(flower);//sredina cvijeta
	
	//Crtanje Sunca
	WindowPosition->draw(Sun);
	WindowPosition->display();
	std::this_thread::sleep_until(system_clock::now() + 0.3s);
	
	//Animation
	//Definiranje novog radiusa Sunca potrebnog za animaciju (shrinkanje Sunca)
	Sun.setRadius(70);
	Sun.setPosition(0, 0);
	Sun.setFillColor(sf::Color::Red);

	//Crtanje cvijeta
	WindowPosition->clear();
	WindowPosition->draw(ment);//Crtanje stabiljke
	WindowPosition->draw(leaf1);//lijeva,dolje
	WindowPosition->draw(leaf2);//lijeva,gore
	WindowPosition->draw(leaf3);//srednja-ish
	WindowPosition->draw(leaf4);//desna,gore
	WindowPosition->draw(leaf5);//desna,dolje
	WindowPosition->draw(flower);//sredina cvijeta
	WindowPosition->draw(Sun);//Crtanje Sunca

	WindowPosition->display();
	std::this_thread::sleep_until(system_clock::now() + 0.3s);
}

