#ifndef COLLISIONSKILLENEMY_H_
#define COLLISIONSKILLENEMY_H_
#include <iostream>
using namespace std;

void collissionSkillOne()
{
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		//for basic enemy One
		if (basicEnemyOne[i].enemyCx - playerCoordX <= 420 && !basicEnemyOne[i].deadByBasicAtk && !basicEnemyOne[i].deadConfirmed  && skillOne.skill && !basicEnemyOne[i].deadBySkillTwo && !basicEnemyOne[i].deadBySkillUlt && skillOne.countAtkTimesSkill >= 300 && skillOne.countAtkTimesSkill <= 1150)
		{
			//cout << "ok" << endl;
			if (skillOne.countAtkTimesSkill >= 300 && skillOne.countAtkTimesSkill <= 400)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[0]);
			if (skillOne.countAtkTimesSkill >= 401 && skillOne.countAtkTimesSkill <= 500)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[1]);
			if (skillOne.countAtkTimesSkill >= 501 && skillOne.countAtkTimesSkill <= 550)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[2]);
			if (skillOne.countAtkTimesSkill >= 551 && skillOne.countAtkTimesSkill <= 600)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[3]);
			if (skillOne.countAtkTimesSkill >= 601 && skillOne.countAtkTimesSkill <= 650)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[4]);
			if (skillOne.countAtkTimesSkill == 1150)
			{
				basicEnemyOne[i].deadConfirmed = true;
			}
			if (skillOne.countAtkTimesSkill >= 300)
			{
				basicEnemyOne[i].deadBySkillOne = true;
				//cout << "ok" << endl;
			}
		}
	}
	//for basic enemy two
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (basicEnemyTwo[i].enemyCx - playerCoordX <= 420 && !basicEnemyTwo[i].deadByBasicAtk && !basicEnemyTwo[i].deadConfirmed  && skillOne.skill && !basicEnemyTwo[i].deadBySkillTwo && !basicEnemyTwo[i].deadBySkillUlt && skillOne.countAtkTimesSkill >= 600 && skillOne.countAtkTimesSkill <= 1150)
		{
			//if (basicEnemyTwo[0].deadBySkillOne)cout << "ok" << endl;
			//Showing death animation for skill one
			if (skillOne.countAtkTimesSkill >= 600 && skillOne.countAtkTimesSkill <= 700)iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, deadEnemyTwoLevelOne[0]);
			if (skillOne.countAtkTimesSkill >= 701 && skillOne.countAtkTimesSkill <= 800)iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, deadEnemyTwoLevelOne[1]);
			if (skillOne.countAtkTimesSkill == 1150)
				basicEnemyTwo[i].deadConfirmed = true;
			if (skillOne.countAtkTimesSkill >= 300)
			{
				basicEnemyTwo[i].deadBySkillOne = true;
				//cout << "ok" << endl;
			}
		}
	}
	
}

