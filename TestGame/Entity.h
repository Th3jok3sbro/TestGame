#pragma once
#include "Attack.h"

class Entity
{
private:
	int m_Health;
	int m_HealthLvl;
	int m_LightAttack;
	int m_NormalAttack;
	int m_HeavyAttack;
	Attack Assign;
public:
	Entity();
	int DoDamage(Entity& other, int move);
	bool isAlive();
	int getHealth();
	int getHealthLvl();
	int getLightAttack();
	int getNormalAttack();
	int getHeavyAttack();
};