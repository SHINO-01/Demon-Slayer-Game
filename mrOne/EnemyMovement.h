#ifndef	ENEMYMOVEMENT_H_
#define ENEMYMOVEMENT_H_
#define NUMBEROFENEMEY 20

#include <iostream>
using namespace std;

struct EnemiesLevelOne{
	bool startMove;//enemy will move or not
	int enemyCx;
	int enemyCy;
	int walkMoves;//
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
	bool healthCount = false;
	int speed;
};
EnemiesLevelOne basicEnemyOne[NUMBEROFENEMEY], basicEnemyTwo[NUMBEROFENEMEY];

//setting initila values 
void valuesInitial()
{
	for (int i = 0; i < NUMBEROFENEMEY ; i++)
	{
		basicEnemyOne[i].enemyCx = SCREENWITDH + rand() % (SCREENWITDH * 4);//inittial position
		basicEnemyOne[i].enemyCy = 60;
		basicEnemyOne[i].enemyWidth = playerWidth;
		basicEnemyOne[i].enemyHeight = playerHeight;
		basicEnemyOne[i].walkMoves = 8-1;//how many images for walk animation
		basicEnemyOne[i].atkMoves = 6-1;//how many images for atk animation
		basicEnemyOne[i].deadMoves = 5-1;//how many images for dead animation
		basicEnemyOne[i].countMove = -1;//counting which walk move is active 
		basicEnemyOne[i].countAtk = -1;//counting which atk move is active 
		basicEnemyOne[i].countDead = -1;//counting which dead move is active 
		basicEnemyOne[i].clearEnemy = false;//when clearEnemy is true enemy will not be shown
		basicEnemyOne[i].stopEnemyMove = false;//for stopping enemy move to start atk move.....stopmove will be flase when dead
		basicEnemyOne[i].deadByBasicAtk = false;
		basicEnemyOne[i].deadBySkillOne = false;
		basicEnemyOne[i].deadBySkillTwo = false;
		basicEnemyOne[i].deadBySkillUlt = false;
		basicEnemyOne[i].startMove = false;//
		basicEnemyOne[i].deathScoreUpdated = false;//if already updated then it will be true
		basicEnemyOne[i].speed = -20;//how may coordX enemy will move forward
		basicEnemyOne[i].healthCount = false;//


		basicEnemyTwo[i].enemyCx = SCREENWITDH + 50 + rand() % (SCREENWITDH * 4);
		basicEnemyTwo[i].enemyCy = 60;
		basicEnemyTwo[i].enemyWidth = playerWidth;
		basicEnemyTwo[i].enemyHeight = playerHeight;
		basicEnemyTwo[i].walkMoves = 5-1;
		basicEnemyTwo[i].atkMoves = 5-1;
		basicEnemyTwo[i].deadMoves = 2-1;
		basicEnemyTwo[i].countMove = -1;
		basicEnemyTwo[i].countAtk = -1;
		basicEnemyTwo[i].countDead = -1;
		basicEnemyTwo[i].clearEnemy = false;
		basicEnemyTwo[i].stopEnemyMove = false;
		basicEnemyTwo[i].deadByBasicAtk = false;
		basicEnemyTwo[i].deadBySkillOne = false;
		basicEnemyTwo[i].deadBySkillTwo = false;
		basicEnemyTwo[i].deadBySkillUlt = false;
		basicEnemyTwo[i].startMove = false;
		basicEnemyTwo[i].deathScoreUpdated = false;
		basicEnemyTwo[i].speed = -20;
		basicEnemyTwo[i].healthCount;

	}
}
//this function will be called from main every 200 miliseconds
void confirmMove()
{
	for (int i = 0; i < NUMBEROFENEMEY; i++)
	{
		basicEnemyOne[i].startMove = true;
		basicEnemyTwo[i].startMove = true;
	}
	//cout << "ok" << endl;
}
//enemy movement depending on basic attack and distance between player and enemy
void enemyMove()//showing enemy movement
{
	if (playerCoordX <= 1200)
	{
		for (int i = 0; i < NUMBEROFENEMEY; i++)
		{
			if (!basicEnemyOne[i].deadBySkillOne && !basicEnemyOne[i].deadBySkillTwo &&  !basicEnemyOne[i].deadBySkillUlt && !basicEnemyOne[i].deadByBasicAtk)//if enemy is already dead then enemy will not show
			{
				//if (!basicEnemyOne[i].deadBySkillOne)
				//cout << "dead" << endl;
				//as long as enemy is out of players cooordx of 100 it will walk
				if ((basicEnemyOne[i].enemyCx - playerCoordX > 100 || basicEnemyOne[i].enemyCx<playerCoordX + 20) && !basicEnemyOne[i].deadByBasicAtk && !basicEnemyOne[i].deadBySkillOne && !basicEnemyOne[i].deadBySkillTwo && !basicEnemyOne[i].deadBySkillUlt)
				{
					if (basicEnemyOne[i].startMove && !basicEnemyOne[i].stopEnemyMove)

						//cout << "ok" << endl;
					{
						basicEnemyOne[i].countMove++;
						iShowImage(basicEnemyOne[i].enemyCx += basicEnemyOne[i].speed, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, enemyLevel01enemy03FWMovement[basicEnemyOne[i].countMove]);
					}
					else//for showing still image while position is fixed
					{
						iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, enemyLevel01enemy03FWMovement[basicEnemyOne[i].countMove]);
						//cout << basicEnemyOne[i].enemyCx << endl;
					}

					if (basicEnemyOne[i].countMove == basicEnemyOne[i].walkMoves)//how many imamges for walk animation
						basicEnemyOne[i].countMove = 0;//
					basicEnemyOne[i].startMove = false;//condition for showing still image
				}
			}
			if (!basicEnemyOne[i].deadByBasicAtk && !basicEnemyOne[i].deadBySkillOne && !basicEnemyOne[i].deadBySkillTwo &&  !basicEnemyOne[i].deadBySkillUlt)
			{
				if (basicEnemyOne[i].enemyCx - playerCoordX <= 150 && basicEnemyOne[i].enemyCx - playerCoordX >0)//when enemy is within 100 coordx of player
				{
					if (basicEnemyOne[i].enemyCx - playerCoordX >= 40)//will start attacking and moving at the same time 
					{
						if (basicEnemyOne[i].startMove && !basicEnemyOne[i].stopEnemyMove)//changing positions
						{
							//cout << "ok" << endl;
							cout << basicEnemyOne[0].enemyCx << endl;
							basicEnemyOne[i].countAtk++;
							iShowImage(basicEnemyOne[i].enemyCx += basicEnemyOne[i].speed, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, enemyLevelOne03AtkFW[basicEnemyOne[i].countAtk]);
						}
						else//still image
							iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, enemyLevelOne03AtkFW[basicEnemyOne[i].countAtk]);
						if (basicEnemyOne[i].countAtk == basicEnemyOne[i].atkMoves)//repeating attack moves
							basicEnemyOne[i].countAtk = 0;
						basicEnemyOne[i].startMove = false;//condition for showing still image
					}
					if (basicEnemyOne[i].enemyCx - playerCoordX < 40)//in this range enemy will satrt attcking till death
					{
						if (basicEnemyOne[i].startMove && !basicEnemyOne[i].stopEnemyMove)
						{
							//cout << "ok" << endl;
							basicEnemyOne[i].countAtk++;
							iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, enemyLevelOne03AtkFW[basicEnemyOne[i].countAtk]);
						}
						else
							iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, enemyLevelOne03AtkFW[basicEnemyOne[i].countAtk]);
						if (basicEnemyOne[i].countAtk == basicEnemyOne[i].atkMoves)
							basicEnemyOne[i].countAtk = 0;
						basicEnemyOne[i].startMove = false;//condition for showing still image
					}
					if (basicAtk && countAtkTimes >= 300)
					{
						basicEnemyOne[i].deadByBasicAtk = true;//if dead, enemy death animation will start
					}
				}
			}
			if (basicEnemyOne[i].deadByBasicAtk && !basicEnemyOne[i].clearEnemy)//if already dead then clear enemy will be true
			{
				if (basicEnemyOne[i].startMove)
				{
					//cout << basicEnemyOne[i].enemyCx << endl;
					basicEnemyOne[i].countDead++;//incrementing dead animations picture index
					iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[basicEnemyOne[i].countDead]);
					//cout << basicEnemyOne[i].countDead << endl;
				}
				else
				{
					iShowImage(basicEnemyOne[i].enemyCx, basicEnemyOne[i].enemyCy, basicEnemyOne[i].enemyWidth, basicEnemyOne[i].enemyHeight, deadEnemyThreeLevelOne[basicEnemyOne[i].countDead]);
				}
				if (basicEnemyOne[i].countDead == basicEnemyOne[i].deadMoves)
					basicEnemyOne[i].clearEnemy = true;//if clear enemy move will not show
				basicEnemyOne[i].startMove = false;//still image
			}
		}

		//same thing for basic enemy two
		for (int i = 0; i < NUMBEROFENEMEY; i++)
		{
			if (!basicEnemyTwo[i].deadBySkillOne && !basicEnemyTwo[i].deadBySkillTwo  &&  !basicEnemyTwo[i].deadBySkillUlt  && !basicEnemyTwo[i].deadByBasicAtk)//if enemy is already dead then enemy will not show
			{
				//if (basicEnemyTwo[i].deadBySkillUlt)cout << "ok" << endl;
				//as long as enemy is out of players cooordx of 100 it will walk
				if ((basicEnemyTwo[i].enemyCx - playerCoordX > 100 || basicEnemyTwo[i].enemyCx<playerCoordX + 20) && !basicEnemyTwo[i].deadByBasicAtk && !basicEnemyTwo[i].deadBySkillTwo && !basicEnemyTwo[i].deadBySkillUlt && !basicEnemyTwo[i].deadBySkillOne)
				{
					if (basicEnemyTwo[i].startMove && !basicEnemyTwo[i].stopEnemyMove)//movement position will change evry 2 seconds

						//cout << "ok" << endl;
					{
						//cout << basicEnemyTwo[i].enemyCx << endl;
						basicEnemyTwo[i].countMove++;
						iShowImage(basicEnemyTwo[i].enemyCx -= 10, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, enemyLevel01enemy02Movement[basicEnemyTwo[i].countMove]);
					}
					else//for showing still image while position is fixed
					{
						iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, enemyLevel01enemy02Movement[basicEnemyTwo[i].countMove]);
						//cout << basicEnemyOne[i].enemyCx << endl;
					}

					if (basicEnemyTwo[i].countMove == basicEnemyTwo[i].walkMoves)//how many imamges for walk animation
						basicEnemyTwo[i].countMove = 0;
					basicEnemyTwo[i].startMove = false;//condition for showing still image
				}
			}
			if (!basicEnemyTwo[i].deadByBasicAtk && !basicEnemyTwo[i].deadBySkillOne && !basicEnemyTwo[i].deadBySkillTwo &&  !basicEnemyTwo[i].deadBySkillUlt)
			{
				if (basicEnemyTwo[i].enemyCx - playerCoordX <= 170 && basicEnemyTwo[i].enemyCx - playerCoordX >0)//when enemy is within 100 coordx of player
				{
					if (basicEnemyTwo[i].enemyCx - playerCoordX >= 60)//will start attacking and moving at the same time 
					{
						if (basicEnemyTwo[i].startMove && !basicEnemyTwo[i].stopEnemyMove)//changing positions
						{
							//cout << "ok" << endl;
							//cout << basicEnemyOne[0].enemyCx << endl;
							basicEnemyTwo[i].countAtk++;
							iShowImage(basicEnemyTwo[i].enemyCx -= 10, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, enemyLevelOne02Atk[basicEnemyTwo[i].countAtk]);
						}
						else//still image
							iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, enemyLevelOne02Atk[basicEnemyTwo[i].countAtk]);
						if (basicEnemyTwo[i].countAtk == basicEnemyTwo[i].atkMoves)//repeating attack moves
							basicEnemyTwo[i].countAtk = 0;
						basicEnemyTwo[i].startMove = false;//condition for showing still image
					}
					if (basicEnemyTwo[i].enemyCx - playerCoordX < 60 && basicEnemyTwo[i].enemyCx>playerCoordX)//in this range enemy will satrt attcking till death
					{
						if (basicEnemyTwo[i].startMove && !basicEnemyTwo[i].stopEnemyMove)
						{
							//cout << "ok" << endl;
							basicEnemyTwo[i].countAtk++;
							iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, enemyLevelOne02Atk[basicEnemyTwo[i].countAtk]);
						}
						else
							iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, enemyLevelOne02Atk[basicEnemyTwo[i].countAtk]);
						if (basicEnemyTwo[i].countAtk == basicEnemyTwo[i].atkMoves)
							basicEnemyTwo[i].countAtk = 0;
						basicEnemyTwo[i].startMove = false;//condition for showing still image
					}
					if (basicAtk)
						basicEnemyTwo[i].deadByBasicAtk = true;//if dead, enemy death animation will start
				}
			}
			if (basicEnemyTwo[i].deadByBasicAtk  && !basicEnemyTwo[i].clearEnemy)//if already dead then clear enemy will be true
			{
				if (basicEnemyTwo[i].startMove)
				{
					//cout << basicEnemyOne[i].enemyCx << endl;
					basicEnemyTwo[i].countDead++;//incrementing dead animations picture index
					iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, deadEnemyTwoLevelOne[basicEnemyTwo[i].countDead]);
					//cout << basicEnemyOne[i].countDead << endl;
				}
				else
				{
					iShowImage(basicEnemyTwo[i].enemyCx, basicEnemyTwo[i].enemyCy, basicEnemyTwo[i].enemyWidth, basicEnemyTwo[i].enemyHeight, deadEnemyTwoLevelOne[basicEnemyTwo[i].countDead]);
				}
				if (basicEnemyTwo[i].countDead == basicEnemyTwo[i].deadMoves)
					basicEnemyTwo[i].clearEnemy = true;
				basicEnemyTwo[i].startMove = false;//still image
			}
		}
	}
}

void enemyAtkMove()//uselesss
{
	
}



#endif // !ENEMYMOVEMENT_H_