#include "Player.h"
#include "Enemy.h"
#include <iostream>

int main()
{
	srand(time(0));

	Player Thomas;
	Enemy Lee;

	while (Thomas.isAlive() && Lee.isAlive())
	{
		int Turn = rand() % (2 - 0);

		if (Turn == 0)
		{
			if (Lee.isAlive() && Thomas.isAlive())
				Thomas.DoDamage(Lee, Thomas.getLightAttack());

			if (Thomas.isAlive() && Lee.isAlive())
				Lee.DoDamage(Thomas, Lee.getLightAttack());
		}
		
		if (Turn == 1)
		{
			if (Thomas.isAlive() && Lee.isAlive())
				Lee.DoDamage(Thomas, Lee.getLightAttack());

			if (Lee.isAlive() && Thomas.isAlive())
				Thomas.DoDamage(Lee, Thomas.getLightAttack());
		}
	}

	if (Thomas.isAlive())
		return 0;

	if (Lee.isAlive())
		return 1;
}