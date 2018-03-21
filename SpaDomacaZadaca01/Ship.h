#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <time.h>
#include "EllipseShape.hpp"

class Ship {
private:
	sf::Vector2f Pos;
	float xSpeed, ySpeed, toMove, frame, animSpeed;
	bool Up, isAlive, texLoaded, Dir, toRemove, isFiring;
	int Transition, frameCount, firingCount;
	sf::Texture* ship;
	sf::Texture* explosion;
	sf::Sprite* Explosion;
	sf::Sprite* SpaceShip;
	sf::Clock clock, fireClock;
	sf::Time timeC, firing, timeTot;
	sf::RenderWindow* winPtr;
	sf::RectangleShape* Laser;
	void xyTransition();
public:
	Ship();
	Ship(sf::RenderWindow* winPtr, sf::Vector2f Pos);
	void SetPos(sf::Vector2f Pos);
	void SetWinPtr(sf::RenderWindow* winPtr);
	void LoadTex(sf::Texture *ship, sf::Texture *explosion);
	void SetState(bool state);
	void Destroy();
	sf::Vector2f GetPos();
	float GetXSpeed();
	bool GetState();
	bool GetToRemove();
	bool isHit(sf::Vector2f Point);
	bool isHit(float xPoint, float yPoint);
	void Fire();
	bool GetIsFiring();

	void draw();
	void draw(sf::RenderWindow* winPtr);
};

