#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	void draw(std::vector<sf::ConvexShape>& alltheshapes);
	void Init(std::vector<sf::ConvexShape>& alltheshapes);
	void Animation(std::vector<sf::ConvexShape>& alltheshapes,bool epilepsy);
private:
	void CreatePetal(sf::ConvexShape& petal);
	void CreateCore(sf::ConvexShape& core);
	
private://I like putting variables in a seperate private thingy to keep it neat, let me live my life.
	int const LIMITX =25; //These are the reason the wind effect won't work while editing. 
							   //If you wanna do it differently a (good) idea might be to tie the animation to an invisible rectangle that represents the wind, then you can do getGlobalBounds().contains or whatever else.
	int const LIMITY = 25;
	int MovementX = 0;
	int MovementY = 0;
	sf::RenderWindow* window;
	bool goright = true;
	bool godown = true;
};


