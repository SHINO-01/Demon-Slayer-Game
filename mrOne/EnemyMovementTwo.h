#ifndef	ENEMYMOVEMENTTWO_H_
#define ENEMYMOVEMENTTWO_H_
#define NUMBEROFENEMEY 20

#include <iostream>
using namespace std;

bool levelTwo = false;

struct EnemiesLevelTwo{
	bool startMove;
	int enemyCx;
	int enemyCy;
	int walkMoves;
	int atkMoves;
	int deadMoves;
	int enemyWidth;
	int enemyHeight;
	int countMove;
	int countAtk;
	int countDead;
	bool clearEnemy;
	bool stopEnemyMove;
	bool deadByBasicAtk;
	bool deadBySkillOne;
	bool deadBySkillTwo;
	bool deadBySkillUlt;
	bool deadConfirmed;
	bool deathScoreUpdated;
	bool healthCount;
	int speed;
};
EnemiesLevelTwo basicEnemyThree[NUMBEROFENEMEY], basicEnemyFour[NUMBEROFENEMEY];
void valuesInitialLevelTwo()
{
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		basicEnemyThree[i].enemyCx = SCREENWITDH + rand() % (SCREENWITDH * 4);
		basicEnemyThree[i].enemyCy = 60;
		basicEnemyThree[i].enemyWidth = playerWidth;
		basicEnemyThree[i].enemyHeight = playerHeight;
		basicEnemyThree[i].walkMoves = 3 - 1;
		basicEnemyThree[i].atkMoves = 4 - 1;
		basicEnemyThree[i].deadMoves = 2 - 1;
		basicEnemyThree[i].countMove = -1;
		basicEnemyThree[i].countAtk = -1;
		basicEnemyThree[i].countDead = -1;
		basicEnemyThree[i].clearEnemy = false;
		basicEnemyThree[i].stopEnemyMove = false;
		basicEnemyThree[i].deadByBasicAtk = false;
		basicEnemyThree[i].deadBySkillOne = false;
		basicEnemyThree[i].deadBySkillTwo = false;
		basicEnemyThree[i].deadBySkillUlt = false;
		basicEnemyThree[i].startMove = false;
		basicEnemyThree[i].deathScoreUpdated = false;
		basicEnemyThree[i].speed = -20;
		basicEnemyThree[i].healthCount = false;


		basicEnemyFour[i].enemyCx = SCREENWITDH + 50 + rand() % (SCREENWITDH * 4);
		basicEnemyFour[i].enemyCy = 60;
		basicEnemyFour[i].enemyWidth = playerWidth;
		basicEnemyFour[i].enemyHeight = playerHeight;
		basicEnemyFour[i].walkMoves = 4 - 1;
		basicEnemyFour[i].atkMoves = 5 - 1;
		basicEnemyFour[i].deadMoves = 3 - 1;
		basicEnemyFour[i].countMove = -1;
		basicEnemyFour[i].countAtk = -1;
		basicEnemyFour[i].countDead = -1;
		basicEnemyFour[i].clearEnemy = false;
		basicEnemyFour[i].stopEnemyMove = false;
		basicEnemyFour[i].deadByBasicAtk = false;
		basicEnemyFour[i].deadBySkillOne = false;
		basicEnemyFour[i].deadBySkillTwo = false;
		basicEnemyFour[i].deadBySkillUlt = false;
		basicEnemyFour[i].startMove = false;
		basicEnemyFour[i].deathScoreUpdated = false;
		basicEnemyFour[i].speed = -20;
		basicEnemyFour[i].healthCount = false;


	}
}

