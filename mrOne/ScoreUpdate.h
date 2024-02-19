#ifndef SCOREUPDATE_H_
#define SCOREUPDATE_H_
#include "sound.h"

#include <sstream>
#include <string>

bool counterInstructions[3];
bool instructionsImageShown[3];//////////////////
int scoreCounter = 0;
int score = 0;
bool onlyIns = false;
bool playerPosresetDone = false;
bool waitingForNextLevel = false;
bool updated = false;
bool preLevelTwo = false;
bool stopSkill = false;

void levelUpdateImage()////////////////////

{
	for (int i = 0; i < 3; i++)
	{
		counterInstructions[i] = true;
		instructionsImageShown[i] = false;
	}
}

void showScores()
{
	/////////
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyOne[i].deathScoreUpdated && basicEnemyOne[i].deadByBasicAtk)
		{
			score++;
			basicEnemyOne[i].deathScoreUpdated = true;
			//cout << score << endl;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyTwo[i].deathScoreUpdated && basicEnemyTwo[i].deadByBasicAtk)
		{
			score++;
			basicEnemyTwo[i].deathScoreUpdated = true;
			//cout << score << endl;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyOne[i].deathScoreUpdated && basicEnemyOne[i].deadBySkillOne)
		{
			score++;
			basicEnemyOne[i].deathScoreUpdated = true;
			//cout << score << endl;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyTwo[i].deathScoreUpdated && basicEnemyTwo[i].deadBySkillOne)
		{
			score++;
			basicEnemyTwo[i].deathScoreUpdated = true;
			//cout << score << endl;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyOne[i].deathScoreUpdated && basicEnemyOne[i].deadBySkillTwo)
		{
			score++;
			basicEnemyOne[i].deathScoreUpdated = true;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyTwo[i].deathScoreUpdated && basicEnemyTwo[i].deadBySkillTwo)
		{
			score++;
			basicEnemyTwo[i].deathScoreUpdated = true;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyOne[i].deathScoreUpdated && basicEnemyOne[i].deadBySkillUlt)
		{
			score++;
			basicEnemyOne[i].deathScoreUpdated = true;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyTwo[i].deathScoreUpdated && basicEnemyTwo[i].deadBySkillUlt)
		{
			score++;
			basicEnemyTwo[i].deathScoreUpdated = true;
		}
	}/////////////////////



	//////////////
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyThree[i].deathScoreUpdated && basicEnemyThree[i].deadByBasicAtk)
		{
			score++;
			basicEnemyThree[i].deathScoreUpdated = true;
			//cout << score << endl;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyFour[i].deathScoreUpdated && basicEnemyFour[i].deadByBasicAtk)
		{
			score++;
			basicEnemyFour[i].deathScoreUpdated = true;
			//cout << score << endl;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyThree[i].deathScoreUpdated && basicEnemyThree[i].deadBySkillOne)
		{
			score++;
			basicEnemyThree[i].deathScoreUpdated = true;
			//cout << score << endl;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyFour[i].deathScoreUpdated && basicEnemyFour[i].deadBySkillOne)
		{
			score++;
			basicEnemyFour[i].deathScoreUpdated = true;
			//cout << score << endl;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyThree[i].deathScoreUpdated && basicEnemyThree[i].deadBySkillTwo)
		{
			score++;
			basicEnemyThree[i].deathScoreUpdated = true;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyFour[i].deathScoreUpdated && basicEnemyFour[i].deadBySkillTwo)
		{
			score++;
			basicEnemyFour[i].deathScoreUpdated = true;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyThree[i].deathScoreUpdated && basicEnemyThree[i].deadBySkillUlt)
		{
			score++;
			basicEnemyThree[i].deathScoreUpdated = true;
		}
	}
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (!basicEnemyFour[i].deathScoreUpdated && basicEnemyFour[i].deadBySkillUlt)
		{
			score++;
			basicEnemyFour[i].deathScoreUpdated = true;
		}
	}/////////////////////

	//for cancelling all skill or basic attack effect within 1000 milisecs
	if (score == 4 * NUMBEROFENEMEY && !updated )
	{
		scoreCounter++;
		updated = true;
		//lvl02Sound(true);/////////////
		playerCoordX = 0;
		preLevelTwo = true;
		levelOneCompleted = true;
		skillOne.countAtkTimesSkill = skillOne.cooldown;
		skillTwo.countAtkTimesSkill = skillTwo.cooldown;
		skillUlt.countAtkTimesSkill = skillUlt.cooldown;
		countAtkTimes = 320;
	}
	std::string s = std::to_string(score);
	char* char_arr;
	string str_obj(s);
	char_arr = &str_obj[0];

	//cout << score << endl;
}

#endif //SCOREUPDATE_H_  