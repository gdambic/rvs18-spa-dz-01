#include "Cvijet.h"
#include <SFML/Window.hpp>
#include<iostream>





Cvijet::Cvijet(sf::RenderWindow * prozor)
{
	this->window = prozor;
	
}




/*void Cvijet::set_circle_color(sf::CircleShape & circle)// moguca implementacija promijene boje
{
	int boja;
	this->circle = circle;
	
	std::cout << "1. Zelena" << std::endl;
	std::cout << "2. Crvena" << std::endl;
	std::cout << "3. Zuta" << std::endl;
	std::cout << "4. Plava" << std::endl;
	std::cout << "5. Narancasta" << std::endl;
	std::cout << "6. Ljubicasta" << std::endl;
	std::cout << "Unesite boju cvijeta:";
	std::cin >> boja;
	
	switch (boja)
	{
	case 1:
		circle.setFillColor(sf::Color(51, 255, 51));
		break;
	case 2:
		circle.setFillColor(sf::Color(255, 0, 0));
		break;
	case 3:
		circle.setFillColor(sf::Color(204, 204, 0));
		break;
	case 4:
		circle.setFillColor(sf::Color(0, 0, 255));
		break;
	case 5:
		circle.setFillColor(sf::Color(198, 133, 4));
		break;
	case 6:
		circle.setFillColor(sf::Color(102, 0, 204));
		break;
	default:
		break;
	}
}*/

void Cvijet::set_grass(sf::RectangleShape & Grass_rectangle)
{
	this->Grass_rectangle = Grass_rectangle;
	Grass_rectangle.setSize(sf::Vector2f(410, 50));
	Grass_rectangle.setFillColor(sf::Color(153, 255, 51));
	Grass_rectangle.setPosition(0, 348);

	window->draw(Grass_rectangle);
}

void Cvijet::set_sun(sf::CircleShape & Sun_circle, float radijus,float radijus2,float boja1,float boja2,float boja3)
{
	this->Sun_circle = Sun_circle;
	

	Sun_circle.setRadius(radijus);
	Sun_circle.setPosition(290, 40);
	Sun_circle.setFillColor(sf::Color(boja1, boja2, boja3));
	
	window->draw(Sun_circle);

	Sun_circle.setRadius(radijus2);
	Sun_circle.setPosition(299, 50);
	Sun_circle.setFillColor(sf::Color(255, 128, 0));
	window->draw(Sun_circle);

	
	
}


void Cvijet::set_suncokret(sf::RectangleShape & Suncokret_rectangle, sf::CircleShape & Suncokret_circle, sf::ConvexShape& Suncokret_Convex)
{
	this->Suncokret_rectangle = Suncokret_rectangle;
	this->Suncokret_circle = Suncokret_circle;
	this->Suncokret_Convex = Suncokret_Convex;

	Suncokret_circle.setRadius(50);
	Suncokret_circle.setPosition(50, 100);
	Suncokret_circle.setFillColor(sf::Color(198, 133, 4));
	window->draw(Suncokret_circle);

	Suncokret_Convex.setFillColor(sf::Color(51, 255, 51));
	Suncokret_Convex.setPointCount(4);
	Suncokret_Convex.setPoint(0, sf::Vector2f(0, 0));
	Suncokret_Convex.setPoint(1, sf::Vector2f(150, -50));
	Suncokret_Convex.setPoint(2, sf::Vector2f(100, -20));
	Suncokret_Convex.setPoint(3, sf::Vector2f(50, 0));
	Suncokret_Convex.setPosition(100, 280);
	window->draw(Suncokret_Convex);

	Suncokret_rectangle.setSize(sf::Vector2f(10, 150));
	Suncokret_rectangle.setFillColor(sf::Color(51, 255, 51));
	Suncokret_rectangle.setPosition(95, 198);
	window->draw(Suncokret_rectangle);

	Suncokret_rectangle.setSize(sf::Vector2f(5, 20));
	Suncokret_rectangle.setFillColor(sf::Color(204, 204, 0));
	Suncokret_rectangle.setPosition(150, 100);
	Suncokret_rectangle.rotate(45);
	window->draw(Suncokret_rectangle);

	Suncokret_rectangle.setPosition(170, 150);
	Suncokret_rectangle.rotate(45);
	window->draw(Suncokret_rectangle);

	Suncokret_rectangle.setPosition(150, 200);
	Suncokret_rectangle.rotate(45);
	window->draw(Suncokret_rectangle);

	Suncokret_rectangle.setPosition(50, 200);
	Suncokret_rectangle.rotate(90);
	window->draw(Suncokret_rectangle);

	Suncokret_rectangle.setPosition(30, 150);
	Suncokret_rectangle.rotate(45);
	window->draw(Suncokret_rectangle);

	Suncokret_rectangle.setPosition(50, 100);
	Suncokret_rectangle.rotate(45);
	window->draw(Suncokret_rectangle);

	Suncokret_rectangle.setPosition(95, 80);
	Suncokret_rectangle.rotate(45);
	window->draw(Suncokret_rectangle);

}

