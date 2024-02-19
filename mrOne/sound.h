#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED


bool playMenuSound = true;
bool playLvl01Sound = true;
bool playLvl02Sound = true;
bool playGameOverSound = false;
bool soundLast = false;
int level = 0;

/*__________________________________________________________Controlling sound._____________________________________________________________*/


void menuSound(bool playMenuSound)
{
	if (playMenuSound )
	{
		PlaySound("sound\\MainMenu.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	else
	{
		PlaySound(0, 0, 0);
	}
	
}
void lvl01Sound(bool playLvl01Sound )
{
	if (playLvl01Sound )
	{
		PlaySound("sound\\Level01.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	else
	{
		PlaySound(0, 0, 0);
	}

}
void lvl02Sound(bool playLvl02Sound) 
{
	if (playLvl02Sound)
	{
		PlaySound("sound\\Level02.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	else
	{
		PlaySound(0, 0, 0);
	}

}

void gameOverSound(bool playGameOverSound)
{
	if (playGameOverSound )
    {
        PlaySound("sound\\GameOverFinal.wav", NULL, SND_LOOP | SND_ASYNC);
    }
    else
    {
    PlaySound(0, 0, 0);
    }
}


#endif // !SOUND_H_INCLUDED