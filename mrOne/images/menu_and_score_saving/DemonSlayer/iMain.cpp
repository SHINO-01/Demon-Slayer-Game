#include "iGraphics.h"
#include<stdlib.h>


#include <iostream>

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
struct ButtonCordinate{
int x;
int y;

}bcordinate[5];

int gamelevel=-1;
int hscore[3]={0,0,0};
int score;
char leaders[33];


void iDraw()
{   
	iClear();

	//:::::::::::::::::::::HomeMenu here:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

	int HomeMenu= iLoadImage("Menu\\MainMenu.png");
	int button[5];
	button[0]=iLoadImage("Menu\\Play.png");
	button[1]=iLoadImage("Menu\\Instructions.png");
	button[2]=iLoadImage("Menu\\Leaderboard.png");
	button[3]=iLoadImage("Menu\\Credits.png");
	button[4]=iLoadImage("Menu\\Exit.png");
	
	//:::::::::::::::::::::::::MENU::::::::::::::::::::::::::::::::::::::::::::::::
	if(gamelevel==-1)
	{
	
	iShowImage(0,0,1280,720,HomeMenu);
	
	for(int i=0;i<=4;i++)
	{ iShowImage(bcordinate[i].x,bcordinate[i].y,150,90,button[i]);
	}
	

	}
	//::::::::::::::::::::::play:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
	else if(gamelevel==0)
	{
		iShowImage(200,200,300,300,button[0]);
	}
	//:::::::::::::::::::::::::::instructions:::::::::::::::::::::::::::::::::::::::::::::
	else if(gamelevel==1)
	{ 
		iShowImage(200,200,300,300,button[1]);
	}
	//::::::::::::::::::::::Leaderboard::::::::::::::::::::::::::::::::::::::
	else if(gamelevel==2)
	{

		

	
		//::::::::::::::::::::::::leaderboard here:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		
		
		int sum =100;
		
		for(int i=2;i>=0;i--)
	      {
			  

			  iText(200,sum,itoa(hscore[i],leaders,10),GLUT_BITMAP_TIMES_ROMAN_24);
	         sum =sum+100;
	
	    }
	}
	else if(gamelevel==3)
	{
		iShowImage(200,200,300,300,button[3]);
	}
	else if(gamelevel==4)
	{
	
		exit(0);
			

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
		
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		for(int i=0;i<=4;i++)
		{
			if(mx>=bcordinate[i].x && mx<=bcordinate[i].x+150 && my>=bcordinate[i].y && my<=bcordinate[i].y+90)
			{
				gamelevel=i;
		  
		               }

		}
		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
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
	
	
	if (key == GLUT_KEY_RIGHT)
	{
		if (gamelevel==0)//:::::::Play:::::::::::::::::::::::::::::::::::::::::::::::::::
			score=250;
		//::::::::::::::::::::::::::::::::::::::: New High score checking (to be called upon along with final highscore) ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::	
		if(score >hscore[2])
	{
		hscore[2]=score;
	for(int i=2;i>0;i--)
	{
		if(hscore[i]>hscore[i-1])
		{
			int temp=0;
			temp=hscore[i];
			hscore[i]=hscore[i-1];
			hscore[i-1]=temp;
		}
		
	}
	FILE *fp;
		fp =fopen ("highscore.txt", "w");
		for( int i=0;i<3;i++)
		{
			fprintf(fp, "%d\n",hscore[i]);
		}
		fclose(fp);
	}
			
	}
	if (key == GLUT_KEY_LEFT)
	{
	
	}
	if (key == GLUT_KEY_UP)
	{
			
	}
	if (key == GLUT_KEY_DOWN)
	{
	
	}
	
	if (key == GLUT_KEY_HOME)
	{
		gamelevel=-1;
	}
	
}


	

	
	


int main()
{
	
	///srand((unsigned)time(NULL));
	
	
	iInitialize(1260, 720, "Demon Slayer");
	//:::::::::::::for menu::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
	int sum=100;
	for(int i=4;i>=0;i--)
	{
		bcordinate[i].x=50;
	bcordinate[i].y=sum;
	sum=sum+100;
	
	}

	//::::::::::::::::::::::::::::::::::::for high score storing in array::::::::::::::::::::::::::::::::::::::::::::::::::::::
	
	

FILE *fp;
	fp =fopen("highscore.txt", "r");
	
	for(int i=0;i<3;i++)
	{
	
	fscanf(fp,"%d",&hscore[i]);

	}
	
	fclose(fp);



	

	

	
	
	
		

	

	

	//updated see the documentations
	iStart();
	
	return 0;
}