void Cvijet::set_tulipan(sf::RectangleShape & Tulipan_rectangle, sf::CircleShape & Tulipan_circle, sf::ConvexShape& Tulipan_Convex)
{
	this->Tulipan_circle = Tulipan_circle;
	this->Tulipan_rectangle = Tulipan_rectangle;

	Tulipan_rectangle.setSize(sf::Vector2f(10, 150));
	Tulipan_rectangle.setFillColor(sf::Color(51, 255, 51));
	Tulipan_rectangle.setPosition(125, 198);
	window->draw(Tulipan_rectangle);

	Tulipan_circle.setRadius(50);
	Tulipan_circle.setPointCount(3);
	Tulipan_circle.setPosition(148, 90);
	Tulipan_circle.setFillColor(sf::Color(204, 204, 0));
	Tulipan_circle.rotate(60);
	window->draw(Tulipan_circle);

	Tulipan_Convex.setFillColor(sf::Color(51, 255, 51));
	Tulipan_Convex.setPointCount(4);
	Tulipan_Convex.setPoint(0, sf::Vector2f(0, 0));
	Tulipan_Convex.setPoint(1, sf::Vector2f(150, -50));
	Tulipan_Convex.setPoint(2, sf::Vector2f(100, -20));
	Tulipan_Convex.setPoint(3, sf::Vector2f(50, 0));
	Tulipan_Convex.setPosition(130, 300);
	window->draw(Tulipan_Convex);

	Tulipan_circle.setRadius(20);
	Tulipan_circle.setPointCount(3);
	Tulipan_circle.setPosition(148, 162);
	Tulipan_circle.setFillColor(sf::Color(0, 0, 0));
	Tulipan_circle.rotate(120);
	window->draw(Tulipan_circle);
}

void Cvijet::set_djurdjica(sf::RectangleShape & Djurdjica_rectangle, sf::CircleShape & Djurdjica_circle,float sirina,float visina, sf::ConvexShape& Djurdjica_Convex)
{
	this->Djurdjica_rectangle = Djurdjica_rectangle;
	this->Djurdjica_circle = Djurdjica_circle;
	

	Djurdjica_circle.setRadius(30);
	Djurdjica_circle.setPosition(220, 140);
	Djurdjica_circle.setFillColor(sf::Color(204, 204, 0));
	window->draw(Djurdjica_circle);

	Djurdjica_rectangle.setSize(sf::Vector2f(sirina, visina));
	Djurdjica_rectangle.setFillColor(sf::Color(51, 255, 51));
	Djurdjica_rectangle.setPosition(245, 198);
	window->draw(Djurdjica_rectangle);

	Djurdjica_rectangle.setSize(sf::Vector2f(15, 20));
	Djurdjica_rectangle.setFillColor(sf::Color(255, 255, 255));
	Djurdjica_rectangle.setPosition(275, 125);
	Djurdjica_rectangle.rotate(45);
	window->draw(Djurdjica_rectangle);

	Djurdjica_rectangle.setPosition(300, 160);
	Djurdjica_rectangle.rotate(45);
	window->draw(Djurdjica_rectangle);

	Djurdjica_rectangle.setPosition(290, 200);
	Djurdjica_rectangle.rotate(45);
	window->draw(Djurdjica_rectangle);

	Djurdjica_rectangle.setPosition(220, 210);
	Djurdjica_rectangle.rotate(90);
	window->draw(Djurdjica_rectangle);

	Djurdjica_rectangle.setPosition(200, 175);
	Djurdjica_rectangle.rotate(45);
	window->draw(Djurdjica_rectangle);

	Djurdjica_rectangle.setPosition(215, 135);
	Djurdjica_rectangle.rotate(45);
	window->draw(Djurdjica_rectangle);

}

void Cvijet::set_ljiljan(sf::RectangleShape & Ljiljan_rectangle, sf::CircleShape & Ljiljan_circle, sf::ConvexShape& Ljiljan_Convex)
{
	this->Ljiljan_rectangle = Ljiljan_rectangle;
	this->Ljiljan_circle = Ljiljan_circle;

	Ljiljan_rectangle.setSize(sf::Vector2f(10, 150));
	Ljiljan_rectangle.setFillColor(sf::Color(51, 255, 51));
	Ljiljan_rectangle.setPosition(195, 198);
	window->draw(Ljiljan_rectangle);

	Ljiljan_circle.setRadius(15);
	Ljiljan_circle.setPointCount(3);
	Ljiljan_circle.setPosition(210, 185);
	Ljiljan_circle.setFillColor(sf::Color(102, 0, 204));
	Ljiljan_circle.rotate(140);
	window->draw(Ljiljan_circle);

	Ljiljan_Convex.setFillColor(sf::Color(51, 255, 51));
	Ljiljan_Convex.setPointCount(4);
	Ljiljan_Convex.setPoint(0, sf::Vector2f(0, 0));
	Ljiljan_Convex.setPoint(1, sf::Vector2f(150, -50));
	Ljiljan_Convex.setPoint(2, sf::Vector2f(100, -20));
	Ljiljan_Convex.setPoint(3, sf::Vector2f(50, 0));
	Ljiljan_Convex.setPosition(130, 300);
	window->draw(Ljiljan_Convex);

	
	Ljiljan_circle.setPosition(210, 205);
	Ljiljan_circle.rotate(90);
	window->draw(Ljiljan_circle);

	Ljiljan_circle.setPosition(195, 208);
	Ljiljan_circle.rotate(90);
	window->draw(Ljiljan_circle);

	Ljiljan_circle.setPosition(185, 188);
	Ljiljan_circle.rotate(90);
	window->draw(Ljiljan_circle);

}



