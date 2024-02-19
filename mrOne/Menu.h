#ifndef MENU_H_
#define MENU_H_

#define screenWidth 1280
#define screenHeight 720

#include <iostream>
using namespace std;

int menuOption = 0;
int hightlightIndex;
int subMenuOneImageIndex;
int subMenuFourImageIndex;
int startHightlightIndex;
int settingsHightlightIndex;
int backHightlightIndex;
int insIndex;
int credIndex;

bool allSoundOff = false;
bool preLevelOne = false;
struct highscore{
	int gamescore;
	char name[1000];
}hscore[3];

int IndexNumber = 0;

char str[1000];

char leaders[33];

void showMenu()
{

	iShowImage(0, 0, screenWidth, screenHeight, mainMenuImage[menuOption]);

	if (menuOption == 0 && hightlightIndex <= 5 && hightlightIndex >= 0)
	{
		iShowImage(0, 0, screenWidth, screenHeight, menuHightlightImage[hightlightIndex]);
	}
	if (menuOption == 1)
	{
		iShowImage(0, 0, screenWidth, screenHeight, subMenuOneImage[subMenuOneImageIndex]);

		if (startHightlightIndex == 0)
		{
			iShowImage(0, 0, screenWidth, screenHeight, startHightlightImage[startHightlightIndex]);
		}

	}
	if (menuOption == 2)
	{
		iShowImage(0, 0, screenWidth, screenHeight, ScoreSaveBgFinalImg);

			int sum = 200;


			for (int i = 2; i >= 0; i--)
			{


				iText(900, sum, _itoa(hscore[i].gamescore, leaders, 10), GLUT_BITMAP_TIMES_ROMAN_24);
				iText(700, sum, hscore[i].name, GLUT_BITMAP_TIMES_ROMAN_24);
				sum = sum + 100;

			}
		
	}
	if (menuOption == 3)
	{
		iShowImage(0, 0, screenWidth, screenHeight, instuctionImage[insIndex]);
	}

	if (menuOption == 4)
	{
		iShowImage(0, 0, screenWidth, screenHeight, subMenuFourImage[subMenuFourImageIndex]);

		if (settingsHightlightIndex == 0)
		{
			iShowImage(0, 0, screenWidth, screenHeight, settingsHightlightImage[settingsHightlightIndex]);
		}
		if (settingsHightlightIndex == 1)
		{
			iShowImage(0, 0, screenWidth, screenHeight, settingsHightlightImage[settingsHightlightIndex]);
		}

	}

	if (menuOption == 5)
	{
		iShowImage(0, 0, screenWidth, screenHeight, creditsImage[credIndex]);
	}
	if (menuOption >= 1 && menuOption <= 5 && backHightlightIndex >= 0 && backHightlightIndex <= 4)
	{
		iShowImage(0, 0, screenWidth, screenHeight, backHightlightImage[backHightlightIndex]);
	}

}

void selectMenuOption(int menu_x, int menu_y)
{
	if (menuOption == 0 && level==0)
	{
		if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 442 && menu_y <= 497)
		{
			menuOption = 1; //For play. 	
		}

		if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 365 && menu_y <= 421)
		{
			menuOption = 2; //For leaderboard.
		}

		if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 289 && menu_y <= 342)
		{
			menuOption = 3; //For instructions.
		}

		if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 213 && menu_y <= 268)
		{
			menuOption = 4; //For settings.
		}

		if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 139 && menu_y <= 194)
		{
			menuOption = 5; //For credits.
		}

		if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 62 && menu_y <= 118)
		{
			exit(0); //For exit.
		}
	}

	else if (menuOption == 1)
	{
		if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 442 && menu_y <= 497)
		{
		menuOption = 6; //To stop running menu codes.
		preLevelOne = true;
		menuSound(false);
		if (!allSoundOff)lvl01Sound(true);//For new game.
		//eraseGame(); //Erasing saved game.
		}

	}

	
	else if (menuOption == 4)
	{
		if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 442 && menu_y <= 497)
	{
		menuSound(true);//turn on sound.
	}

	if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 365 && menu_y <= 421)
	{
		menuSound(false); //turn off sound.
		allSoundOff = true;

	}
	}

	  if (menuOption >= 1 && menuOption <= 5)
	{
		if (menu_x >= 932 && menu_x <= 1260 && menu_y >= 62 && menu_y <= 118)
		{
			menuOption = 0; //To go back.
		}
	}
}


#endif // !MENU_H_INCLUDED