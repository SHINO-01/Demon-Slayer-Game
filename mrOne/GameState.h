#ifndef GAMESTATES_H_
#define GAMESTATES_H_

bool gameOver = false;
bool goToMenu = false;
bool positonResetDone = false;
bool gameOverReset = false;
int  gameOverCounter = 0;
int preLevelOneCounter = 0;
bool levelOneStart = false;


bool eneterPressed = false;
bool preEnterPressed = false;
int preEnterPressedCounter = 0;
int preLevelTwoCounter = 0;
bool levelTwoStart = false;
bool postGameOver = false;
int postGameOverCounter = 0;


void checkGamestate()
{
	if (preLevelOne && !levelOneStart)
	{
		if (!allSoundOff)lvl01Sound(true);
		preLevelOneCounter++;
		if (preLevelOneCounter == 4000)
		{
			level  = 1;
			preLevelOneCounter = 0;
			levelOneStart = true;
		}
		if (preLevelOneCounter<4000)
			iShowImage(0, 0, SCREENWITDH, SCREENHEIGHT, preGameOne);
	}

	if (preLevelTwo && !levelTwoStart)
	{
		if (!allSoundOff)
			lvl02Sound(true);
		preLevelTwoCounter++;
		if (preLevelTwoCounter == 4000)
		{
			level = 2;
			preLevelTwoCounter = 0;
			levelTwoStart = true;
		}
		if (preLevelTwoCounter<4000)
			iShowImage(0, 0, SCREENWITDH, SCREENHEIGHT, preGameTwo);
	}


	if ((levelOneHealth <= 0 && !goToMenu)||score == 4 * NUMBEROFENEMEY + 50)
	{
		gameOver = true;
		goToMenu = true;
		soundLast = true;
		levelOneHealth = 9;
		level = 0;
		if (!allSoundOff)gameOverSound(true);
	}
	if (goToMenu)
	{
		gameOverCounter++;
		if (gameOverCounter == 1000 && !gameOverReset)
		{
			goToMenu = false;
			gameOverCounter = 0;
		}
	}

	if (gameOver && !posResetDone)
	{
		preLevelTwoCounter = 0;
		levelTwoStart = false;
		preLevelOneCounter = 0;
		levelOneStart = false;
		preLevelOne = false;
		preLevelTwo = false;
		levelOneCompleted = false;
		playerCoordX = 0;

		for (int i = 0; i < NUMBEROFENEMEY; i++)
		{
			basicEnemyOne[i].enemyCx = SCREENWITDH + rand() % (SCREENWITDH * 4);
			basicEnemyOne[i].enemyCy = 60;
			basicEnemyOne[i].enemyWidth = playerWidth;
			basicEnemyOne[i].enemyHeight = playerHeight;
			basicEnemyOne[i].walkMoves = 8 - 1;
			basicEnemyOne[i].atkMoves = 6 - 1;
			basicEnemyOne[i].deadMoves = 5 - 1;
			basicEnemyOne[i].countMove = -1;
			basicEnemyOne[i].countAtk = -1;
			basicEnemyOne[i].countDead = -1;
			basicEnemyOne[i].clearEnemy = false;
			basicEnemyOne[i].stopEnemyMove = false;
			basicEnemyOne[i].deadByBasicAtk = false;
			basicEnemyOne[i].deadBySkillOne = false;
			basicEnemyOne[i].deadBySkillTwo = false;
			basicEnemyOne[i].deadBySkillUlt = false;
			basicEnemyOne[i].startMove = false;
			basicEnemyOne[i].deathScoreUpdated = false;
			basicEnemyOne[i].speed = -20;
			basicEnemyOne[i].healthCount = false;
			basicEnemyOne[i].deadConfirmed = false;


			basicEnemyTwo[i].enemyCx = SCREENWITDH + 50 + rand() % (SCREENWITDH * 4);
			basicEnemyTwo[i].enemyCy = 60;
			basicEnemyTwo[i].enemyWidth = playerWidth;
			basicEnemyTwo[i].enemyHeight = playerHeight;
			basicEnemyTwo[i].walkMoves = 5 - 1;
			basicEnemyTwo[i].atkMoves = 5 - 1;
			basicEnemyTwo[i].deadMoves = 2 - 1;
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
			basicEnemyTwo[i].healthCount = false;
			basicEnemyTwo[i].deadConfirmed = false;



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
			basicEnemyThree[i].deadConfirmed = false;


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
			basicEnemyFour[i].deadConfirmed = false;

			startBMove = false;
			BCx = 1280;
			BCy = 60;
			walkMovesB;
			BWidth = 180;
			BHeight = 170;
			BMoves = 5 - 1;
			BAtks = 5 - 1;
			countBAtk = 0;
			stopBMove = false;
			deadConfirmed = false;
			deathScoreUpdated = false;
			startAtkB = false;
			speed = 10;
			moveSpeedController = 0;
			moveCounter = 0;
			atkCounter = 0;
			bossHealthCounter = 4;
			healthControl = false;
			bossHealthControl = false;

		}
		positonResetDone = true;
		levelOneHealth = 9;
		bossHealthCounter = 4;
		
		
	}


}

void postGameEvent()
{
	if (gameOver && eneterPressed)
	{
		postGameOverCounter++;
		if (postGameOverCounter < 6000)
		{
			cout << "ok" << endl;
			iShowImage(0, 0, SCREENWITDH, SCREENHEIGHT, postGame);
		}
		if (postGameOverCounter == 6000)
		{
			gameOver = false;
			menuOption = 0;
			postGameOverCounter = 0;
			score = 0;
			updated = false;
			
		}
	}
}


#endif // !GAMESTATES_H_