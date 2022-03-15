void ADS(char *p,int time,int h,int w)
{
	int i;
	cls();
	gotoxy(w/2-10,h/2);
	for(i=0;i<20;i++)
	{
		printf("%c",&p);
	}
	
	delay(time);
	cls();
 } 
