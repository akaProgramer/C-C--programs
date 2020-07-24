#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>

int main( )
{
	float x,y,x1,y1,x2,y2,dx,dy,step,M;
	int i,gd=DETECT,gm;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	printf("Enter the value of x1 and y1 : ");
	scanf("%f%f",&x1,&y1);
	printf("Enter the value of x2 and y2: ");
	scanf("%f%f",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(dx>=dy)
		step=dx;
	else
		step=dy;
    M
