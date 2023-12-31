#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Player
{
public:
	Player();
	~Player();

	void update(sf::Time deltaTime);
	void render(sf::RenderWindow& m_window);

	void setID(int id){ m_id = id; }
	int getID(){ return m_id; }

	void setName(std::string name) { m_name = name; }
	std::string getName(){ return m_name; }

	sf::Vector2f getPosition() { return m_circle.getPosition(); }
	float getRadius() { return m_circle.getRadius(); }

	bool getPlayerTag() { return isTagged; }

	sf::CircleShape m_circle{ 5 };
	bool isTagged;
private:

	void Init();
	void movement(sf::Time deltaTime);

	int m_id;
	std::string m_name;

	float playerSpeed = 200.0f;
	sf::Vector2f m_velocity;
};

