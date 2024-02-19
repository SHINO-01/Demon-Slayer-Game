#include "iGraphics.h"
#include "BackGround.h"
#define JumpLimit 170
int id;
int bgFront[19];
int bgBack[19];


//int bgF_x = 0, bgF_y = 144;
//int i = 0;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://





//bool Bgchange = false;
bool jump = false;
bool jump_up = false;

int playerJumpCdnet = 0;
int playerCdnet_x = 20;
int playerCdnet_y = 40;
int callVar = 0;

void LoadBgLv01Upper(){

	BgLevel01_upper[0] = iLoadImage("level01Master\\level01_01.png");
	BgLevel01_upper[1] = iLoadImage("level01Master\\level01_02.png");
	BgLevel01_upper[2] = iLoadImage("level01Master\\level01_03.png");
	BgLevel01_upper[3] = iLoadImage("level01Master\\level01_04.png");
	BgLevel01_upper[4] = iLoadImage("level01Master\\level01_05.png");
	BgLevel01_upper[5] = iLoadImage("level01Master\\level01_06.png");
	BgLevel01_upper[6] = iLoadImage("level01Master\\level01_07.png");
	BgLevel01_upper[7] = iLoadImage("level01Master\\level01_08.png");
	BgLevel01_upper[8] = iLoadImage("level01Master\\level01_09.png");
	BgLevel01_upper[9] = iLoadImage("level01Master\\level01_10.png");
	BgLevel01_upper[10] = iLoadImage("level01Master\\level01_11.png");
	BgLevel01_upper[11] = iLoadImage("level01Master\\level01_12.png");
	BgLevel01_upper[12] = iLoadImage("level01Master\\level01_13.png");
	BgLevel01_upper[13] = iLoadImage("level01Master\\level01_14.png");
	BgLevel01_upper[14] = iLoadImage("level01Master\\level01_15.png");
	BgLevel01_upper[15] = iLoadImage("level01Master\\level01_16.png");
	BgLevel01_upper[16] = iLoadImage("level01Master\\level01_17.png");
	BgLevel01_upper[17] = iLoadImage("level01Master\\level01_18.png");
	BgLevel01_upper[18] = iLoadImage("level01Master\\level01_19.png");
	BgLevel01_upper[19] = iLoadImage("level01Master\\level01_20.png");
}
void iDraw()

{
	iClear();

	//iSetColor(255, 0, 0);
	//iFilledRectangle(150,10,100,100);
	//iSetColor(0, 0, 255); 
	//iFilledRectangle(10, 10, 100, 100);
	
	    if(bgMove){

		    for(int i = 0; i<20; i++){
		      iShowImage(BgLv01Upper[i].x, BgLv01Upper[i].y, 64, 720, BgLevel01_upper[i]);
		     }

		}
		
		if(jump){

			  if(jump_up){
				  iShowImage(playerCdnet_x, playerCdnet_y + playerJumpCdnet, 171, 200, id);
			  }
			  else{
				  iShowImage(playerCdnet_x, playerCdnet_y + playerJumpCdnet, 171, 200, id);
			  }
		}
		else{
               iShowImage(playerCdnet_x,playerCdnet_y,171,200,id);
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
	else if(key == ' ')
	{
		if(!jump)
		{
            jump = true;
			jump_up = true;

		}

	}
	else if(key == 'd')
	{
          if(!bgMove)
		  {
			  bgMove = true;
		  }
		  else
		  {
			  bgMove = false;
		  }
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

	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}

void jumpChange(){

	if(jump){
		if(jump_up){
			playerJumpCdnet += 3;
			 if(playerJumpCdnet >= JumpLimit){
				 jump_up = false;
			 }
		}
		else{
			playerJumpCdnet -= 3 ;
			   if(playerJumpCdnet <0){
				   jump = false;
				   jump_up = false;
			   }

		}
	}

}

int main()
{   
	
	//iSetTimer(27, Change_bgLv01);
	iSetTimer(15, jumpChange);
	setBgLv01Upper();
	///srand((unsigned)time(NULL));
	iInitialize(1280, 720, "DemonSlayer");
	///updated see the documentations
	LoadBgLv01Upper();
	//LoadBackGround02();
	id = iLoadImage("image\\Tanjiro-Run_01.png");
	iStart();
	
	return 0;
}