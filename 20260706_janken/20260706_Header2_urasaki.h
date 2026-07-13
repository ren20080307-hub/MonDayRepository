#pragma once

const int MAX_LEVEL = 5;

const int LEVEL_UP_EXP[MAX_LEVEL] = {40 , 80 , 120 , 160, 200};

const int MIN_NUMBER = 0;
const int MAX_NUMBER = 2;


int InputCheck(int min, int max);

int Hantei(int player, int enemy, int exp);

int LevelUp(int ex, int leve);

void Game()
{
	int level = 1;
	int exp = 0;

	while (level < MAX_LEVEL)
	{
		int playerhand = InputCheck(MIN_NUMBER, MAX_NUMBER);
		int enemyhand = InputCheck(MIN_NUMBER, MAX_NUMBER);


	     exp = Hantei(playerhand, enemyhand, exp);

		LevelUp(exp, level);
	}
}

