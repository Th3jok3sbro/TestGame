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
			{
				Thomas.DoDamage(Lee);
			}

			if (Thomas.isAlive() && Lee.isAlive())
			{
				Lee.DoDamage(Thomas);
			}
		}
		
		if (Turn == 1)
		{
			if (Thomas.isAlive() && Lee.isAlive())
			{
				Lee.DoDamage(Thomas);
			}

			if (Lee.isAlive() && Thomas.isAlive())
			{
				Thomas.DoDamage(Lee);
			}
		}
	}

	if (Thomas.isAlive())
		return 0;

	if (Lee.isAlive())
		return 1;
}