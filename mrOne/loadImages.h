#ifndef LOADIMAGES_H_
#define LOADIMAGES_H_
int khelaSes;
//Map
int BgLevel02_upper[21];
int BgLevel02_lower[21];
int bgLevel03_upper[21];
int bgLevel03_lower[21];

//player images variable for attack and movement
int fwBasicAtk[4];
int bwBasicAtk[4];
int forwardMovementImage[8];
int backwardMovementImage[8];
int backgroundImage;
int playerStandFW;
int playerStandBW;
int playerJumpForwrard[5];
int playerJumpBackward[5];

//for level one enemy one forward movement and attack
int enemyLevel01enemy01ForwardMovementImage[6];
int enemyLevelOne01AtkFW[4];

//skill images
int playerSkillOneFW[7];
int playerSkillTwoFW[7];
int playerSkillThreeFW[12];//not used
int skillUltFW[7];

//for level one enemy one backward movement and attack
int enemyLevel01enemy01BackwardMovementImage[6];
int enemyLevelOne01AtkBW[4];

//for level one enemy two backward movement and attack
int enemyLevel01enemy02ForwardMovementImage[3];
int enemyLevelOne02AtkFW;

//for level one enemy two backward movement and attack
int enemyLevel01enemy02BackwardMovementImage[3];
int enemyLevelOne02AtkBW;
int jump_id;
int jump_Fid;

//for level one enemy one movement
int enemyLevel01enemy03FWMovement[7];
int enemyLevelOne03AtkFW[6];
int deadEnemyThreeLevelOne[5];

//for level one enemy two movement
int enemyLevel01enemy02Movement[5];
int enemyLevelOne02Atk[5];
int deadEnemyTwoLevelOne[2];

//for level two enemy 02
int lv02Enemy02FWM[4];
int lv02Enemy02Atk[5];
int lv02Enemy02Ded[3];
//for level two enemy 01
int lv02Enemy01FWM[3];
int lv02Enemy01Atk[4];
int lv02Enemy01Ded[2];

//Boss
int bossM[5];
int bossA[5];

//Health bar
int HealthBar[10];
int bossHealth[5];

//instructioons:
int LevelOneIns;
int scoreImg;

//menu
int mainMenuImage[1];
int subMenuOneImage[1];
int subMenuFourImage[1];

int menuHightlightImage[6];
int startHightlightImage[2];
int settingsHightlightImage[2];
int backHightlightImage[5];

int instuctionImage[1];
int creditsImage[1];
int ScoreSaveBgFinalImg;

//Logos
int skillOnelogo;
int skillOnelogoc;
int skillTwologo;
int skillTwologoc;
int skillUltlogo;
int skillUltlogoc;
int W, E, R;

int preGameOne;
int preGameTwo;
int postGame;

int id;

