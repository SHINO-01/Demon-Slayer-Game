#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED



bool bgMove = false;
int id;
int BgLevel01_upper[20];
int BgLevel02_upper[20];
int BgLevel02_lower[20];
int bgLevel03_upper[20];
int bgLevel03_lower[20];

struct Background{
	int x;
	int y;
};

Background BgLv01Upper[20];
Background BgLv02Upper[20];
Background BgLv02Lower[20];
Background BgLv03Upper[20];
Background BgLv03Lower[20];


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

void LoadBgLv02Upper(){
	
	BgLevel02_upper[0] = iLoadImage("level02Master\\level02_01.png");
	BgLevel02_upper[1] = iLoadImage("level02Master\\level02_02.png");
	BgLevel02_upper[2] = iLoadImage("level02Master\\level02_03.png");
	BgLevel02_upper[3] = iLoadImage("level02Master\\level02_04.png");
	BgLevel02_upper[4] = iLoadImage("level02Master\\level02_05.png");
	BgLevel02_upper[5] = iLoadImage("level02Master\\level02_06.png");
	BgLevel02_upper[6] = iLoadImage("level02Master\\level02_07.png");
	BgLevel02_upper[7] = iLoadImage("level02Master\\level02_08.png");
	BgLevel02_upper[8] = iLoadImage("level02Master\\level02_09.png");
	BgLevel02_upper[9] = iLoadImage("level02Master\\level02_10.png");
	BgLevel02_upper[10] = iLoadImage("level02Master\\level02_11.png");
	BgLevel02_upper[11] = iLoadImage("level02Master\\level02_12.png");
	BgLevel02_upper[12] = iLoadImage("level02Master\\level02_13.png");
	BgLevel02_upper[13] = iLoadImage("level02Master\\level02_14.png");
	BgLevel02_upper[14] = iLoadImage("level02Master\\level02_15.png");
	BgLevel02_upper[15] = iLoadImage("level02Master\\level02_16.png");
	BgLevel02_upper[16] = iLoadImage("level02Master\\level02_17.png");
	BgLevel02_upper[17] = iLoadImage("level02Master\\level02_18.png");
	BgLevel02_upper[18] = iLoadImage("level02Master\\level02_19.png");
	BgLevel02_upper[19] = iLoadImage("level02Master\\level02_20.png");
}

void LoadBgLv02Lower(){

	BgLevel02_lower[0] = iLoadImage("level02Master\\level02_21.png");
	BgLevel02_lower[1] = iLoadImage("level02Master\\level02_22.png");
	BgLevel02_lower[2] = iLoadImage("level02Master\\level02_23.png");
	BgLevel02_lower[3] = iLoadImage("level02Master\\level02_24.png");
	BgLevel02_lower[4] = iLoadImage("level02Master\\level02_25.png");
	BgLevel02_lower[5] = iLoadImage("level02Master\\level02_26.png");
	BgLevel02_lower[6] = iLoadImage("level02Master\\level02_27.png");
	BgLevel02_lower[7] = iLoadImage("level02Master\\level02_28.png");
	BgLevel02_lower[8] = iLoadImage("level02Master\\level02_29.png");
	BgLevel02_lower[9] = iLoadImage("level02Master\\level02_30.png");
	BgLevel02_lower[10] = iLoadImage("level02Master\\level02_31.png");
	BgLevel02_lower[11] = iLoadImage("level02Master\\level02_32.png");
	BgLevel02_lower[12] = iLoadImage("level02Master\\level02_33.png");
	BgLevel02_lower[13] = iLoadImage("level02Master\\level02_34.png");
	BgLevel02_lower[14] = iLoadImage("level02Master\\level02_35.png");
	BgLevel02_lower[15] = iLoadImage("level02Master\\level02_36.png");
	BgLevel02_lower[16] = iLoadImage("level02Master\\level02_37.png");
	BgLevel02_lower[17] = iLoadImage("level02Master\\level02_38.png");
	BgLevel02_lower[18] = iLoadImage("level02Master\\level02_39.png");
	BgLevel02_lower[19] = iLoadImage("level02Master\\level02_40.png");
}

