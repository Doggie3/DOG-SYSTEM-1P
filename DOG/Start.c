#include <stdio.h>
#include <stdlib.h>
#include <mycon.h> 
void starta(int x,int y)
{
	
	
	system("cls");
	print_txt(40,0,"MAIN MENU");
	
	
	drawbox(0,0,33,20);
	hide_cursor();
	set_title("USELESS DOG SYSTEM");
	char input;
	gotoxy(x,y);
	printf("HI,which one should we start?\n");
	gotoxy(x,y+1);
	printf("[1]calculator\n");
	gotoxy(x,y+2);
	printf("[2]notepad\n");
	gotoxy(x,y+3);
	printf("[3]GAMES\n");
	gotoxy(x,y+5);
	printf("YOUR CHOOSE :");scanf("%d",&input);
	play_sound("go.wav");
	if(input==1)
	{
		int i;
		system("cls");
		printf("please,wait while calculator openning\n"); 
		system("calc");
		for(i=1;i<40;i++)
		{
			printf("=");
			delay(5);
		}
		delay(1000);
		system("cls");
	} 
	if(input==2)
	{
		int i;
		system("cls");
		printf("please,wait while NotePad openning\n"); 
		system("notepad");
		for(i=1;i<40;i++)
		{
			printf("=");
			delay(5);
		}
		delay(1000);
		system("cls");
	}
	if(input==3)
	{
		int i;
		system("cls");
		printf("please,wait while SYSTEM openning\n"); 
		delay(1000);
		system("cls");
		openGame(1,1);
	} 
	if(input!=1&&input!=2&&input!=3&&input!=4)
	{
		system("cls");
		printf("NO CMD");
		system("color 64");
		delay(1000);
		system("color 07");
	}
	if(input==4)
	{
		int i;
		system("cls");
		set_size(80, 25);
		license();
		
		
		delay(1000);
		system("cls");
	}
}

void openGame(int x,int y)
{
	print_txt(40,0,"GAME MENU");
	drawbox(0,0,33,20);
	char *boxgame="..\\DOG\\FILE\\boxgame.exe";
	char *ballgame="..\\DOG\\FILE\\ballgame.exe";
	char *horse="..\\DOG\\FILE\\runner.exe";
	char *snake="..\\DOG\\FILE\\snake.exe";
	set_title("USELESS DOG SYSTEM-GAME");
	int input;
	gotoxy(x,y);
	printf("HI,which one should we start?\n");
	gotoxy(x,y+1);
	printf("[1]BOXGAME\n");
	gotoxy(x,y+2);
	printf("[2]BALLGAME\n");
	gotoxy(x,y+3);
	printf("[3]HORSE\n");
	gotoxy(x,y+4);
	printf("[4]SNAKE\n");
	gotoxy(x,y+6);
	printf("YOUR CHOOSE :");scanf("%d",&input);
	play_sound("go.wav");
	if(input==1)
	{
		
		int i;
		system("cls");
		set_size(80, 25);
		printf("please,wait while BOXGAME openning\n"); 
		system(boxgame);
		for(i=1;i<40;i++)
		{
			printf("=");
			delay(5);
		}
		delay(1000);
		system("cls");
	} 
	if(input==2)
	{
		int i;
		system("cls");
		set_size(80, 25);
		printf("please,wait while BALLGAME openning\n"); 
		system(ballgame);
		
		delay(1000);
		system("cls");
	}
	if(input==3)
	{
		int i;
		system("cls");
		set_size(80, 25);
		printf("please,wait while HORSE openning\n"); 
		system(horse);
		for(i=1;i<40;i++)
		{
			printf("=");
			delay(5);
		}
		delay(1000);
		system("cls");
	}
	if(input==4)
	{
		int i;
		system("cls");
		set_size(80, 25);
		printf("please,wait while SNAKE openning\n"); 
		system(snake);
		
		delay(1000);
		system("cls");
	}
	
}
