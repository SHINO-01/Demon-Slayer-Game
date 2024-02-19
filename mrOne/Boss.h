#ifndef BOSS_H_
#define BOSS_H_

#include <iostream>
using namespace std;

bool startBMove = false;
int BCx = 1280;
int BCy = 60;
int walkMovesB;
int BWidth = 180;
int BHeight = 170;
int BMoves = 5-1;
int BAtks = 5 - 1;
int countBAtk = 0;
bool stopBMove = false;
bool deadConfirmed = false;
bool deathScoreUpdated = false;
bool startAtkB = false;
int speed = 10;
int moveSpeedController =0;
int moveCounter = 0;
int atkCounter = 0;
int bossHealthCounter = 4;
bool healthControl = false;
bool bossHealthControl = false;


void BossMoveStart()
{
	startBMove = true;
}

void BossAtkStart()
{
	startAtkB = true;
}

void helathDropControl()
{
	healthControl = true;

}

void bossHelathDropControl()
{
	bossHealthControl = true;

}

void Bossmove(){

		if ((BCx - playerCoordX > 100))
		{
			//cout << BCx << endl;
			if (startBMove)
			{
				iShowImage(BCx -= speed, BCy, 200, 170, bossM[moveCounter]);
				moveCounter++;
			}

			else
			{
				iShowImage(BCx, BCy, 200, 170, bossM[moveCounter]);//boss still image tiill next startMove is true
			}
		}
		if((BCx - playerCoordX <= 100))
		{
			//cout << BCx << endl;
			//cout << playerCoordX << endl;
			if (startAtkB)
			{
				iShowImage(BCx, BCy, 200, 170, bossA[atkCounter]);
				atkCounter++;
			}

			else
			{
				iShowImage(BCx, BCy, 200, 170, bossA[atkCounter]);
			}

			if (healthControl)
			{
				levelOneHealth--;
			}
			if (basicAtk)
			{
				if (bossHealthControl)
					bossHealthCounter--;
			}
		}


		//skillone colision w/ boss

		if (BCx - playerCoordX < 350 && skillOne.countAtkTimesSkill == 600 && skillOne.skill)
		{
			bossHealthCounter--;
		}
		if (BCx - playerCoordX < 300 && skillTwo.countAtkTimesSkill == 1000 && skillTwo.skill)
		{
			bossHealthCounter--;
		}
		if (BCx < SCREENWITDH && skillUlt.countAtkTimesSkill == 1150 && skillUlt.skill)
		{
			bossHealthCounter--;
		}

		bossHealthControl = false;
		healthControl = false;
		if (moveCounter == BMoves)//how many imamges for walk animation
			moveCounter = 0;
		startBMove = false;
		if (atkCounter == BAtks)//how many imamges for atk animation
			atkCounter = 0;
		startAtkB = false;

		if (bossHealthCounter == 0)
		{
			score = 4 * NUMBEROFENEMEY + 50 ;
		}

}


#endif // !BOSS_H_