//this function will be called from main every 2 seconds
void confirmMoveLevelTwo()
{
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		basicEnemyThree[i].startMove = true;
		basicEnemyFour[i].startMove = true;
	}
	//cout << "ok" << endl;
}
//enemy movement depending on basic attack and distance between player and enemy
void enemyMoveLevelTwo()
{
	if (playerCoordX <= 1200)
	{
		for (int i = 0; i < NUMBEROFENEMEY; i++)
		{
			if (!basicEnemyThree[i].deadBySkillOne && !basicEnemyThree[i].deadBySkillTwo &&  !basicEnemyThree[i].deadBySkillUlt && !basicEnemyThree[i].deadByBasicAtk)//if enemy is already dead then enemy will not show
			{
				//if (!basicEnemyThree[i].deadBySkillOne)
				//cout << "dead" << endl;
				if (resetEnemyCoordX)//if player cross the rightmost part of screen it will satrt from the beginning
				{
					basicEnemyThree[i].enemyCx -= 1250;
				}
				//as long as enemy is out of players cooordx of 100 it will walk
				if ((basicEnemyThree[i].enemyCx - playerCoordX > 100 || basicEnemyThree[i].enemyCx<playerCoordX + 20) && !basicEnemyThree[i].deadByBasicAtk && !basicEnemyThree[i].deadBySkillOne && !basicEnemyThree[i].deadBySkillTwo && !basicEnemyThree[i].deadBySkillUlt)
				{
					if (basicEnemyThree[i].startMove && !basicEnemyThree[i].stopEnemyMove)//movement position will change evry 2 seconds

						//cout << "ok" << endl;
					{
						basicEnemyThree[i].countMove++;
						iShowImage(basicEnemyThree[i].enemyCx += basicEnemyThree[i].speed, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01FWM[basicEnemyThree[i].countMove]);
					}
					else//for showing still image while position is fixed
					{
						iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01FWM[basicEnemyThree[i].countMove]);
						//cout << basicEnemyThree[i].enemyCx << endl;
					}

					if (basicEnemyThree[i].countMove == basicEnemyThree[i].walkMoves)//how many imamges for walk animation
						basicEnemyThree[i].countMove = 0;
					basicEnemyThree[i].startMove = false;//condition for showing still image
				}
			}
			if (!basicEnemyThree[i].deadByBasicAtk && !basicEnemyThree[i].deadBySkillOne && !basicEnemyThree[i].deadBySkillTwo &&  !basicEnemyThree[i].deadBySkillUlt)
			{
				if (basicEnemyThree[i].enemyCx - playerCoordX <= 150 && basicEnemyThree[i].enemyCx - playerCoordX >0)//when enemy is within 100 coordx of player
				{
					if (basicEnemyThree[i].enemyCx - playerCoordX >= 70)//will start attacking and moving at the same time 
					{
						if (basicEnemyThree[i].startMove && !basicEnemyThree[i].stopEnemyMove)//changing positions
						{
							//cout << "ok" << endl;
							//cout << basicEnemyThree[0].enemyCx << endl;
							basicEnemyThree[i].countAtk++;
							iShowImage(basicEnemyThree[i].enemyCx += basicEnemyThree[i].speed, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Atk[basicEnemyThree[i].countAtk]);
						}
						else//still image
							iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Atk[basicEnemyThree[i].countAtk]);
						if (basicEnemyThree[i].countAtk == basicEnemyThree[i].atkMoves)//repeating attack moves
							basicEnemyThree[i].countAtk = 0;
						basicEnemyThree[i].startMove = false;//condition for showing still image
					}
					if (basicEnemyThree[i].enemyCx - playerCoordX < 70)//in this range enemy will satrt attcking till death
					{
						if (basicEnemyThree[i].startMove && !basicEnemyThree[i].stopEnemyMove)
						{
							//cout << "ok" << endl;
							basicEnemyThree[i].countAtk++;
							iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Atk[basicEnemyThree[i].countAtk]);
							
						}
						else
							iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Atk[basicEnemyThree[i].countAtk]);
						if (basicEnemyThree[i].countAtk == basicEnemyThree[i].atkMoves)
							basicEnemyThree[i].countAtk = 0;
						basicEnemyThree[i].startMove = false;//condition for showing still image
					}
					if (basicAtk)
					{
						basicEnemyThree[i].deadByBasicAtk = true;//if dead, enemy death animation will start
					}
				}
			}
			if (basicEnemyThree[i].deadByBasicAtk && !basicEnemyThree[i].clearEnemy)//if already dead then clear enemy will be true
			{
				if (basicEnemyThree[i].startMove)
				{
					//cout << basicEnemyThree[i].enemyCx << endl;
					basicEnemyThree[i].countDead++;//incrementing dead animations picture index
					iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Ded[basicEnemyThree[i].countDead]);
					//cout << basicEnemyThree[i].countDead << endl;
				}
				else
				{
					iShowImage(basicEnemyThree[i].enemyCx, basicEnemyThree[i].enemyCy, basicEnemyThree[i].enemyWidth, basicEnemyThree[i].enemyHeight, lv02Enemy01Ded[basicEnemyThree[i].countDead]);
				}
				if (basicEnemyThree[i].countDead == basicEnemyThree[i].deadMoves)
					basicEnemyThree[i].clearEnemy = true;
				basicEnemyThree[i].startMove = false;//still image
			}
		}

		//same thing for basic enemy four
		for (int i = 0; i < NUMBEROFENEMEY; i++)
		{
			if (!basicEnemyFour[i].deadBySkillOne && !basicEnemyFour[i].deadBySkillTwo  &&  !basicEnemyFour[i].deadBySkillUlt  && !basicEnemyFour[i].deadByBasicAtk)//if enemy is already dead then enemy will not show
			{
				//if (basicEnemyFour[i].deadBySkillUlt)cout << "ok" << endl;
				//as long as enemy is out of players cooordx of 100 it will walk
				if ((basicEnemyFour[i].enemyCx - playerCoordX > 100 || basicEnemyFour[i].enemyCx<playerCoordX + 20) && !basicEnemyFour[i].deadByBasicAtk && !basicEnemyFour[i].deadBySkillTwo && !basicEnemyFour[i].deadBySkillUlt && !basicEnemyFour[i].deadBySkillOne)
				{
					if (basicEnemyFour[i].startMove && !basicEnemyFour[i].stopEnemyMove)//movement position will change evry 2 seconds

						//cout << "ok" << endl;
					{
						//cout << basicEnemyFour[i].enemyCx << endl;
						basicEnemyFour[i].countMove++;
						iShowImage(basicEnemyFour[i].enemyCx -= 10, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02FWM[basicEnemyFour[i].countMove]);
					}
					else//for showing still image while position is fixed
					{
						iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02FWM[basicEnemyFour[i].countMove]);
						//cout << basicEnemyThree[i].enemyCx << endl;
					}

					if (basicEnemyFour[i].countMove == basicEnemyFour[i].walkMoves)//how many imamges for walk animation
						basicEnemyFour[i].countMove = 0;
					basicEnemyFour[i].startMove = false;//condition for showing still image
				}
			}
			if (!basicEnemyFour[i].deadByBasicAtk && !basicEnemyFour[i].deadBySkillOne && !basicEnemyFour[i].deadBySkillTwo &&  !basicEnemyFour[i].deadBySkillUlt)
			{
				if (basicEnemyFour[i].enemyCx - playerCoordX <= 170 && basicEnemyFour[i].enemyCx - playerCoordX >0)//when enemy is within 100 coordx of player
				{
					if (basicEnemyFour[i].enemyCx - playerCoordX >= 60)//will start attacking and moving at the same time 
					{
						if (basicEnemyFour[i].startMove && !basicEnemyFour[i].stopEnemyMove)//changing positions
						{
							//cout << "ok" << endl;
							//cout << basicEnemyThree[0].enemyCx << endl;
							basicEnemyFour[i].countAtk++;
							iShowImage(basicEnemyFour[i].enemyCx -= 10, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Atk[basicEnemyFour[i].countAtk]);
						}
						else//still image
							iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Atk[basicEnemyFour[i].countAtk]);
						if (basicEnemyFour[i].countAtk == basicEnemyFour[i].atkMoves)//repeating attack moves
							basicEnemyFour[i].countAtk = 0;
						basicEnemyFour[i].startMove = false;//condition for showing still image
					}
					if (basicEnemyFour[i].enemyCx - playerCoordX < 60 && basicEnemyFour[i].enemyCx>playerCoordX)//in this range enemy will satrt attcking till death
					{
						if (basicEnemyFour[i].startMove && !basicEnemyFour[i].stopEnemyMove)
						{
							//cout << "ok" << endl;
							basicEnemyFour[i].countAtk++;
							iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Atk[basicEnemyFour[i].countAtk]);
						}
						else
							iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Atk[basicEnemyFour[i].countAtk]);
						if (basicEnemyFour[i].countAtk == basicEnemyFour[i].atkMoves)
							basicEnemyFour[i].countAtk = 0;
						basicEnemyFour[i].startMove = false;//condition for showing still image
					}
					if (basicAtk)
						basicEnemyFour[i].deadByBasicAtk = true;//if dead, enemy death animation will start

				}
			}
			if (basicEnemyFour[i].deadByBasicAtk  && !basicEnemyFour[i].clearEnemy)//if already dead then clear enemy will be true
			{
				if (basicEnemyFour[i].startMove)
				{
					//cout << basicEnemyThree[i].enemyCx << endl;
					basicEnemyFour[i].countDead++;//incrementing dead animations picture index
					iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[basicEnemyFour[i].countDead]);
					//cout << basicEnemyThree[i].countDead << endl;
				}
				else
				{
					iShowImage(basicEnemyFour[i].enemyCx, basicEnemyFour[i].enemyCy, basicEnemyFour[i].enemyWidth, basicEnemyFour[i].enemyHeight, lv02Enemy02Ded[basicEnemyFour[i].countDead]);
				}
				if (basicEnemyFour[i].countDead == basicEnemyFour[i].deadMoves)
					basicEnemyFour[i].clearEnemy = true;
				basicEnemyFour[i].startMove = false;//still image
			}
		}
	}
}



#endif // !ENEMYMOVEMENTTWO_H_
