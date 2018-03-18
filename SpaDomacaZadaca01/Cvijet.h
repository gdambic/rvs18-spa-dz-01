#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include<string>
#include<vector>
#include<array>

class Cvijet
{
private:
sf::RenderWindow *window;

sf::CircleShape Suncokret_circle;
sf::RectangleShape Suncokret_rectangle;
sf::ConvexShape Suncokret_Convex;

sf::CircleShape Tulipan_circle;
sf::RectangleShape Tulipan_rectangle;
sf::ConvexShape Tulipan_Convex;

sf::CircleShape Djurdjica_circle;
sf::RectangleShape Djurdjica_rectangle;
sf::ConvexShape Djurdjica_Convex;

sf::CircleShape Ljiljan_circle;
sf::RectangleShape Ljiljan_rectangle;
sf::ConvexShape Ljiljan_Convex;



sf::CircleShape Sun_circle;

sf::RectangleShape Grass_rectangle;






public:
	Cvijet(sf::RenderWindow *prozor);
	//void set_circle_color(sf::CircleShape& circle);
	void set_grass(sf::RectangleShape& Grass_rectangle);
	void set_sun(sf::CircleShape& Sun_circle,float radijus,float radijus2,float boja1,float boja2,float boja3);
	void set_suncokret(sf::RectangleShape& Suncokret_rectangle, sf::CircleShape& Suncokret_circle, sf::ConvexShape& Suncokret_Convex);
	void set_tulipan(sf::RectangleShape& Tulipan_rectangle, sf::CircleShape& Tulipan_circle, sf::ConvexShape& Tulipan_Convex);
	void set_djurdjica(sf::RectangleShape& Djurdjica_rectangle, sf::CircleShape& Djurdjica_circle,float sirina,float visina, sf::ConvexShape& Djurdjica_Convex);
	void set_ljiljan(sf::RectangleShape& Ljiljan_rectangle, sf::CircleShape& Ljiljan_circle, sf::ConvexShape& Ljiljan_Convex);
	void set_cvijet(sf::RectangleShape& Suncokret_rectangle, sf::CircleShape& Suncokret_circle, sf::RectangleShape& Tulipan_rectangle, sf::CircleShape& Tulipan_circle, sf::RectangleShape& Djurdjica_rectangle, sf::CircleShape& Djurdjica_circle, sf::RectangleShape& Ljiljan_rectangle, sf::CircleShape& Ljiljan_circle, sf::ConvexShape& Suncokret_Convex, sf::ConvexShape& Tulipan_Convex, sf::ConvexShape& Djurdjica_Convex, sf::ConvexShape& Ljiljan_Convex);
	void draw();
	void draw1();

};

