#include <SFML/Graphics.hpp>
#include <vector>
#include <math.h>
#include "Cvijet.h"
#include "NacrtajCvijet.h"

NacrtajCvijet::NacrtajCvijet(sf::Color color, unsigned int petals = 8, float centerRadius = 10, float petalRadius = 10) :
	mParts(petals + 1)// Resize the vector for all our plant parts
	{
		// Podešavanje cetra:
		mParts[0].setRadius(centerRadius);
		mParts[0].setFillColor(sf::Color::Yellow);
		mParts[0].setOrigin(centerRadius, centerRadius);
		mParts[0].setOutlineColor(sf::Color::Black);
		mParts[0].setOutlineThickness(1);

		// Kontrola za dijeljenje sa 0:
		if (!petals)
			return;

		// Definiranje kuta za svaku od latica:
		float delta = 2.0f * 3.1415f / petals;

		// Prolazim kroz svaku od latica:
		for (unsigned int i = 1; i <= petals; ++i) {

			// Koristim referencu kako bi mi bilo lakse citati:
			sf::CircleShape &petal(mParts[i]);

			petal.setRadius(petalRadius);
			petal.setFillColor(color);
			petal.setOrigin(petalRadius + (petalRadius + centerRadius) * std::sin(i * delta), petalRadius + (petalRadius + centerRadius) * std::cos(i * delta));
			petal.setOutlineColor(sf::Color::Black);
			petal.setOutlineThickness(1);
		}
	}

void NacrtajCvijet::draw(sf::RenderTarget &target, sf::RenderStates states) const {

		// Apply our own transform (from sf::Transformable) ovo sam nasao u library...
		states.transform *= getTransform();

		// Crtanje dijelova
		for (const sf::CircleShape &part : mParts)
			target.draw(part, states);
	}