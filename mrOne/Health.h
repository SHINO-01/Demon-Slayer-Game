#ifndef HEALTH_H_
#define HEALTH_H_
int levelOneHealth = 9;


void health()
{
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{/////////////////////enemy range
		if (basicEnemyOne[i].enemyCx - playerCoordX <= 60 && !basicEnemyOne[i].healthCount && !basicEnemyOne[i].deadByBasicAtk && !basicEnemyOne[i].deadBySkillOne && !basicEnemyOne[i].deadBySkillTwo && !basicEnemyOne[i].deadBySkillUlt)
		{
			levelOneHealth--;
			basicEnemyOne[i].healthCount = true;
		}
	}

	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (basicEnemyTwo[i].enemyCx - playerCoordX <= 60 && !basicEnemyTwo[i].healthCount && !basicEnemyTwo[i].deadByBasicAtk && !basicEnemyTwo[i].deadBySkillOne && !basicEnemyTwo[i].deadBySkillTwo && !basicEnemyTwo[i].deadBySkillUlt)
		{
			levelOneHealth--;
			basicEnemyTwo[i].healthCount = true;
		}
	}

	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (basicEnemyThree[i].enemyCx - playerCoordX <= 60 && !basicEnemyThree[i].healthCount && !basicEnemyThree[i].deadByBasicAtk && !basicEnemyThree[i].deadBySkillOne && !basicEnemyThree[i].deadBySkillTwo && !basicEnemyThree[i].deadBySkillUlt)
		{
			levelOneHealth--;
			basicEnemyThree[i].healthCount = true;
		}
	}

	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (basicEnemyFour[i].enemyCx - playerCoordX <= 60 && !basicEnemyFour[i].healthCount && !basicEnemyFour[i].deadByBasicAtk && !basicEnemyFour[i].deadBySkillOne && !basicEnemyFour[i].deadBySkillTwo && !basicEnemyFour[i].deadBySkillUlt)
		{
			levelOneHealth--;
			basicEnemyFour[i].healthCount = true;
		}
	}

}

#endif // !HEALTH_H_