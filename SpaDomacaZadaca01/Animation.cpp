#include "Animation.h"



Animation::Animation()
{
}

Animation::Animation(int x, int y, int width, int height)
{
	texture.loadFromFile("flower_sprite.png"); // error check... ubaci kasnije
	for (int i = 0; i < nFrames; i++) {
		frames[i] = {x+i*width,y,width, height };	
	}
}

void Animation::ApplyToSprite(sf::Sprite & s) const
{
	s.setTexture(texture);
	s.setTextureRect(frames[iFrame]);
}

void Animation::Advance()
{
	if (++iFrame >= nFrames) {
		iFrame = 0;
	}
}

void Animation::Update(float dt)
{
	time += dt;
	while (time >= holdTime) {
		time -= holdTime;
		Advance();
	}
}

Animation::~Animation()
{
}
