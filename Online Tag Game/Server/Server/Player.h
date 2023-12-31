#pragma once
#include <SFML/System/Vector2.hpp>
#include <SFML/Network/TcpSocket.hpp>
#include <memory>
#include <string>

class Player
{
public:
	Player(std::unique_ptr<sf::TcpSocket>* socket, sf::Vector2f position, int id);

	void update(float deltaTime);

	void setPosition(sf::Vector2f position);
	void setPosition(float x, float y);
	sf::Vector2f getPosition();
	
	void setVelocity(sf::Vector2f velocity);
	void setVelocity(float x, float y);
	sf::Vector2f getVelocity();
	
	void setName(const std::string name);
	std::string getName();

	int getId();

	sf::TcpSocket* getSocket();

	void setTimeout(sf::Time time);
	sf::Time getTimeout();

private:

	std::unique_ptr<sf::TcpSocket> m_socket = nullptr;

	sf::Vector2f m_position;
	sf::Vector2f m_velocity;
	std::string m_name;
	sf::Time m_timeout;

	int m_id;
};

