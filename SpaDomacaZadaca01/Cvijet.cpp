#include "Cvijet.h"
#include<SFML\Graphics.hpp>

Cvijet::Cvijet(sf::RenderWindow* window)
{
	animacije[int(AnimationIndex::Prvi_red)] = Animation(0,0,150,138);
	animacije[int(AnimationIndex::Drugi_red)] = Animation(0, 138, 150, 138);
	animacije[int(AnimationIndex::Treci_red)] = Animation(0, 138*2, 150, 138);
	animacije[int(AnimationIndex::Cetvrti_red)] = Animation(0, 138*3, 150, 138);
	adresa_prozora = window;
}

void Cvijet::draw()
{
	adresa_prozora->draw(sprite);
}


void Cvijet::Update(float dt)
{
	if (brojac == 1) {
		curAnimation = AnimationIndex::Drugi_red;   // tu treba nesto promijenit
	}
	
	animacije[int(curAnimation)].Update(dt);
	animacije[int(curAnimation)].ApplyToSprite(sprite);
	brojac++;
}

Cvijet::~Cvijet()
{
}