void LoadBgLv03Upper(){

	bgLevel03_upper[0] = iLoadImage("level03Master\\level03Master_01.png");
	bgLevel03_upper[1] = iLoadImage("level03Master\\level03Master_02.png");
	bgLevel03_upper[2] = iLoadImage("level03Master\\level03Master_03.png");
	bgLevel03_upper[3] = iLoadImage("level03Master\\level03Master_04.png");
	bgLevel03_upper[4] = iLoadImage("level03Master\\level03Master_05.png");
	bgLevel03_upper[5] = iLoadImage("level03Master\\level03Master_06.png");
	bgLevel03_upper[6] = iLoadImage("level03Master\\level03Master_07.png");
	bgLevel03_upper[7] = iLoadImage("level03Master\\level03Master_08.png");
	bgLevel03_upper[8] = iLoadImage("level03Master\\level03Master_09.png");
	bgLevel03_upper[9] = iLoadImage("level03Master\\level03Master_10.png");
	bgLevel03_upper[10] = iLoadImage("level03Master\\level03Master_11.png");
	bgLevel03_upper[11] = iLoadImage("level03Master\\level03Master_12.png");
	bgLevel03_upper[12] = iLoadImage("level03Master\\level03Master_13.png");
	bgLevel03_upper[13] = iLoadImage("level03Master\\level03Master_14.png");
	bgLevel03_upper[14] = iLoadImage("level03Master\\level03Master_15.png");
	bgLevel03_upper[15] = iLoadImage("level03Master\\level03Master_16.png");
	bgLevel03_upper[16] = iLoadImage("level03Master\\level03Master_17.png");
	bgLevel03_upper[17] = iLoadImage("level03Master\\level03Master_18.png");
	bgLevel03_upper[18] = iLoadImage("level03Master\\level03Master_19.png");
	bgLevel03_upper[19] = iLoadImage("level03Master\\level03Master_20.png");
}

void LoadBgLv03Lower(){

    bgLevel03_lower[0] = iLoadImage("level03Master\\level03Master_21.png");
	bgLevel03_lower[1] = iLoadImage("level03Master\\level03Master_22.png");
	bgLevel03_lower[2] = iLoadImage("level03Master\\level03Master_23.png");
	bgLevel03_lower[3] = iLoadImage("level03Master\\level03Master_24.png");
	bgLevel03_lower[4] = iLoadImage("level03Master\\level03Master_25.png");
	bgLevel03_lower[5] = iLoadImage("level03Master\\level03Master_26.png");
	bgLevel03_lower[6] = iLoadImage("level03Master\\level03Master_27.png");
	bgLevel03_lower[7] = iLoadImage("level03Master\\level03Master_28.png");
	bgLevel03_lower[8] = iLoadImage("level03Master\\level03Master_29.png");
	bgLevel03_lower[9] = iLoadImage("level03Master\\level03Master_30.png");
	bgLevel03_lower[10] = iLoadImage("level03Master\\level03Master_31.png");
	bgLevel03_lower[11] = iLoadImage("level03Master\\level03Master_32.png");
	bgLevel03_lower[12] = iLoadImage("level03Master\\level03Master_33.png");
	bgLevel03_lower[13] = iLoadImage("level03Master\\level03Master_34.png");
	bgLevel03_lower[14] = iLoadImage("level03Master\\level03Master_35.png");
	bgLevel03_lower[15] = iLoadImage("level03Master\\level03Master_36.png");
	bgLevel03_lower[16] = iLoadImage("level03Master\\level03Master_37.png");
	bgLevel03_lower[17] = iLoadImage("level03Master\\level03Master_38.png");
	bgLevel03_lower[18] = iLoadImage("level03Master\\level03Master_39.png");
	bgLevel03_lower[19] = iLoadImage("level03Master\\level03Master_40.png");
	
}

void setBgLv01Upper(){
	int pos = 0;
	for(int i = 0; i<20; i++){
	  BgLv01Upper[i].y = 0;
	  BgLv01Upper[i].x = pos;
	  pos = pos + 64; 
	}
}

void setBgLv02Upper(){
	int pos = 0;
	for(int i = 0; i < 20; i++ ){
		BgLv02Upper[i].y = 94;
		BgLv02Upper[i].x = pos;
		pos = pos + 64;
	}
}

void setBgLv02Lower(){
	int pos = 0;
	for(int i = 0; i < 20; i++ ){
		BgLv02Lower[i].y = 0;
		BgLv02Lower[i].x = pos;
		pos = pos + 64;
	}
}

void Change_bgLv01(){
	for(int i = 0; i < 20; i++){
		if(bgMove){
			BgLv01Upper[i].x -= 3;
			if(BgLv01Upper[i].x <= 0){
              BgLv01Upper[i].x = 1280;
			}
		}
	}
}

#endif //! BACKGROUND_H_INCLUDED