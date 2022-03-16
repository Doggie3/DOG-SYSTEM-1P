#include <stdio.h>
#include <stdlib.h>
#include <mycon.h> 
#include <time.h> 

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
void print_txt(int x,int y,char *txt)
{
	set_color(7,0);
	gotoxy(x,y);
	printf(txt);
	set_color(0,7);
}
void time_tt()
{
	time_t  t;
     struct  tm  * lt;
     time  (&t); //获取Unix时间戳。
     lt =  localtime  (&t); //转为时间结构。
     printf  (  "%d/%d/%d %d:%d:%d\n" ,lt->tm_year+1900, lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec); //输出结果
}

int main(int argc, char *argv[]) {
	
	
	while(1)
	{
		ADS("https://github.com/Doggie3/DOG-SYSTEM-1P",10,50,25);
		set_size(50,25);
		drawbox(0,0,33,20);
		starta(1,1);
	}
	gotoxy(1,30);
	return 0;
}

