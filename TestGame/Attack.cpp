#include "Attack.h"

Attack::Attack()
{
	m_UpperCut = rand() % (15 - 10);
	m_RoundHouse = rand() % (30 - 15);
	m_KarateChop = rand() % (10 - 5);
}

int Attack::getMoveOne()
{
	return m_KarateChop;
}

int Attack::getMoveTwo()
{
	return m_UpperCut;
}

int Attack::getMoveThree()
{
	return m_RoundHouse;
}
