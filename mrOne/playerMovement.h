#ifndef PLAYERMOVEMENT_H_
#define PLAYERMOVEMENT_H_
#define JumpLimit 160
#include <iostream>
using namespace std;

//Variables for movements (How much distance ie coordinates will go forward or back)
int dx = 15;
int dy = 15;
//Variables for movements (current position)
int playerCoordX = 0;
int playerCoordY = 60;
int playerIndex = 0;

//
int playerWidth = 120;
int playerHeight = 100;

//variables for jumpiing enemy
bool jump = false;
bool jump_up = false;

int playerJumpCdnet = 0;
int playerCdnet_x = 20;
int playerCdnet_y = 40;


//counters and booleans for necessary conditions
bool standPosition = true;
bool forwardDirection = true;
bool spacePressed = false;

//after game level
bool posResetDone = false;

//checkings
bool clickedRight = false;
bool clickedLeft = false;
int standCounter = 0;

//bool attacked = false;

//forward movement algorithm
void forwardMove()
{
		if (!standPosition && standCounter < 100) {
			standCounter++;
			iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, forwardMovementImage[playerIndex]);
			//cout << "Hello" << " " << playerCoordX << endl;
		}
		else if(!jump) {
			iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, playerStandFW);
			playerIndex = 0;
		}
}
//backward movement algorithm
void backwardMove()
{
	if (!standPosition && standCounter < 200) {
		standCounter++;
		iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, backwardMovementImage[playerIndex]);
	}
	else if(!jump){
		iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, playerStandBW);
		playerIndex = 0;
	}
}
//forward movement for right arrow
void rightButtonProcess()
{
	clickedRight = true;
	standCounter = 0;
	forwardDirection = true;
}
//backwardward movement for left arrow
void leftButtonProcess()
{
	clickedLeft = true;
	standCounter = 0;
	forwardDirection = false;
}
//funtion to control same velocity
void checkKeyPress(){
	if (clickedRight){
		playerCoordX += dx;

		playerIndex++;
		if (playerIndex >= 8)playerIndex = 0;
		standPosition = false;
	}
	if (clickedLeft){
		playerCoordX -= dx;

		playerIndex++;
		if (playerIndex > 7)playerIndex = 0;
		standPosition = false;
	}
	clickedRight = false;
	clickedLeft = false;
}

void jumpChange(){

	if (jump){
		if (jump_up){
			playerJumpCdnet += 3;
			if (playerJumpCdnet >= JumpLimit){
				jump_up = false;
			}
		}
		else{
			playerJumpCdnet -= 3;
			if (playerJumpCdnet <0){
				jump = false;
				jump_up = false;
			}

		}
	}

}

//Jump Player
/*void checkJump()
{
	jumpState = true;
}

//forward movemet jump.....
/*void jumpPlayer()
{
	if (spacePressed)
	{
		if (jumpState)
		{
			jumpcounter++;
			if (jumpcounter <= 2)//first 3 images is for going up
			{
				iShowImage(playerCoordX += 5, playerCoordY += 40, 80, 150, playerJumpForwrard[jumpcounter]);
				cout << playerCoordY << jumpcounter <<endl;
			}
			else//last 2 images for coming down back
			{
				iShowImage(playerCoordX += 5, playerCoordY -= 40, 80, 150, playerJumpForwrard[jumpcounter]);
				//cout << playerCoordY << endl;
			}

			jumpState = false;//for showing still image
		}
		else//still image
		{
			iShowImage(playerCoordX, playerCoordY, 80, 150, playerJumpForwrard[jumpcounter]);
			if (jumpcounter == 4)
			{
				jumpcounter = -1;
				playerCoordY = 60;
				spacePressed = false;
			}
		}
	}
}*/
//if player passes 1250 coordx then it will come back to the begining of the map
bool resetEnemyCoordX = false;;
void playerCoordReset()
{
	if (playerCoordX >= 1250)
	{
		playerCoordX = 0;
	}
}

/*void resetPlayerPos()
{
	playerCoordX = 0;
}*/




#endif // !PLAYERMOVEMENT_H_