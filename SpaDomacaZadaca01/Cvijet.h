#pragma once
#include <SFML/Graphics.hpp>
#include "Animation.h"

class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	void draw();
	void Update(float dt);
	~Cvijet();
private:
	enum class AnimationIndex {
		Prvi_red,
		Drugi_red,
		Treci_red,
		Cetvrti_red,
		Count
	};
private:
	sf::RenderWindow* adresa_prozora;
	sf::Sprite sprite;
	Animation animacije[int(AnimationIndex::Count)];       // ovo sam nesto probo ali je nepotrebno
	AnimationIndex curAnimation = AnimationIndex::Prvi_red;  // i neradi bas kak sam zamislio
	int brojac = 0;
	
};

