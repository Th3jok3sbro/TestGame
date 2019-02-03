#include "Entity.h"

Entity::Entity()
{
	//Stats::
	m_Health = 100;

	//Levels::
	m_HealthLvl = 1;

	//Moveset
	m_LightAttack = Assign.getMoveOne();
	m_NormalAttack = Assign.getMoveTwo();
	m_HeavyAttack = Assign.getMoveThree();
}

int Entity::DoDamage(Entity & other, int move)
{
	other.m_Health -= move;
	return other.m_Health;
}

bool Entity::isAlive()
{
	if (m_Health > 0)
		return true;

	return false;
}

int Entity::getHealth()
{
	return m_Health;
}

int Entity::getHealthLvl()
{
	return m_HealthLvl;
}

int Entity::getLightAttack()
{
	return m_LightAttack;
}

int Entity::getNormalAttack()
{
	return m_NormalAttack;
}

int Entity::getHeavyAttack()
{
	return m_HeavyAttack;
}