void collissionSkillTwo()
{
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (basicEnemyOne[i].enemyCx - playerCoordX <= 500 && !basicEnemyOne[i].deadByBasicAtk && !basicEnemyOne[i].deadConfirmed  && skillTwo.skill && !basicEnemyOne[i].deadBySkillOne && !basicEnemyOne[i].deadBySkillUlt && skillTwo.countAtkTimesSkill >= 699 && skillTwo.countAtkTimesSkill <= 900)
		{
			//cout << "ok" << endl;
			if (skillTwo.countAtkTimesSkill >= 700 && skillTwo.countAtkTimesSkill <= 730)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[0]);
			if (skillTwo.countAtkTimesSkill >= 731 && skillTwo.countAtkTimesSkill <= 760)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[1]);
			if (skillTwo.countAtkTimesSkill >= 761 && skillTwo.countAtkTimesSkill <= 800)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[2]);
			if (skillTwo.countAtkTimesSkill >= 801 && skillTwo.countAtkTimesSkill <= 850)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[3]);
			if (skillTwo.countAtkTimesSkill >= 851 && skillTwo.countAtkTimesSkill <= 900)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[4]);
			if (skillTwo.countAtkTimesSkill == 900)
				basicEnemyOne[i].deadConfirmed = true;
			if (skillTwo.countAtkTimesSkill >= 699)
			{
				basicEnemyOne[i].deadBySkillTwo = true;
				//cout << "ok" << endl;
			}
		}
	}

	//for basic enemy two
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if (basicEnemyTwo[i].enemyCx - playerCoordX <= 500 && !basicEnemyTwo[i].deadByBasicAtk && !basicEnemyTwo[i].deadConfirmed  && skillTwo.skill && !basicEnemyTwo[i].deadBySkillOne && !basicEnemyTwo[i].deadBySkillUlt && skillTwo.countAtkTimesSkill >= 699 && skillTwo.countAtkTimesSkill <= 900)
		{
			//cout << "ok" << endl;
			if (skillTwo.countAtkTimesSkill >= 700 && skillTwo.countAtkTimesSkill <= 750)iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, deadEnemyTwoLevelOne[0]);
			if (skillOne.countAtkTimesSkill >= 751 && skillOne.countAtkTimesSkill <900)iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, deadEnemyTwoLevelOne[1]);
			if (skillOne.countAtkTimesSkill == 900)
				basicEnemyTwo[i].deadConfirmed = true;
			if (skillTwo.countAtkTimesSkill >= 699)
			{
				basicEnemyTwo[i].deadBySkillTwo = true;
				//cout << "ok" << endl;
			}
		}
	}
}

void collissionSkillThree()
{
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if ((basicEnemyOne[i].enemyCx - playerCoordX <= 1216 && basicEnemyOne[i].enemyCx <= 1216) && !basicEnemyOne[i].deadByBasicAtk && !basicEnemyOne[i].deadConfirmed  && skillUlt.skill && !basicEnemyOne[i].deadBySkillOne && !basicEnemyOne[i].deadBySkillTwo && skillUlt.countAtkTimesSkill >= 550 && skillUlt.countAtkTimesSkill <= 1100)
		{
			//cout << "ok" << endl;
			if (skillUlt.countAtkTimesSkill >= 550 && skillUlt.countAtkTimesSkill <= 650)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[0]);
			if (skillUlt.countAtkTimesSkill >= 651 && skillUlt.countAtkTimesSkill <= 750)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[1]);
			if (skillUlt.countAtkTimesSkill >= 751 && skillUlt.countAtkTimesSkill <= 850)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[2]);
			if (skillUlt.countAtkTimesSkill >= 851 && skillUlt.countAtkTimesSkill <= 950)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[3]);
			if (skillUlt.countAtkTimesSkill >= 950 && skillUlt.countAtkTimesSkill <= 1100)iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[4]);

			if (skillUlt.countAtkTimesSkill == 1100)
				basicEnemyOne[i].deadConfirmed = true;
			if (skillUlt.countAtkTimesSkill >= 549)
			{
				basicEnemyOne[i].deadBySkillUlt = true;
				//cout << "ok" << endl;
			}
		}
	}
	//for basic enemy two
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		if ((basicEnemyTwo[i].enemyCx - playerCoordX <= 1216 && basicEnemyTwo[i].enemyCx <= 1216) && !basicEnemyTwo[i].deadByBasicAtk && !basicEnemyTwo[i].deadConfirmed  && skillUlt.skill && !basicEnemyTwo[i].deadBySkillOne && !basicEnemyTwo[i].deadBySkillTwo && skillUlt.countAtkTimesSkill >= 550 && skillUlt.countAtkTimesSkill <= 1100)
		{
			//cout << "ok" << endl;
			if (skillUlt.countAtkTimesSkill >= 550 && skillUlt.countAtkTimesSkill <= 650)iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, deadEnemyTwoLevelOne[0]);
			if (skillUlt.countAtkTimesSkill >= 651 && skillUlt.countAtkTimesSkill <= 750)iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, deadEnemyTwoLevelOne[1]);
			if (skillUlt.countAtkTimesSkill == 1100)
				basicEnemyTwo[i].deadConfirmed = true;
			if (skillUlt.countAtkTimesSkill >= 549)
			{
				basicEnemyTwo[i].deadBySkillUlt = true;
				//cout << "ok" << endl;
			}
		}
	}
}

void showScore()
{
	
}

#endif // COLLISIONSKILLENEMY_H_