#pragma once
#include <cstdlib>
#include <ctime>

class Attack
{
private:
	int m_UpperCut;
	int m_RoundHouse;
	int m_KarateChop;
public:
	Attack();
	int getMoveOne();
	int getMoveTwo();
	int getMoveThree();
};