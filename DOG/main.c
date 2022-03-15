#include <stdio.h>
#include <stdlib.h>
#include <mycon.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void drawbox(int x1,int y1,int x2,int y2)
{
	int x,y;
	gotoxy(x1,y1);
	for(x=x1;x<=x2;x++)
	{
		gotoxy(x,y1);
		printf("#");
	}
	for(x=x1;x<=x2;x++)
	{
		gotoxy(x,y2);
		printf("#");
	}
	for(y=y1;y<=y2;y++)
	{
		gotoxy(x1,y);
		printf("#");
	}
	for(y=y1;y<=y2;y++)
	{
		gotoxy(x2,y);
		printf("#");
	}
	
}
void printtxt(int x,int y,char txt)
{
	gotoxy(x,y);
	printf("%c",&txt);
}

int main(int argc, char *argv[]) {
	
	
	while(1)
	{
		ADS("oooooooooo",1000,50,25);
		set_size(50,25);
		drawbox(0,0,33,20);
		starta(1,1);
	}
	gotoxy(1,30);
	return 0;
}

