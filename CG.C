#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

int main()
{
	int gdriver =DETECT, gmode,i=0 ;
	initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
	//setbkcolor(LIGHTGRAY);
	while(!kbhit()){
	setcolor(WHITE);
	line(0,200,50,150);
	line(50, 150,150,200);
	line(150,200,300,100);
	line(300,100,400,175);
	line(400,175,640,125);
	setcolor(WHITE);
	setfillstyle(SOLID_FILL, LIGHTGRAY);
	ellipse(413,160,0-4,174,40,40);
	floodfill(413, 158, WHITE);

	line(0, 420, 1000, 420);
	setcolor(DARKGRAY);
	setcolor(BROWN);
	setfillstyle(1, BROWN);
	circle(67+i, 391,27);
	circle(219+i, 391, 27);
	setcolor(15);
	//////////////////////TRUCK//////////////
	setcolor(5);
	setfillstyle(SOLID_FILL, RED);

	line(250+i, 390, 271+i, 390);//FRONT BASE
	line(271+i, 390, 271+i, 354);//HEAD
	line(271+i, 354, 206+i, 326);//ENGINE
	line(206+i, 326, 206+i, 282); //WINDSHILDED
	line(206+i, 282, 24+i, 282);//ROOF
	line(24+i, 282, 24+i, 390);//BEHINDLINE
	line(24+i, 390, 37+i, 390);//BASE IN THE BACK
	line(98+i, 390, 187+i, 390);//BETN WHEELS
	arc(67+i, 391, 2, 178, 31+1/2);
	arc(219+i, 391, 2, 178, 31+1/2);
	floodfill(25+i, 289, 5);

	//////////////////////bird///////////
	circle(150+i, 150, 7);
	ellipse(120+i, 150, 0, 360, 22, 10);

	//break
	line(157+i, 147, 165+i, 153);
	line(157+i, 155, 165+i, 153);
	//eye
	circle(152+i, 150, 1/2);
	//tail
	line(30+i+44, 151, 60+i+40, 151);
	line(30+i+44, 141, 60+i+40, 151);
	line(30+i+44, 161, 60+i+40, 151);
	//hands up
	if(i%2 == 0)
	{
	line(120+i, 150, 100+i, 130);
	line(120+i, 150, 140+i, 130);
	arc(120+i, 150, 44, 135, 30);
	}else
	{
	//hands down
	line(120 + i, 150, 100 + i, 170);
	line(120 + i, 150, 140 + i, 170);
	arc(120 + i, 150, 225, 318, 30);
	}
	////////////////

	if(i == 640)
	{
	i = 0;
	}else
	i++;
	delay(100);
	cleardevice();

	}

	getch();
	closegraph();
	return 0;
}