void loadImage(){

	//Backgtound level two
	BgLevel02_upper[0] = iLoadImage("images\\background\\Level_02\\level02_01.png");
	BgLevel02_upper[1] = iLoadImage("images\\background\\Level_02\\level02_02.png");
	BgLevel02_upper[2] = iLoadImage("images\\background\\Level_02\\level02_03.png");
	BgLevel02_upper[3] = iLoadImage("images\\background\\Level_02\\level02_04.png");
	BgLevel02_upper[4] = iLoadImage("images\\background\\Level_02\\level02_05.png");
	BgLevel02_upper[5] = iLoadImage("images\\background\\Level_02\\level02_06.png");
	BgLevel02_upper[6] = iLoadImage("images\\background\\Level_02\\level02_07.png");
	BgLevel02_upper[7] = iLoadImage("images\\background\\Level_02\\level02_08.png");
	BgLevel02_upper[8] = iLoadImage("images\\background\\Level_02\\level02_09.png");
	BgLevel02_upper[9] = iLoadImage("images\\background\\Level_02\\level02_10.png");
	BgLevel02_upper[10] = iLoadImage("images\\background\\Level_02\\level02_11.png");
	BgLevel02_upper[11] = iLoadImage("images\\background\\Level_02\\level02_12.png");
	BgLevel02_upper[12] = iLoadImage("images\\background\\Level_02\\level02_13.png");
	BgLevel02_upper[13] = iLoadImage("images\\background\\Level_02\\level02_14.png");
	BgLevel02_upper[14] = iLoadImage("images\\background\\Level_02\\level02_15.png");
	BgLevel02_upper[15] = iLoadImage("images\\background\\Level_02\\level02_16.png");
	BgLevel02_upper[16] = iLoadImage("images\\background\\Level_02\\level02_17.png");
	BgLevel02_upper[17] = iLoadImage("images\\background\\Level_02\\level02_18.png");
	BgLevel02_upper[18] = iLoadImage("images\\background\\Level_02\\level02_19.png");
	BgLevel02_upper[19] = iLoadImage("images\\background\\Level_02\\level02_20.png");
	BgLevel02_upper[20] = iLoadImage("images\\background\\Level_02\\level02_01.png");
	BgLevel02_lower[0] = iLoadImage("images\\background\\Level_02\\level02_21.png");
	BgLevel02_lower[1] = iLoadImage("images\\background\\Level_02\\level02_22.png");
	BgLevel02_lower[2] = iLoadImage("images\\background\\Level_02\\level02_23.png");
	BgLevel02_lower[3] = iLoadImage("images\\background\\Level_02\\level02_24.png");
	BgLevel02_lower[4] = iLoadImage("images\\background\\Level_02\\level02_25.png");
	BgLevel02_lower[5] = iLoadImage("images\\background\\Level_02\\level02_26.png");
	BgLevel02_lower[6] = iLoadImage("images\\background\\Level_02\\level02_27.png");
	BgLevel02_lower[7] = iLoadImage("images\\background\\Level_02\\level02_28.png");
	BgLevel02_lower[8] = iLoadImage("images\\background\\Level_02\\level02_29.png");
	BgLevel02_lower[9] = iLoadImage("images\\background\\Level_02\\level02_30.png");
	BgLevel02_lower[10] = iLoadImage("images\\background\\Level_02\\level02_31.png");
	BgLevel02_lower[11] = iLoadImage("images\\background\\Level_02\\level02_32.png");
	BgLevel02_lower[12] = iLoadImage("images\\background\\Level_02\\level02_33.png");
	BgLevel02_lower[13] = iLoadImage("images\\background\\Level_02\\level02_34.png");
	BgLevel02_lower[14] = iLoadImage("images\\background\\Level_02\\level02_35.png");
	BgLevel02_lower[15] = iLoadImage("images\\background\\Level_02\\level02_36.png");
	BgLevel02_lower[16] = iLoadImage("images\\background\\Level_02\\level02_37.png");
	BgLevel02_lower[17] = iLoadImage("images\\background\\Level_02\\level02_38.png");
	BgLevel02_lower[18] = iLoadImage("images\\background\\Level_02\\level02_39.png");
	BgLevel02_lower[19] = iLoadImage("images\\background\\Level_02\\level02_40.png");
	BgLevel02_lower[20] = iLoadImage("images\\background\\Level_02\\level02_21.png");

	//Level 03
	bgLevel03_upper[0] = iLoadImage("images\\background\\Level_03\\level03Master_01.png");
	bgLevel03_upper[1] = iLoadImage("images\\background\\Level_03\\level03Master_02.png");
	bgLevel03_upper[2] = iLoadImage("images\\background\\Level_03\\level03Master_03.png");
	bgLevel03_upper[3] = iLoadImage("images\\background\\Level_03\\level03Master_04.png");
	bgLevel03_upper[4] = iLoadImage("images\\background\\Level_03\\level03Master_05.png");
	bgLevel03_upper[5] = iLoadImage("images\\background\\Level_03\\level03Master_06.png");
	bgLevel03_upper[6] = iLoadImage("images\\background\\Level_03\\level03Master_07.png");
	bgLevel03_upper[7] = iLoadImage("images\\background\\Level_03\\level03Master_08.png");
	bgLevel03_upper[8] = iLoadImage("images\\background\\Level_03\\level03Master_09.png");
	bgLevel03_upper[9] = iLoadImage("images\\background\\Level_03\\level03Master_10.png");
	bgLevel03_upper[10] = iLoadImage("images\\background\\Level_03\\level03Master_11.png");
	bgLevel03_upper[11] = iLoadImage("images\\background\\Level_03\\level03Master_12.png");
	bgLevel03_upper[12] = iLoadImage("images\\background\\Level_03\\level03Master_13.png");
	bgLevel03_upper[13] = iLoadImage("images\\background\\Level_03\\level03Master_14.png");
	bgLevel03_upper[14] = iLoadImage("images\\background\\Level_03\\level03Master_15.png");
	bgLevel03_upper[15] = iLoadImage("images\\background\\Level_03\\level03Master_16.png");
	bgLevel03_upper[16] = iLoadImage("images\\background\\Level_03\\level03Master_17.png");
	bgLevel03_upper[17] = iLoadImage("images\\background\\Level_03\\level03Master_18.png");
	bgLevel03_upper[18] = iLoadImage("images\\background\\Level_03\\level03Master_19.png");
	bgLevel03_upper[19] = iLoadImage("images\\background\\Level_03\\level03Master_20.png");
	bgLevel03_upper[20] = iLoadImage("images\\background\\Level_03\\level03Master_01.png");
	bgLevel03_lower[0] = iLoadImage("images\\background\\Level_03\\level03Master_21.png");
	bgLevel03_lower[1] = iLoadImage("images\\background\\Level_03\\level03Master_22.png");
	bgLevel03_lower[2] = iLoadImage("images\\background\\Level_03\\level03Master_23.png");
	bgLevel03_lower[3] = iLoadImage("images\\background\\Level_03\\level03Master_24.png");
	bgLevel03_lower[4] = iLoadImage("images\\background\\Level_03\\level03Master_25.png");
	bgLevel03_lower[5] = iLoadImage("images\\background\\Level_03\\level03Master_26.png");
	bgLevel03_lower[6] = iLoadImage("images\\background\\Level_03\\level03Master_27.png");
	bgLevel03_lower[7] = iLoadImage("images\\background\\Level_03\\level03Master_28.png");
	bgLevel03_lower[8] = iLoadImage("images\\background\\Level_03\\level03Master_29.png");
	bgLevel03_lower[9] = iLoadImage("images\\background\\Level_03\\level03Master_30.png");
	bgLevel03_lower[10] = iLoadImage("images\\background\\Level_03\\level03Master_31.png");
	bgLevel03_lower[11] = iLoadImage("images\\background\\Level_03\\level03Master_32.png");
	bgLevel03_lower[12] = iLoadImage("images\\background\\Level_03\\level03Master_33.png");
	bgLevel03_lower[13] = iLoadImage("images\\background\\Level_03\\level03Master_34.png");
	bgLevel03_lower[14] = iLoadImage("images\\background\\Level_03\\level03Master_35.png");
	bgLevel03_lower[15] = iLoadImage("images\\background\\Level_03\\level03Master_36.png");
	bgLevel03_lower[16] = iLoadImage("images\\background\\Level_03\\level03Master_37.png");
	bgLevel03_lower[17] = iLoadImage("images\\background\\Level_03\\level03Master_38.png");
	bgLevel03_lower[18] = iLoadImage("images\\background\\Level_03\\level03Master_39.png");
	bgLevel03_lower[19] = iLoadImage("images\\background\\Level_03\\level03Master_40.png");
	bgLevel03_lower[20] = iLoadImage("images\\background\\Level_03\\level03Master_21.png");


	//forward movement images
	forwardMovementImage[0] = iLoadImage("images\\playerMovement\\fw01.png");
	forwardMovementImage[1] = iLoadImage("images\\playerMovement\\fw02.png");
	forwardMovementImage[2] = iLoadImage("images\\playerMovement\\fw03.png");
	forwardMovementImage[3] = iLoadImage("images\\playerMovement\\fw04.png");
	forwardMovementImage[4] = iLoadImage("images\\playerMovement\\fw05.png");
	forwardMovementImage[5] = iLoadImage("images\\playerMovement\\fw06.png");
	forwardMovementImage[6] = iLoadImage("images\\playerMovement\\fw07.png");
	forwardMovementImage[7] = iLoadImage("images\\playerMovement\\fw08.png");

	//backward movement images
	backwardMovementImage[0] = iLoadImage("images\\playerMovement\\bw01.png");
	backwardMovementImage[1] = iLoadImage("images\\playerMovement\\bw02.png");
	backwardMovementImage[2] = iLoadImage("images\\playerMovement\\bw03.png");
	backwardMovementImage[3] = iLoadImage("images\\playerMovement\\bw04.png");
	backwardMovementImage[4] = iLoadImage("images\\playerMovement\\bw05.png");
	backwardMovementImage[5] = iLoadImage("images\\playerMovement\\bw06.png");
	backwardMovementImage[6] = iLoadImage("images\\playerMovement\\bw07.png");
	backwardMovementImage[7] = iLoadImage("images\\playerMovement\\bw08.png");

	//forward jump image
	playerJumpForwrard[0] = iLoadImage("images\\playerMovement\\playerJumpFW01.png");
	playerJumpForwrard[1] = iLoadImage("images\\playerMovement\\playerJumpFW02.png");
	playerJumpForwrard[2] = iLoadImage("images\\playerMovement\\playerJumpFW03.png");
	playerJumpForwrard[3] = iLoadImage("images\\playerMovement\\playerJumpFW04.png");
	playerJumpForwrard[4] = iLoadImage("images\\playerMovement\\playerJumpFW05.png");

	//backgorund images
	backgroundImage = iLoadImage("images\\playerMovement\\background.jpg");

	//Stand image
	playerStandFW = iLoadImage("images\\playerMovement\\stand.png");
	playerStandBW = iLoadImage("images\\playerMovement\\standBw.png");

	//basic attack image forward
	fwBasicAtk[0] = iLoadImage("images\\basicAtk\\fwBasicAtk01.png");
	fwBasicAtk[1] = iLoadImage("images\\basicAtk\\fwBasicAtk02.png");
	fwBasicAtk[2] = iLoadImage("images\\basicAtk\\fwBasicAtk03.png");
	fwBasicAtk[3] = iLoadImage("images\\basicAtk\\fwBasicAtk04.png");
	//skill one
	playerSkillOneFW[0] = iLoadImage("images\\skills\\skillOne\\skillOne01.png");
	playerSkillOneFW[1] = iLoadImage("images\\skills\\skillOne\\skillOne02.png");
	playerSkillOneFW[2] = iLoadImage("images\\skills\\skillOne\\skillOne03png.png");
	playerSkillOneFW[3] = iLoadImage("images\\skills\\skillOne\\skillOne04.png");
	playerSkillOneFW[4] = iLoadImage("images\\skills\\skillOne\\skillOne05.png");
	playerSkillOneFW[5] = iLoadImage("images\\skills\\skillOne\\skillOne06.png");
	playerSkillOneFW[6] = iLoadImage("images\\skills\\skillOne\\skillOne07.png");
	//skill two
	playerSkillTwoFW[0] = iLoadImage("images\\skills\\skillTwo\\skillTwo01.png");
	playerSkillTwoFW[1] = iLoadImage("images\\skills\\skillTwo\\skillTwo02.png");
	playerSkillTwoFW[2] = iLoadImage("images\\skills\\skillTwo\\skillTwo003.png");
	playerSkillTwoFW[3] = iLoadImage("images\\skills\\skillTwo\\skillTwo004.png");
	playerSkillTwoFW[4] = iLoadImage("images\\skills\\skillTwo\\skillTwo005.png");
	playerSkillTwoFW[5] = iLoadImage("images\\skills\\skillTwo\\skillTwo006.png");
	playerSkillTwoFW[6] = iLoadImage("images\\skills\\skillTwo\\skillTwo07.png");
	//skill Three
	playerSkillThreeFW[0] = iLoadImage("images\\skills\\skillThree\\skillThree01.png");
	playerSkillThreeFW[1] = iLoadImage("images\\skills\\skillThree\\skillThree02.png");
	playerSkillThreeFW[2] = iLoadImage("images\\skills\\skillThree\\skillThree03.png");
	playerSkillThreeFW[3] = iLoadImage("images\\skills\\skillThree\\skillThree04.png");
	playerSkillThreeFW[4] = iLoadImage("images\\skills\\skillThree\\skillThree05.png");
	playerSkillThreeFW[5] = iLoadImage("images\\skills\\skillThree\\skillThree06.png");
	playerSkillThreeFW[6] = iLoadImage("images\\skills\\skillThree\\skillThree07.png");

	//skill Ultimate
	skillUltFW[0] = iLoadImage("images\\skills\\ult\\SkillUltFW_001.png");
	skillUltFW[1] = iLoadImage("images\\skills\\ult\\SkillUltFW_002.png");
	skillUltFW[2] = iLoadImage("images\\skills\\ult\\SkillUltFW_03.png");
	skillUltFW[3] = iLoadImage("images\\skills\\ult\\SkillUltFW_005.png");
	skillUltFW[4] = iLoadImage("images\\skills\\ult\\SkillUltFW_06.png");
	skillUltFW[5] = iLoadImage("images\\skills\\ult\\SkillUltFW_07.png");
	skillUltFW[6] = iLoadImage("images\\skills\\ult\\SkillUltFW_008.png");

	//basic attack image backward
	bwBasicAtk[0] = iLoadImage("images\\basicAtk\\bwBasicAtk01.png");
	bwBasicAtk[1] = iLoadImage("images\\basicAtk\\bwBasicAtk02.png");
	bwBasicAtk[2] = iLoadImage("images\\basicAtk\\bwBasicAtk03.png");
	bwBasicAtk[3] = iLoadImage("images\\basicAtk\\bwBasicAtk04.png");

	//forward movement images for level one enemy three...this actually the first enemy
	enemyLevel01enemy03FWMovement[0] = iLoadImage("images\\levelOneEnemy\\enemyThree\\01.png");
	enemyLevel01enemy03FWMovement[1] = iLoadImage("images\\levelOneEnemy\\enemyThree\\02.png");
	enemyLevel01enemy03FWMovement[2] = iLoadImage("images\\levelOneEnemy\\enemyThree\\03.png");
	enemyLevel01enemy03FWMovement[3] = iLoadImage("images\\levelOneEnemy\\enemyThree\\04.png");
	enemyLevel01enemy03FWMovement[4] = iLoadImage("images\\levelOneEnemy\\enemyThree\\005.png");
	enemyLevel01enemy03FWMovement[5] = iLoadImage("images\\levelOneEnemy\\enemyThree\\05.png");
	enemyLevel01enemy03FWMovement[6] = iLoadImage("images\\levelOneEnemy\\enemyThree\\08.png");
	//forward Attacking of level one enemy03 
	enemyLevelOne03AtkFW[0] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Atk001.png");
	enemyLevelOne03AtkFW[1] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Atk002.png");
	enemyLevelOne03AtkFW[2] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Atk003.png");
	enemyLevelOne03AtkFW[3] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Atk004.png");
	enemyLevelOne03AtkFW[4] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Atk005.png");
	enemyLevelOne03AtkFW[5] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Atk006.png");
	//dead move of level one enemy03 
	deadEnemyThreeLevelOne[0] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Dead001.png");
	deadEnemyThreeLevelOne[1] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Dead002.png");
	deadEnemyThreeLevelOne[2] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Dead003.png");
	deadEnemyThreeLevelOne[3] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Dead004.png");
	deadEnemyThreeLevelOne[4] = iLoadImage("images\\levelOneEnemy\\enemyThree\\Dead005.png");

	//forward movement images for level one enemy two
	enemyLevel01enemy02Movement[0] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\001.png");
	enemyLevel01enemy02Movement[1] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\002.png");
	enemyLevel01enemy02Movement[2] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\003.png");
	enemyLevel01enemy02Movement[3] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\004.png");
	enemyLevel01enemy02Movement[4] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\005.png");
	//forward Attacking of level one enemy02
	enemyLevelOne02Atk[0] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\Atk001.png");
	enemyLevelOne02Atk[1] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\Atk002.png");
	enemyLevelOne02Atk[2] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\Atk003.png");
	enemyLevelOne02Atk[3] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\Atk004.png");
	enemyLevelOne02Atk[4] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\Atk005.png");
	//dead move of level one enemy03 
	deadEnemyTwoLevelOne[0] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\D001.png");
	deadEnemyTwoLevelOne[1] = iLoadImage("images\\levelOneEnemy\\enemyTwo\\D002.png");


	//forward movement images for level two enemy two
	lv02Enemy02FWM[0] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\01.png");
	lv02Enemy02FWM[1] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\02.png");
	lv02Enemy02FWM[2] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\03.png");
	lv02Enemy02FWM[3] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\04.png");
	//forward Attacking of level two enemy02
	lv02Enemy02Atk[0] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\Atk01.png");
	lv02Enemy02Atk[1] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\Atk02.png");
	lv02Enemy02Atk[2] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\Atk03.png");
	lv02Enemy02Atk[3] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\Atk04.png");
	lv02Enemy02Atk[4] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\Atk05.png");
	//dead move of level two enemy02
	lv02Enemy02Ded[0] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\Dead01.png");
	lv02Enemy02Ded[1] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\Dead02.png");
	lv02Enemy02Ded[2] = iLoadImage("images\\levelTwoEnemy\\Enemy02\\Dead03.png");

	//forward movement images for level two enemy one
	lv02Enemy01FWM[0] = iLoadImage("images\\levelTwoEnemy\\Enemy01\\001.png");
	lv02Enemy01FWM[1] = iLoadImage("images\\levelTwoEnemy\\Enemy01\\002.png");
	lv02Enemy01FWM[2] = iLoadImage("images\\levelTwoEnemy\\Enemy01\\003.png");
	//forward Attacking of level two enemy01
	lv02Enemy01Atk[0] = iLoadImage("images\\levelTwoEnemy\\Enemy01\\Atk001.png");
	lv02Enemy01Atk[1] = iLoadImage("images\\levelTwoEnemy\\Enemy01\\Atk002.png");
	lv02Enemy01Atk[2] = iLoadImage("images\\levelTwoEnemy\\Enemy01\\Atk003.png");
	lv02Enemy01Atk[3] = iLoadImage("images\\levelTwoEnemy\\Enemy01\\Atk004.png");
	//dead move of level two enemy01
	lv02Enemy01Ded[0] = iLoadImage("images\\levelTwoEnemy\\Enemy01\\Dead001.png");
	lv02Enemy01Ded[1] = iLoadImage("images\\levelTwoEnemy\\Enemy01\\Dead002.png");

	//Boss Image
	bossM[0] = iLoadImage("images\\Boss\\Boss_01.png");
	bossM[1] = iLoadImage("images\\Boss\\Boss_02.png");
	bossM[2] = iLoadImage("images\\Boss\\Boss_03.png");
	bossM[3] = iLoadImage("images\\Boss\\Boss_04.png");
	bossM[4] = iLoadImage("images\\Boss\\Boss_05.png");
	bossA[0] = iLoadImage("images\\Boss\\BossAttack_01.png");
	bossA[1] = iLoadImage("images\\Boss\\BossAttack_02.png");
	bossA[2] = iLoadImage("images\\Boss\\BossAttack_03.png");
	bossA[3] = iLoadImage("images\\Boss\\BossAttack_04.png");
	bossA[4] = iLoadImage("images\\Boss\\BossAttack_05.png");



	//health bar imagess
	HealthBar[0] = iLoadImage("images\\HealthBar\\healthBar1.png");
	HealthBar[1] = iLoadImage("images\\HealthBar\\healthBar2.png");
	HealthBar[2] = iLoadImage("images\\HealthBar\\healthBar3.png");
	HealthBar[3] = iLoadImage("images\\HealthBar\\healthBar4.png");
	HealthBar[4] = iLoadImage("images\\HealthBar\\healthBar5.png");
	HealthBar[5] = iLoadImage("images\\HealthBar\\healthBar6.png");
	HealthBar[6] = iLoadImage("images\\HealthBar\\healthBar7.png");
	HealthBar[7] = iLoadImage("images\\HealthBar\\healthBar8.png");
	HealthBar[8] = iLoadImage("images\\HealthBar\\healthBar9.png");
	HealthBar[9] = iLoadImage("images\\HealthBar\\healthBar10.png");

	//Boss Health
	bossHealth[0] = iLoadImage("images\\HealthBar\\healthBar1.png");
	bossHealth[1] = iLoadImage("images\\HealthBar\\healthBar2.png");
	bossHealth[2] = iLoadImage("images\\HealthBar\\healthBar3.png");
	bossHealth[3] = iLoadImage("images\\HealthBar\\healthBar4.png");
	bossHealth[4] = iLoadImage("images\\HealthBar\\healthBar5.png");

	//Instructions after level
	LevelOneIns = iLoadImage("images\\AfterLevel\\leveloneCompeted.png");
	scoreImg = iLoadImage("images\\SCore\\Enemykil.png");

	//menu
	mainMenuImage[0] = iLoadImage("images\\menu\\MainMenu.png");

	subMenuOneImage[0] = iLoadImage("images\\menu\\subMenuOne.png");
	subMenuFourImage[0] = iLoadImage("images\\menu\\subMenuTwo.png");

	menuHightlightImage[0] = iLoadImage("images\\menu\\H01.png");
	menuHightlightImage[1] = iLoadImage("images\\menu\\H02.png");
	menuHightlightImage[2] = iLoadImage("images\\menu\\H03.png");
	menuHightlightImage[3] = iLoadImage("images\\menu\\H04.png");
	menuHightlightImage[4] = iLoadImage("images\\menu\\H05.png");
	menuHightlightImage[5] = iLoadImage("images\\menu\\H06.png");

	startHightlightImage[0] = iLoadImage("images\\menu\\sub1.png");
	startHightlightImage[1] = iLoadImage("images\\menu\\sub2.png");

	settingsHightlightImage[0] = iLoadImage("images\\menu\\sub3.png");
	settingsHightlightImage[1] = iLoadImage("images\\menu\\sub4.png");

	backHightlightImage[0] = iLoadImage("images\\menu\\back1.png");
	backHightlightImage[1] = iLoadImage("images\\menu\\back2.png");
	backHightlightImage[2] = iLoadImage("images\\menu\\back3.png");
	backHightlightImage[3] = iLoadImage("images\\menu\\back4.png");
	backHightlightImage[4] = iLoadImage("images\\menu\\back5.png");

	instuctionImage[0] = iLoadImage("images\\menu\\Instruction.png");
	creditsImage[0] = iLoadImage("images\\menu\\credits.png");

	ScoreSaveBgFinalImg = iLoadImage("images\\menu\\ScoreSaveBgFinal.png");


	//hw
	khelaSes = iLoadImage("images\\End_game.png");

	//logo
	skillOnelogo = iLoadImage("images\\logo\\01.png");
	skillOnelogoc = iLoadImage("images\\logo\\001.png");
	skillTwologo = iLoadImage("images\\logo\\02.png");
	skillTwologoc = iLoadImage("images\\logo\\002.png");
	skillUltlogo = iLoadImage("images\\logo\\03.png");
	skillUltlogoc = iLoadImage("images\\logo\\003.png");
	W = iLoadImage("images\\logo\\W.png");
	E = iLoadImage("images\\logo\\E.png");
	R = iLoadImage("images\\logo\\R.png");

	preGameOne = iLoadImage("images\\preGame\\01.png");
	postGame = iLoadImage("images\\postgame.png");
	preGameTwo = iLoadImage("images\\preGame\\02.png");

    jump_id = iLoadImage("images\\playerMovement\\jump_kid.png");
	jump_Fid = iLoadImage("images\\playerMovement\\jump_kidFlip.png");
}

#endif //LOADIMAGES_H_  