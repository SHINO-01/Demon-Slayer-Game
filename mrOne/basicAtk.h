#ifndef BASICATK_H_
#define BASICATK_H_

#include<iostream>
using namespace std;


bool basicAtk=false;
int countAtkTimes=0;
void basicAtkImage()
{
	if (!spacePressed)//cant attack while in jump position
	{
		if (forwardDirection)
		{
			//different image of basic atack will be shown in different time.....Here in miliseconds unit
			if (countAtkTimes > 50 && countAtkTimes<150)iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, fwBasicAtk[0]);
			if (countAtkTimes>151 && countAtkTimes<251)iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, fwBasicAtk[1]);
			if (countAtkTimes>252 && countAtkTimes<353)iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, fwBasicAtk[2]);
			if (countAtkTimes>354)iShowImage(playerCoordX, playerCoordY, 210, playerHeight, fwBasicAtk[3]);
		}
		if (!forwardDirection)
		{
			if (countAtkTimes>50 && countAtkTimes<150)iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, bwBasicAtk[0]);
			if (countAtkTimes>150 && countAtkTimes<250)iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, bwBasicAtk[1]);
			if (countAtkTimes>250 && countAtkTimes<350)iShowImage(playerCoordX, playerCoordY, playerWidth, playerHeight, bwBasicAtk[2]);
			if (countAtkTimes>350)iShowImage(playerCoordX, playerCoordY, 210, playerHeight, bwBasicAtk[3]);
		}
		countAtkTimes++;
		//cout << countAtkTimes<<endl;
		if (countAtkTimes > 500)//duration for basic attack animation
		{
			basicAtk = false;
			countAtkTimes = 0;
		}
	}
}


#endif //BASICATK_H_
