#include "Entity.h"

Entity::Entity()
{
	m_Health = 100;
	m_Power = rand() % (20 - 0);
}

int Entity::DoDamage(Entity & other)
{
	other.m_Health -= m_Power;
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

int Entity::getPower()
{
	return m_Power;
}
