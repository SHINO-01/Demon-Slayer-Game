#ifndef COLLISONSKILLLEVELTWO_H_
#define COLLISONSKILLLEVELTWO_H_

void collissionSkillOnelevelTwo()
{
		for (int i = 0; i < NUMBEROFENEMEY; i++)
		{
			//for basic enemy One
			if (basicEnemyThree[i].enemyCx - playerCoordX <= 420 && !basicEnemyThree[i].deadByBasicAtk && !basicEnemyThree[i].deadConfirmed  && skillOne.skill && !basicEnemyThree[i].deadBySkillTwo && !basicEnemyThree[i].deadBySkillUlt && skillOne.countAtkTimesSkill >= 300 && skillOne.countAtkTimesSkill <= 1150)
			{
				//cout << "ok" << endl;
				if (skillOne.countAtkTimesSkill >= 300 && skillOne.countAtkTimesSkill <= 400)iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Ded[0]);
				if (skillOne.countAtkTimesSkill >= 401 && skillOne.countAtkTimesSkill <= 500)iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Ded[1]);
				if (skillOne.countAtkTimesSkill == 1150)
				{
					basicEnemyThree[i].deadConfirmed = true;
				}
				if (skillOne.countAtkTimesSkill >= 300)
				{
					basicEnemyThree[i].deadBySkillOne = true;
					//cout << "ok" << endl;
				}
			}
		}
		//for basic enemy two
		for (int i = 0; i < NUMBEROFENEMEY; i++)
		{
			if (basicEnemyFour[i].enemyCx - playerCoordX <= 420 && !basicEnemyFour[i].deadByBasicAtk && !basicEnemyFour[i].deadConfirmed  && skillOne.skill && !basicEnemyFour[i].deadBySkillTwo && !basicEnemyFour[i].deadBySkillUlt && skillOne.countAtkTimesSkill >= 600 && skillOne.countAtkTimesSkill <= 1150)
			{
				//if (basicEnemyFour[0].deadBySkillOne)cout << "ok" << endl;
				//Showing death animation for skill one
				if (skillOne.countAtkTimesSkill >= 600 && skillOne.countAtkTimesSkill <= 700)iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[0]);
				if (skillOne.countAtkTimesSkill >= 701 && skillOne.countAtkTimesSkill <= 800)iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[1]);
				if (skillOne.countAtkTimesSkill >= 801 && skillOne.countAtkTimesSkill <= 900)iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[2]);

				if (skillOne.countAtkTimesSkill == 1150)
					basicEnemyFour[i].deadConfirmed = true;
				if (skillOne.countAtkTimesSkill >= 600)
				{
					basicEnemyFour[i].deadBySkillOne = true;
					//cout << "ok" << endl;
				}
			}
		}
}

	void collissionSkillTwolevelTwo()
	{
			for (int i = 0; i < NUMBEROFENEMEY; i++)
			{
				if (basicEnemyThree[i].enemyCx - playerCoordX <= 500 && !basicEnemyThree[i].deadByBasicAtk && !basicEnemyThree[i].deadConfirmed  && skillTwo.skill && !basicEnemyThree[i].deadBySkillOne && !basicEnemyThree[i].deadBySkillUlt && skillTwo.countAtkTimesSkill >= 699 && skillTwo.countAtkTimesSkill <= 900)
				{
					if (skillTwo.countAtkTimesSkill >= 700 && skillTwo.countAtkTimesSkill <= 800)iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Ded[0]);
					if (skillTwo.countAtkTimesSkill >= 801 && skillTwo.countAtkTimesSkill <= 900)iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Ded[1]);
					if (skillTwo.countAtkTimesSkill == 900)
					{
						basicEnemyThree[i].deadConfirmed = true;
					}
					if (skillTwo.countAtkTimesSkill >= 699)
					{
						basicEnemyThree[i].deadBySkillTwo = true;
						//cout << "ok" << endl;
					}
				}
			}

			//for basic enemy two
			for (int i = 0; i < NUMBEROFENEMEY; i++)
			{
				if (basicEnemyFour[i].enemyCx - playerCoordX <= 500 && !basicEnemyFour[i].deadByBasicAtk && !basicEnemyFour[i].deadConfirmed  && skillTwo.skill && !basicEnemyFour[i].deadBySkillOne && !basicEnemyFour[i].deadBySkillUlt && skillTwo.countAtkTimesSkill >= 699 && skillTwo.countAtkTimesSkill <= 900)
				{
					//if (basicEnemyFour[0].deadByskillTwo)cout << "ok" << endl;
					//Showing death animation for skill one
					if (skillTwo.countAtkTimesSkill >= 700 && skillTwo.countAtkTimesSkill <= 800)iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[0]);
					if (skillTwo.countAtkTimesSkill >= 701 && skillTwo.countAtkTimesSkill <= 800)iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[1]);
					if (skillTwo.countAtkTimesSkill >= 801 && skillTwo.countAtkTimesSkill <= 900)iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[2]);

					if (skillTwo.countAtkTimesSkill == 900)
						basicEnemyFour[i].deadConfirmed = true;
					if (skillTwo.countAtkTimesSkill >= 699)
					{
						basicEnemyFour[i].deadBySkillTwo = true;
						//cout << "ok" << endl;
					}
				}
			}
	}



	void collissionSkillUltLevelTwo()
	{
	
			for (int i = 0; i < NUMBEROFENEMEY; i++)
			{
				if ((basicEnemyThree[i].enemyCx - playerCoordX <= 1216 && basicEnemyThree[i].enemyCx <= 1216) && !basicEnemyThree[i].deadByBasicAtk && !basicEnemyThree[i].deadConfirmed  && skillUlt.skill && !basicEnemyThree[i].deadBySkillOne && skillUlt.countAtkTimesSkill >= 550 && skillUlt.countAtkTimesSkill <= 1100)
				{
					//cout << "ok" << endl;
					if (skillUlt.countAtkTimesSkill >= 550 && skillUlt.countAtkTimesSkill <= 650)iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Ded[0]);
					if (skillUlt.countAtkTimesSkill >= 651 && skillUlt.countAtkTimesSkill <= 750)iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Ded[1]);

					if (skillUlt.countAtkTimesSkill == 1100)
						basicEnemyThree[i].deadConfirmed = true;
					if (skillUlt.countAtkTimesSkill >= 549)
					{
						basicEnemyThree[i].deadBySkillUlt = true;
						//cout << "ok" << endl;
					}
				}
			}
			//for basic enemy two
			for (int i = 0; i < NUMBEROFENEMEY; i++)
			{
				if ((basicEnemyFour[i].enemyCx - playerCoordX <= 1216 && basicEnemyFour[i].enemyCx <= 1216) && !basicEnemyFour[i].deadByBasicAtk && !basicEnemyFour[i].deadConfirmed  && skillUlt.skill && !basicEnemyFour[i].deadBySkillOne && skillUlt.countAtkTimesSkill >= 550 && skillUlt.countAtkTimesSkill <= 1100)
				{
					//cout << "ok" << endl;
					if (skillUlt.countAtkTimesSkill >= 550 && skillUlt.countAtkTimesSkill <= 650)iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[0]);
					if (skillUlt.countAtkTimesSkill >= 651 && skillUlt.countAtkTimesSkill <= 750)iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[1]);
					if (skillUlt.countAtkTimesSkill >= 751 && skillUlt.countAtkTimesSkill <= 800)iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[2]);
					if (skillUlt.countAtkTimesSkill == 1100)
						basicEnemyFour[i].deadConfirmed = true;
					if (skillUlt.countAtkTimesSkill >= 549)
					{
						basicEnemyFour[i].deadBySkillUlt = true;
						//cout << "ok" << endl;
					}
				}
			}
	}

#endif //COLLISONSKILLLEVELTWO_H_  
