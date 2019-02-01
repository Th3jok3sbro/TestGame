#pragma once
#include <cstdlib>
#include <ctime>

class Entity
{
private:
	int m_Health;
	int m_Power;
public:
	Entity();
	int baseLvl;
	int healthLvl;
	int powerLvl;
	int DoDamage(Entity& other);
	bool isAlive();
	int getHealth();
	int getPower();
};