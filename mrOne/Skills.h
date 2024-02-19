#ifndef SKILLS_H_
#define SKILLS_H_

#include <iostream>
using namespace std;

struct playerSkills{
	bool skill = false;//skill ready or not...w pressed or mot
	int countAtkTimesSkill = 0;
	int cooldown;
	int cooldownCounter = 0;//to control cooldown
	bool playerMoveContinue = true;// while skill is active player cant move
	bool logo = true;
};
playerSkills skillOne, skillTwo, skillUlt;//three skills

bool levelOneCompleted = false;//////////////////////////

void skillOneImage()
{
	skillOne.cooldown = 4000;
	if (skillOne.skill)
	{
		if (skillOne.countAtkTimesSkill<skillOne.cooldown)
			skillOne.logo = false;
		if (skillOne.countAtkTimesSkill >= 500)//after 550 miliseconds of skill one ,, player can move 
			skillOne.playerMoveContinue = true;
		//coordx change for diferent skill image
		if (skillOne.countAtkTimesSkill>50 && skillOne.countAtkTimesSkill<220)iShowImage(playerCoordX, -10 + playerCoordY, 150, 180, playerSkillOneFW[0]);
		if (skillOne.countAtkTimesSkill>221 && skillOne.countAtkTimesSkill<391)iShowImage(playerCoordX, -10 + playerCoordY, 150, 180, playerSkillOneFW[1]);
		if (skillOne.countAtkTimesSkill>392 && skillOne.countAtkTimesSkill<562)iShowImage(playerCoordX, -20 + playerCoordY, 150, 200, playerSkillOneFW[2]);
		if (skillOne.countAtkTimesSkill>563 && skillOne.countAtkTimesSkill<733)iShowImage(playerCoordX + 130, playerCoordY, 150, 200, playerSkillOneFW[3]);
		if (skillOne.countAtkTimesSkill>734 && skillOne.countAtkTimesSkill<904)iShowImage(playerCoordX + 260, playerCoordY, 150, 200, playerSkillOneFW[4]);
		if (skillOne.countAtkTimesSkill>905 && skillOne.countAtkTimesSkill<1075)iShowImage(playerCoordX + 390, playerCoordY, 150, 200, playerSkillOneFW[5]);
		if (skillOne.countAtkTimesSkill>1076 && skillOne.countAtkTimesSkill<1246)iShowImage(playerCoordX + 420, playerCoordY, 150, 200, playerSkillOneFW[6]);

		skillOne.countAtkTimesSkill++;
		//cout << countAtkTimes<<endl;
		if (skillOne.countAtkTimesSkill > skillOne.cooldown)
		{
			skillOne.logo = true;
			skillOne.skill = false;
	
			skillOne.countAtkTimesSkill = 0;
		}
		//cout << skillOne.cooldown << endl;
	}
}
void skillTwoImage()
{
	skillTwo.cooldown = 6000;
	if (skillTwo.skill)
	{
		if (skillTwo.countAtkTimesSkill<skillTwo.cooldown)
			skillTwo.logo = false;
		if (skillTwo.countAtkTimesSkill >= 1460)//after 900 miliseconds of skill two ,, player can move 
			skillTwo.playerMoveContinue = true;
		//coordx change for diferent skill image
		if (skillTwo.countAtkTimesSkill>100 && skillTwo.countAtkTimesSkill<270)iShowImage(playerCoordX + 50, -40 + playerCoordY, 110, 250, playerSkillTwoFW[0]);
		if (skillTwo.countAtkTimesSkill>270 && skillTwo.countAtkTimesSkill<440)iShowImage(playerCoordX + 100, -60 + playerCoordY, 110, 280, playerSkillTwoFW[1]);
		if (skillTwo.countAtkTimesSkill>440 && skillTwo.countAtkTimesSkill<610)iShowImage(playerCoordX + 150, -30 + playerCoordY, 130, 200, playerSkillTwoFW[2]);
		if (skillTwo.countAtkTimesSkill>610 && skillTwo.countAtkTimesSkill<780)iShowImage(playerCoordX + 200, -30 + playerCoordY, 130, 190, playerSkillTwoFW[3]);
		if (skillTwo.countAtkTimesSkill>780 && skillTwo.countAtkTimesSkill<1120)iShowImage(playerCoordX + 250, -50 + playerCoordY, 130, 260, playerSkillTwoFW[4]);
		if (skillTwo.countAtkTimesSkill>1120 && skillTwo.countAtkTimesSkill<1290)iShowImage(playerCoordX + 300, -60 + playerCoordY, 200, 280, playerSkillTwoFW[5]);
		if (skillTwo.countAtkTimesSkill>1290 && skillTwo.countAtkTimesSkill<1460)iShowImage(playerCoordX + 350, -70 + playerCoordY, 220, 280, playerSkillTwoFW[6]);
		if (skillTwo.countAtkTimesSkill == 1460)playerCoordX += 350;
		skillTwo.countAtkTimesSkill++;
		//cout << countAtkTimes<<endl;
		if (skillTwo.countAtkTimesSkill > skillTwo.cooldown)
		{
			skillTwo.logo = true;
			skillTwo.skill = false;
			skillTwo.countAtkTimesSkill = 0;
		}
		//cout << skillOne.cooldown << endl;
	}
}

void skillUltImage()
{
	skillUlt.cooldown = 10000;
	if (skillUlt.skill )
	{
		if (skillUlt.countAtkTimesSkill<skillUlt.cooldown)
			skillUlt.logo = false;
		if (skillUlt.countAtkTimesSkill >= 850)//after 850 miliseconds of skill ult ,, player can move 
		{
			skillUlt.playerMoveContinue = true;
		}
		//coordx change for diferent skill image
		if (skillUlt.countAtkTimesSkill>100 && skillUlt.countAtkTimesSkill<200)iShowImage(playerCoordX, 0 + playerCoordY, 130, 140, skillUltFW[0]);
		if (skillUlt.countAtkTimesSkill>200 && skillUlt.countAtkTimesSkill<300)iShowImage(playerCoordX, 0 + playerCoordY, 130, 140, skillUltFW[1]);
		if (skillUlt.countAtkTimesSkill>300 && skillUlt.countAtkTimesSkill<400)iShowImage(playerCoordX, 0 + playerCoordY, 120, 130, skillUltFW[2]);
		if (skillUlt.countAtkTimesSkill>400 && skillUlt.countAtkTimesSkill<550)iShowImage(playerCoordX, -20 + playerCoordY, 140, 180, skillUltFW[3]);
		if (skillUlt.countAtkTimesSkill>550 && skillUlt.countAtkTimesSkill<700)iShowImage(playerCoordX, -60 + playerCoordY, 220, 270, skillUltFW[4]);
		if (skillUlt.countAtkTimesSkill>700 && skillUlt.countAtkTimesSkill<850)iShowImage(playerCoordX, -30 + playerCoordY, 170, 160, skillUltFW[5]);
		if (skillUlt.countAtkTimesSkill>850 && skillUlt.countAtkTimesSkill<1100)iShowImage(playerCoordX, -50 + playerCoordY, SCREENWITDH - playerCoordX, 300, skillUltFW[6]);//Ultimate skills range is till SCREENWIDTH
		skillUlt.countAtkTimesSkill++;
		//cout << countAtkTimes<<endl;
		if (skillUlt.countAtkTimesSkill > skillUlt.cooldown)
		{
			skillUlt.logo = true;
			skillUlt.skill = false;
			skillUlt.countAtkTimesSkill = 0;
		}
		//cout << skillOne.cooldown << endl;
	}
}


#endif //SKILLS_H_  