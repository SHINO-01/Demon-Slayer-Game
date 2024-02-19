


void showLogo()
{
	if (skillOne.logo)
	{
		iShowImage(10, 600, 30, 30, W);
		iShowImage(55, 590, 50, 50, skillOnelogo);//dark image
	}
	if (!skillOne.logo)
	{
		iShowImage(10, 600, 30, 30, W);
		iShowImage(55, 590, 50, 50, skillOnelogoc);//light image
	}
	if (skillTwo.logo)
	{
		iShowImage(10, 540, 30, 30, E);
		iShowImage(55, 530, 50, 50, skillTwologo);
	}
	if (!skillTwo.logo)
	{
		iShowImage(10, 540, 30, 30, E);
		iShowImage(55, 530, 50, 50, skillTwologoc);
	}

	if (skillUlt.logo)
	{
		iShowImage(10, 480, 30, 30, R);
		iShowImage(55, 470, 50, 50, skillUltlogo);
	}
	if (!skillUlt.logo)
	{
		iShowImage(10, 480, 30, 30, R);
		iShowImage(55, 470, 50, 50, skillUltlogoc);
	}

}