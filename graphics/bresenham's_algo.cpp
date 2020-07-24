#include <graphics.h>
#include <stdio.h>
#include <dos.h>
int main( )
{
	float x,y,x1,y1,x2,y2,dx,dy;
	int i,gd=DETECT,gm,p;

    initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	printf("Enter the value of x1 and y1 : ");
	scanf("%f%f",&x1,&y1);
	printf("Enter the value of x2 and y2: ");
	scanf("%f%f",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	p=(2*dy)-dx;

	x=x1;
	y=y1;
	while(x<=x2 && y<=y2)
    {
        putpixel(x,y,15);
        if(p<0)
        {
            p=p+(2*dy);
            x++;
        }
        else
        {
            p=p+(2*dy)-(2*dx);
            x++;
            y++;
        }
        delay(100);
    }
    getch();
	closegraph();
}
