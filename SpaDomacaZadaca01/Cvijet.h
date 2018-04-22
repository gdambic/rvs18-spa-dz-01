#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include "ShootMechanics.h"
#include "Ship.h"

#define PI 3.1415926535897932384626433832795
#define PIdiv180 3.1415926535897932384626433832795/180

class Cvijet {
private:
	size_t circpoints;
	sf::Font font;
	sf::Text text, textLifeRemaining;
	sf::Time BeginningTime, EndTime, time, randTime;
	sf::Clock CurrentClock, RandClock;
	sf::Texture texSky, texBall, texRain, texProj,
		texFlame, texStalk, texFlower, texExplosion,
		texShip, texFlowerEnd;
	sf::RenderWindow* ptrWin;
	sf::Vector2i MPosition;
	sf::Vector2f Offset, PPos;
	ShootMechanics gun;
	Ship tSpaceShip;
	std::vector<Ship> SpaceShip;
	std::vector<Ship>::iterator itSpaceShip;
	
	sf::Sprite flowerEnd, rain, projectile, flower, sky;
	sf::Sprite flame[5];
	sf::CircleShape Ball;
	sf::RectangleShape Tube, stalk;
	float frameFlame, animSpeedFlame, frame,
		animSpeed, frameRain, animSpeedRain,
		frameProj, animSpeedProj, angle,
		radius, flowerHitPoints;
	bool jump, texLoaded, fontLoaded, isAlive;
	int tCount, TimeTemp, frameCount,
		frameCountFlame, frameCountRain,
		frameCountProj, shipCount, destroyedCount;
	std::stringstream ss;
public:
	Cvijet(sf::RenderWindow* window);
	bool draw();
	void Restart();
	bool GetIsAlive();
};

