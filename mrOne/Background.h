#ifndef BACKGROUND_H_
#define  BACKGROUND_H_

#include <iostream>
using namespace std;

struct Background{
	int x;
	int y;
};
bool  bgMove = false;//player moving or not

Background  BgLv02Upper[21], BgLv02Lower[21], BgLv03Upper[21], BgLv03Lower[21];

//level one background upper slices initial position
void setBgLv02Upper(){
	int pos = 0;
	for (int i = 0; i<21; i++){
		BgLv02Upper[i].y = 0;
		BgLv02Upper[i].x = pos;
		pos = pos + 64;
	}
}

//if plpayer move forward background render wil happen level one
void Change_bgLv02(){
	for (int i = 0; i < 21; i++){
		if (bgMove){
			BgLv02Upper[i].x -= 4;
			if (BgLv02Upper[i].x <= -64){//each slice widht is 64
				BgLv02Upper[i].x = 1280;//screenwidth
			}
		}
	}
}

//level one background lower slices initial position
void setBgLv02Lower(){
	int pos = 0;
	for (int i = 0; i < 21; i++){
		BgLv02Lower[i].y = 0;
		BgLv02Lower[i].x = pos;
		pos = pos + 64;
	}
}

//if plpayer move forward background render wil happen levl one
void Change_bgLv02Lower(){
	for (int i = 0; i < 21; i++){
		if (bgMove){
			BgLv02Lower[i].x -= 4;
			if (BgLv02Lower[i].x <= -64){
				BgLv02Lower[i].x = 1280;
			}
		}
	}
}

//level two background upper
void setBgLv03Upper(){
	int pos = 0;
	for (int i = 0; i<21; i++){
		BgLv03Upper[i].y = 0;
		BgLv03Upper[i].x = pos;
		pos = pos + 64;
	}
}

//if plpayer move forward background render wil happen (upper) level two
void Change_bgLv03(){
	for (int i = 0; i < 21; i++){
		if (bgMove){
			BgLv03Upper[i].x -= 4;
			if (BgLv03Upper[i].x <= -64){
				BgLv03Upper[i].x = 1280;
			}
		}
	}
}

//level two background lower
void setBgLv03Lower(){
	int pos = 0;
	for (int i = 0; i < 21; i++){
		BgLv03Lower[i].y = 0;
		BgLv03Lower[i].x = pos;
		pos = pos + 64;
	}
}

//if plpayer move forward background render wil happen (lower) level two
void Change_bgLv03Lower(){
	for (int i = 0; i < 21; i++){
		if (bgMove){
			BgLv03Lower[i].x -= 4;
			if (BgLv03Lower[i].x <= -64){
				BgLv03Lower[i].x = 1280;
			}
		}
	}
}

//it will be callled in idraw when level one
void showBackgroundImageLevelTwo(){
	for (int i = 0; i < 21; i++)
	{
		iShowImage(BgLv02Upper[i].x, BgLv02Upper[i].y, 64, 760, BgLevel02_upper[i]);
	}
	for (int i = 0; i < 21; i++)
	{
		iShowImage(BgLv02Lower[i].x, BgLv02Lower[i].y, 64, 96, BgLevel02_lower[i]);
	}
	bgMove = false;//to stop rendering if player not moving
}

//it will be callled in idraw when level two
void showBackgroundImageLevelT(){
	for (int i = 0; i < 20; i++)
	{
		iShowImage(BgLv03Upper[i].x, BgLv03Upper[i].y, 64, 760, bgLevel03_upper[i]);
	}
		iShowImage(BgLv03Upper[20].x, BgLv03Upper[20].y, 64, 760, bgLevel03_upper[20]);
	for (int i = 0; i < 20; i++)
	{
		iShowImage(BgLv03Lower[i].x, BgLv03Lower[i].y, 64, 96, bgLevel03_lower[i]);
	}
		iShowImage(BgLv03Lower[20].x, BgLv03Lower[20].y, 64, 96, bgLevel03_lower[20]);
	bgMove = false;
}


#endif // BACKGROUND_H_