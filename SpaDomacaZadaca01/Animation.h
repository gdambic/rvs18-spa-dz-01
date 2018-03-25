#pragma once
#include <SFML\Graphics.hpp>

class Animation
{
public:
	Animation();
	Animation(int x , int y, int width , int height);
	void ApplyToSprite(sf::Sprite & s) const;
	void Update(float dt);
	~Animation();
private:
	void Advance();
private:
	static constexpr int nFrames = 6;
	static constexpr float holdTime = 0.17f;
	sf::Texture texture;
	sf::IntRect frames[nFrames];
	int iFrame = 0; 
	float time = 0.0f;

};

