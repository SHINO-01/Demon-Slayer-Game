#define SCREENWITDH 1280
#define SCREENHEIGHT 720

#include "iGraphics.h"
#include "loadImages.h"
#include "playerMoveMent.h"
#include "basicAtk.h"
#include "Skills.h"
#include "Background.h"
#include "EnemyMovement.h"
#include "EnemyMovementTwo.h"
#include "CollisionSkillEnemy.h"
#include "CollisionSkillEnemyTwo.h"
#include "ScoreUpdate.h"
#include "sound.h"
#include "Menu.h"
#include "Health.h"
#include "Boss.h"
#include "GameState.h"
#include "skillLogo.h"
#include <iostream>
#include<string>
#include <sstream>
#include<stdlib.h>

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	iSetColor(255, 255, 255);

	std::string s = std::to_string(score);
	char* char_arr;
	string str_obj(s);
	char_arr = &str_obj[0];


	checkGamestate();

		if (menuOption >= 0 && menuOption <= 5)
		{
			showMenu(); //This function runs all the codes for menu.
		}


		if (level == 1 && !gameOver && !levelOneCompleted)
		{
			Change_bgLv02();
			Change_bgLv02Lower();
			showBackgroundImageLevelTwo();
			//Hello(12, 3);
			enemyMove();
			enemyMoveLevelTwo();
			health();

			iText(5, 670, "HEALTH", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowImage(120, 663, 30 * levelOneHealth,30 , HealthBar[levelOneHealth]);

			//showTrial();
			showScores();
			skillOneImage();
			skillTwoImage();
			skillUltImage();
			collissionSkillOne();
			collissionSkillOnelevelTwo();
			collissionSkillTwolevelTwo();
			collissionSkillUltLevelTwo();
			collissionSkillTwo();
			collissionSkillThree();
			//jumpPlayer();
			
			/*else{
				iShowImage(playerCdnet_x, playerCdnet_y, 171, 200, id);
			}*/
			iText(500, 670, "SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(630, 670, char_arr, GLUT_BITMAP_TIMES_ROMAN_24);
			showLogo();

			if (!basicAtk &&  skillOne.playerMoveContinue && skillTwo.playerMoveContinue && skillUlt.playerMoveContinue)
			{
				if (forwardDirection)
				{
					forwardMove();
				}
				if (!forwardDirection)
				{
					backwardMove();
				}
			}
			if (basicAtk && skillOne.playerMoveContinue && skillTwo.playerMoveContinue && skillUlt.playerMoveContinue)
			{
				basicAtkImage();
			}
			if (forwardDirection){
				if (jump){

					if (jump_up){
						iShowImage(playerCoordX, playerCoordY + playerJumpCdnet, 100, 100, jump_id);
					}
					else{
						iShowImage(playerCoordX, playerCoordY + playerJumpCdnet, 100, 100, jump_id);
					}
				}
			}
			if (!forwardDirection){
				if (jump){

					if (jump_up){
						iShowImage(playerCoordX, playerCoordY + playerJumpCdnet, 100, 100, jump_Fid);
					}
					else{
						iShowImage(playerCoordX, playerCoordY + playerJumpCdnet, 100, 100, jump_Fid);
					}
				}
			}
		}
		if (level == 2 && !gameOver && levelOneCompleted)
		{
			//cout << playerCoordX << endl;
			Change_bgLv03Lower();
			Change_bgLv03();
			showBackgroundImageLevelT();
			
			if (!basicAtk &&  skillOne.playerMoveContinue && skillTwo.playerMoveContinue && skillUlt.playerMoveContinue)
			{
				if (forwardDirection)
				{
					forwardMove();
				}
				if (!forwardDirection)
				{
					backwardMove();
				}
			}
			if (basicAtk && skillOne.playerMoveContinue && skillTwo.playerMoveContinue && skillUlt.playerMoveContinue)
			{
				basicAtkImage();
			}
			if (forwardDirection){
				if (jump){

					if (jump_up){
						iShowImage(playerCoordX, playerCoordY + playerJumpCdnet, 100, 100, jump_id);
					}
					else{
						iShowImage(playerCoordX, playerCoordY + playerJumpCdnet, 100, 100, jump_id);
					}
				}
			}
			if (!forwardDirection){
				if (jump){

					if (jump_up){
						iShowImage(playerCoordX, playerCoordY + playerJumpCdnet, 100, 100, jump_Fid);
					}
					else{
						iShowImage(playerCoordX, playerCoordY + playerJumpCdnet, 100, 100, jump_Fid);
					}
				}
			}

			iText(5, 670, "HEALTH", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowImage(120, 663, 30 * levelOneHealth, 30, HealthBar[levelOneHealth]);

			iText(500, 670, "SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(630, 670, char_arr, GLUT_BITMAP_TIMES_ROMAN_24);
			showLogo();

			iText(850, 670, "BOSSHEALTH", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowImage(1050, 663, 30 * bossHealthCounter, 30, bossHealth[bossHealthCounter]);//boss


			skillOneImage();
			skillTwoImage();
			skillUltImage();

			//cout << playerCoordX << endl;
			Bossmove();
		}



		if (gameOver)
		{
			if (!allSoundOff)
				gameOverSound(true);
			iShowImage(0, 0, 1280, 720, khelaSes);
			iText(470, 500, "Your Score : ", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(600, 500, char_arr, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(430, 250, str, GLUT_BITMAP_TIMES_ROMAN_24);
			//cout << "ok"<<endl;
		}
		if (eneterPressed)
		{
			postGameEvent();
		}



}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	if(menuOption >= 0 && menuOption <= 5)
	{
		if (mx >= 932 && mx <= 1260 && my >= 442 && my <= 497)
		{
			hightlightIndex = 0;
		}
		else if (mx >= 932 && mx <= 1260 && my >= 365 && my <= 421)
		{
			hightlightIndex = 1;
		}
		else if (mx >= 932 && mx <= 1260 && my >= 289 && my <= 342)
		{
			hightlightIndex = 2;
		}
		else if (mx >= 932 && mx <= 1260 && my >= 213 && my <= 268)
		{
			hightlightIndex = 3;
		}
		else if (mx >= 932 && mx <= 1260 && my >= 139 && my <= 194)
		{
			hightlightIndex = 4;
		}
		else if (mx >= 932 && mx <= 1260 && my >= 62 && my <= 118)
		{
			hightlightIndex = 5;
		}
		else
		{
			hightlightIndex = 6;
		}

		//For highlighting new game and continue button.
		if (menuOption == 1)
		{
			if (mx >= 932 && mx <= 1260 && my >= 442 && my <= 497)
			{
				startHightlightIndex = 0;
			}
			else
			{
				startHightlightIndex = 2;
			}
		}

		if (menuOption == 4)
		{
			if (mx >= 932 && mx <= 1260 && my >= 442 && my <= 497)
			{
				settingsHightlightIndex = 0;
			}
			else if (mx >= 932 && mx <= 1260 && my >= 365 && my <= 421)
			{
				settingsHightlightIndex = 1;
			}
			else
			{
				settingsHightlightIndex = 2;
			}
		}

		if (menuOption == 2)
		{
			insIndex = 0;
		}
		if (menuOption == 3)
		{
			insIndex = 0;
		}
		if (menuOption == 5)
		{
			credIndex = 0;
		}

		//For highlighting back button.
		if (mx >= 932 && mx <= 1260 && my >= 62 && my <= 118)
		{
			backHightlightIndex = menuOption - 1;
		}
		else
		{
			backHightlightIndex = 6;
		}


	}
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

	}
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
	{     //cout << mx << ", " << my << endl;
		if (menuOption >= 0 && menuOption <= 5) //If the game is on the menu page.
		{
			selectMenuOption(mx, my);
		}
	}




	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		printf("right %d %d \n", mx, my);
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == 'd' && !basicAtk)
	{
		rightButtonProcess();
		basicAtk = false;
		bgMove = true;
	}
	if (key == ' '){

		if (!jump)
		{
			jump = true;
			jump_up = true;

		}
	}
	if (key == 'a' && !basicAtk)
	{
		leftButtonProcess();
		basicAtk = false;
	}

	if (key == '\r' && gameOver)
	{
		//soundLast = false;
		//level = 0;
		//gameOverSound(false);
		//menuSound(true);
		//sumitro
		if (score >hscore[2].gamescore)
		{
			hscore[2].gamescore = score;
			strcpy(hscore[2].name, str);


			for (int i = 2; i>0; i--)
			{
				if (hscore[i].gamescore>hscore[i - 1].gamescore)

				{
					//::::::::score sorting:::::::::::::::::::::::::::
					int temp1 = 0;
					char temp2[1000];
					temp1 = hscore[i].gamescore;
					hscore[i].gamescore = hscore[i - 1].gamescore;
					hscore[i - 1].gamescore = temp1;

					//:::::::::::::::name sorting:::::::::::::::::::::::::::::::::::::::
					strcpy(temp2, hscore[i].name);
					strcpy(hscore[i].name, hscore[i - 1].name);
					strcpy(hscore[i - 1].name, temp2);

				}

			}
			FILE *fp;
			fp = fopen("highscore.txt", "w");
			for (int i = 0; i<3; i++)
			{
				fprintf(fp, "%d %s\n", hscore[i].gamescore, hscore[i].name);
			}
			fclose(fp);
		}
		eneterPressed = true;
	}
	if (gameOver)
	{

		if (key != '\b')
		{
			str[IndexNumber] = key;
			IndexNumber++;
			str[IndexNumber] = '\0';
		}
		else
		{
			if (IndexNumber <= 0)
				IndexNumber = 0;
			else
				IndexNumber--;

			str[IndexNumber] = '\0';
		}
	}

	if (key == 'q')
	{
		basicAtk = true;
		playerIndex = 0;
	}

	if (key == 'w')
	{
		skillOne.playerMoveContinue = false;
		skillOne.skill = true;
	}
	if (key == 'e')
	{
		skillTwo.skill = true;
		skillTwo.playerMoveContinue = false;
	}
	if (key == 'r')
	{
		skillUlt.skill = true;
		skillUlt.playerMoveContinue = false;
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}

int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(SCREENWITDH,SCREENHEIGHT, "Demon_Slayer_V.0.0.2");
	///updated see the documentation

	loadImage();

	//initializing current position of enemies
	//initialCurrentPosition();

	//every 200 misliseconds the enemies will move forward
	//iSetTimer(enemyLevelOne01ApprochTimeInterval, checkEnemy);


	//setting initial position for all background slices
	setBgLv02Upper();
	setBgLv02Lower();
	setBgLv03Upper();
	setBgLv03Lower();

	iSetTimer(15, jumpChange);
	iSetTimer(50, checkKeyPress);//every 50 miliseconds d/a button pressed will be checked
	iSetTimer(200, confirmMove);//enemy will change position every 200 mils
	iSetTimer(200, BossMoveStart);//Boss enemy moving speed controlling
	iSetTimer(300, BossAtkStart);// Boss Movement condition check;
	iSetTimer(2000, helathDropControl);// health drop speed control;
	iSetTimer(1000, bossHelathDropControl);// boss health drop
	iSetTimer(200, confirmMoveLevelTwo);// basic enemy 3 and 4 movement control
	iSetTimer(200, playerCoordReset);// cordinate reset for movement
	valuesInitial();// basic enemy one and two values all
	valuesInitialLevelTwo();// enemy 3 and 4 resetter;
	levelUpdateImage();
	if (menuOption == 0)
	{
		menuSound(true);
	}

	//Leaderboard
	FILE *fp;
	fp = fopen("highscore.txt", "r");

	for (int i = 0; i<3; i++)
	{

		fscanf(fp, "%d %s\n", &hscore[i].gamescore, &hscore[i].name);

	}

	fclose(fp);

	iStart();
	return 0;
}