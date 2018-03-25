#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* adresa)
{
	window = adresa;
}

void Cvijet::set_radius_sunce(int r)
{
	radius_of_sunce = r;
}

void Cvijet::set_position_sunce(float x, float y)
{
	sunce_position_x = x;
	sunce_position_y = y;
}

void Cvijet::set_color_sunce(sf::Color boja)
{
	sunce_boja = boja;
}


void Cvijet::set_color_SunceRub(short int c1, short int c2, short int c3)
{
	sunce_rub_boja1 = c1;
	sunce_rub_boja2 = c2;
	sunce_rub_boja3 = c3;
}



void Cvijet::animacija()
{

	float time = clock.getElapsedTime().asSeconds();
	float delta = clockFrame.restart().asSeconds();

	if (time >= 2)
	{
		clock.restart();
	}

	if (time > 1)
	{
		sunce_thickness -= delta * 20;
		
		
		if (sunce_thickness < 0)
			sunce_thickness = 0;
		
	}
	else if (time > 0)
	{		
		sunce_thickness += delta * 20;
		if (sunce_thickness > 20)
			sunce_thickness = 20;
	}
}


void Cvijet::draw()
{
	//Sunce
	animacija();
	sf::CircleShape sunce(radius_of_sunce);
	sunce.setFillColor(sf::Color(sunce_boja));
	sunce.setPosition(sunce_position_x, sunce_position_y);
	sunce.setOutlineThickness(sunce_thickness);
	sunce.setOutlineColor(sf::Color(sunce_rub_boja1, sunce_rub_boja2, sunce_rub_boja3));

	//Površina
	sf::ConvexShape povrsina;
	povrsina.setPointCount(4);
	povrsina.setPoint(0, sf::Vector2f(0, 400));
	povrsina.setPoint(1, sf::Vector2f(500, 250));
	povrsina.setPoint(2, sf::Vector2f(500, 500));
	povrsina.setPoint(3, sf::Vector2f(0, 500));
	povrsina.setFillColor(sf::Color::Green);

	window->draw(povrsina);

	for (int i = 0; i < 3; i++)
	{
		float x = 90 + 150 * i;
		float y = 180 - 30 * i;

		sf::CircleShape Tucak(25);
		Tucak.setPosition(x - 20, y);
		Tucak.setFillColor(sf::Color::Yellow);
		Tucak.setOutlineThickness(30);
		Tucak.setOutlineColor(sf::Color::Red);

		sf::RectangleShape stabljika(sf::Vector2f(210, 6));
		stabljika.rotate(90);
		stabljika.setPosition(x + 5, y + 70);
		stabljika.setFillColor(sf::Color(51, 105, 30));

		sf::ConvexShape list;
		list.setFillColor(sf::Color(51, 105, 30));
		list.setPointCount(5);
		list.setPoint(0, sf::Vector2f(x + 5, y + 170));
		list.setPoint(1, sf::Vector2f(x + 40, y + 140));
		list.setPoint(2, sf::Vector2f(x + 80, y + 150));
		list.setPoint(3, sf::Vector2f(x + 35, y + 170));
		list.setPoint(4, sf::Vector2f(x + 5, y + 170));

		sf::CircleShape oblak1(30);
		oblak1.setPosition(130, 20);
		sf::CircleShape oblak2(25);
		oblak2.setPosition(165, 20);
		sf::CircleShape oblak3(15);
		oblak3.setPosition(195, 20);


		window->draw(stabljika);
		window->draw(list);
		window->draw(Tucak);
		window->draw(oblak1);
		window->draw(oblak2);
		window->draw(oblak3);
	}

	window->draw(sunce);
}
