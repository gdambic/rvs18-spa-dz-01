#pragma once
using namespace std;
class NacrtajCvijet : public sf::Drawable, public sf::Transformable {
private:
	std::vector<sf::CircleShape> mParts;

public:
	NacrtajCvijet(sf::Color color, unsigned int petals, float centerRadius, float petalRadius);
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};