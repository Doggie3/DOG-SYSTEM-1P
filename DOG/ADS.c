void ADS(char *p,int time,int h,int w)
{
	set_size(50,25);
	int i;
	int a;
	int x=h/2-20;
	int y=w/2; 
	int t=time;
	cls();
	
	gotoxy(0,0);
	printf("ADS");
	gotoxy(x,y);
	printf(p);
	gotoxy(12,0);
	
	for(i=0;i<time;i++)
	{
		gotoxy(15,0);
		printf("%d",i);
		delay(1000); 
	}
	
	delay(time);
	cls();
 } 
