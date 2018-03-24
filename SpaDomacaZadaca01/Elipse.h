#pragma once
#include <SFML\Graphics.hpp>
#include <thread>
#include <chrono>

class EllipseShape : public sf::Shape
{
public:
	explicit EllipseShape(const sf::Vector2f& radius = sf::Vector2f(0, 0));
	void setRadius(const sf::Vector2f& radius);
	const sf::Vector2f& getRadius() const;
	virtual unsigned int getPointCount() const;
	virtual sf::Vector2f getPoint(unsigned int index) const;
private:
	sf::Vector2f m_radius;
};