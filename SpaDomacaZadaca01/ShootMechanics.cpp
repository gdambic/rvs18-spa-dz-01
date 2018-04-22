#include "ShootMechanics.h"

ShootMechanics::ShootMechanics() {
	ShootMechanics::ShootMechanics(nullptr, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f));
}

ShootMechanics::ShootMechanics(sf::RenderWindow* winPtr) {
	ShootMechanics::ShootMechanics(winPtr, sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f));
}

ShootMechanics::ShootMechanics(sf::RenderWindow* winPtr, sf::Vector2f Origin, sf::Vector2f Target) {
	this->winPtr = winPtr;
	setOrigin(Origin);
	setTarget(Target);
	setColor(sf::Color(255, 0, 205));
	setLifeTime(1000);
	Firing = 0;
	FontLoaded = 0;
	Speed = 20.f;
}

void ShootMechanics::setWinPtr(sf::RenderWindow * winPtr) {
	this->winPtr = winPtr;
}

void ShootMechanics::setOrigin(float xOrigin, float yOrigin) {
	Origin.x = xOrigin;
	Origin.y = yOrigin;
}

void ShootMechanics::setOrigin(sf::Vector2f Origin) {
	this->Origin = Origin;
}

void ShootMechanics::setTarget(float xTarget, float yTarget) {
	Target.x = xTarget;
	Target.y = yTarget;
}

void ShootMechanics::setTarget(sf::Vector2f Target) {
	this->Target = Target;
}

void ShootMechanics::setColor(sf::Color RGB) {
	this->RGB = RGB;
}

void ShootMechanics::setLifeTime(int milis) {
	LifeTime = milis;
}

void ShootMechanics::setFiring(bool firing) {
	Firing = firing;
}

int ShootMechanics::getLifeTime() {
	return LifeTime;
}

int ShootMechanics::getAliveTime() {
	return static_cast<int>(time.asMilliseconds());
}

void ShootMechanics::setFontText(sf::Font font, sf::Text text) {
	this->text = text;
	this->text.setFont(font);
	this->text.setStyle(sf::Text::Italic);
	FontLoaded = 1;
}

void ShootMechanics::setFontText(sf::Font font, sf::String text, unsigned int Size, sf::Color tColor, sf::Text::Style tStyle) {
	this->text.setString(text);
	this->text.setCharacterSize(Size);
	this->text.setFillColor(tColor);
	this->text.setStyle(sf::Text::Italic);
	this->text.setFont(font);
	FontLoaded = 1;
}

bool ShootMechanics::isFiring() {
	return Firing;
}

sf::String ShootMechanics::getText() {
	if (FontLoaded && Firing)
		return sf::String("Reloading...");
	return sf::String("");
}

sf::Color ShootMechanics::getColor() {
	return RGB;
}

void ShootMechanics::Fire() {
	clock.restart();
	Firing = 1;
}

sf::Sprite ShootMechanics::draw() {
	if (!Firing) {
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			Speed = 20.f;
			Fire();
			projectile.setPosition(Origin);
			if (projectile.getPosition() != Origin)
				projectile.setPosition(Origin + sf::Vector2f(17.5f, 25.f));
			time = clock.getElapsedTime();
		}
		else return projectile;
	}
	else if (clock.getElapsedTime().asMilliseconds() > time.asMilliseconds() + LifeTime) {
		Firing = 0;
	}
	
	float rot = static_cast<float>(180.f + (atan2((Origin.y - Target.y), (Origin.x - Target.x + 7.5)))*(180.f / PI));
	projectile.setRotation(rot + 90.f);
	sf::Vector2f add(cos(rot * PIdiv180) * Speed, sin(rot * PIdiv180) * Speed);	//lower fps means smaller range
	projectile.move(add);
	//std::cout << "PROJECTILE TRAJECTORY: AddedVector(" << add.x << ", " << add.y << ") -> CurrentPos(" << projectile.getPosition().x << ", " << projectile.getPosition().y << ")\n";

	return projectile;
}