void Cvijet::set_cvijet(sf::RectangleShape& Suncokret_rectangle, sf::CircleShape& Suncokret_circle, sf::RectangleShape& Tulipan_rectangle, sf::CircleShape& Tulipan_circle, sf::RectangleShape& Djurdjica_rectangle, sf::CircleShape& Djurdjica_circle, sf::RectangleShape& Ljiljan_rectangle, sf::CircleShape& Ljiljan_circle, sf::ConvexShape& Suncokret_Convex, sf::ConvexShape& Tulipan_Convex, sf::ConvexShape& Djurdjica_Convex, sf::ConvexShape& Ljiljan_Convex)
{

	int cvijet;
	this->Suncokret_circle = Suncokret_circle;
	this->Tulipan_circle = Tulipan_circle;

	this->Suncokret_rectangle = Suncokret_rectangle;
	this->Tulipan_rectangle = Tulipan_rectangle;

	this->Djurdjica_circle = Djurdjica_circle;
	this->Djurdjica_rectangle = Djurdjica_rectangle;

	this->Ljiljan_circle = Ljiljan_circle;
	this->Ljiljan_rectangle = Ljiljan_rectangle;


	std::cout << "1. Suncokret" << std::endl;
	std::cout << "2. Tulipan" << std::endl;
	std::cout << "3. Djurdjica" << std::endl;
	std::cout << "4. Ljiljan" << std::endl;
	std::cout << "Unesite cvijet:";
	std::cin >> cvijet;

	switch (cvijet)
	{
	case 1:	
		set_suncokret(Suncokret_rectangle, Suncokret_circle,Suncokret_Convex);
		break;
	case 2:
		set_tulipan(Tulipan_rectangle, Tulipan_circle,Tulipan_Convex);
		break;
	case 3:
		set_djurdjica(Djurdjica_rectangle, Djurdjica_circle,10,150,Djurdjica_Convex);	
		break;
	case 4:
		set_ljiljan(Ljiljan_rectangle, Ljiljan_circle,Ljiljan_Convex);
		break;
	default:
		std::cout << "Niste odabrali dobar cvijet" << std::endl;
		break;

	}
	
}

void Cvijet::draw()
{

	
	set_sun(Sun_circle,20,10,204,204,0);
	set_grass(Grass_rectangle);
	set_cvijet(Suncokret_rectangle,Suncokret_circle,Tulipan_rectangle,Tulipan_circle,
	Djurdjica_rectangle,Djurdjica_circle,Ljiljan_rectangle,Ljiljan_circle,Suncokret_Convex,Tulipan_Convex,Djurdjica_Convex,Ljiljan_Convex);

	
}

void Cvijet::draw1()
{
	
	sf::Clock clock;
	sf::Time DeltaTime = clock.restart();
	
	
	set_sun(Sun_circle,20,10,204,204,0);
	
	set_grass(Grass_rectangle);
	set_suncokret(Suncokret_rectangle, Suncokret_circle,Suncokret_Convex);
	set_djurdjica(Djurdjica_rectangle, Djurdjica_circle,0,0,Djurdjica_Convex);
	sf::Time Elapsed = clock.getElapsedTime();

	//std::cout << Elapsed.asMicroseconds() << std::endl;
	


	if (Elapsed.asMilliseconds() == 1)
	{
		set_sun(Sun_circle, 50,30,0,0,153);
	}

	if (Elapsed.asMilliseconds() == 2)
	{
		set_sun(Sun_circle, 40,20,153,0,0);
	}


	if (Elapsed.asMilliseconds() == 3)
	{
		set_sun(Sun_circle, 30,40,153,0,76);
	}


	if (Elapsed.asMilliseconds() == 4)
	{
		set_sun(Sun_circle, 10,30,0,153,0);
	}
	if (Elapsed.asMilliseconds() == 5)
	{
		set_sun(Sun_circle, 20, 60, 0, 153, 0);
	}
	
	if (Elapsed.asMilliseconds() == 6)
	{
		set_sun(Sun_circle, 60, 20, 153, 0, 0);
	}
	
	clock.restart();
	
}


