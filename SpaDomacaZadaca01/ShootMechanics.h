#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>

#define PI 3.1415926535897932384626433832795
#define PIdiv180 3.1415926535897932384626433832795/180

class ShootMechanics {
private:
	int LifeTime, AliveTime;
	bool Firing, FontLoaded;
	float Speed, tRot;
	sf::RenderWindow* winPtr;
	sf::Vector2f Origin, Target;
	sf::Color RGB;
	sf::Font font;
	sf::Text text;
	sf::Clock clock;
	sf::Time time;
	sf::Sprite projectile;
public:
	ShootMechanics();
	ShootMechanics(sf::RenderWindow* winPtr);
	ShootMechanics(sf::RenderWindow* winPtr, sf::Vector2f Origin, sf::Vector2f Target);
	void setWinPtr(sf::RenderWindow* winPtr);
	void setOrigin(float xOrigin, float yOrigin);
	void setOrigin(sf::Vector2f Origin);
	void setTarget(float xTarget, float yTarget);
	void setTarget(sf::Vector2f Target);
	void setColor(sf::Color RGB);
	void setLifeTime(int milis);
	void setFiring(bool firing);
	void setFontText(sf::Font font, sf::Text text);
	void setFontText(sf::Font font, sf::String text, unsigned int Size, sf::Color tColor, sf::Text::Style tStyle);
	int getLifeTime();
	int getAliveTime();
	bool isFiring();
	sf::String getText();
	sf::Color getColor();

	void Fire();
	sf::Sprite draw();
};

