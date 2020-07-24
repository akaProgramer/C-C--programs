#include<graphics.h>
#include<stdio.h>
#include<dos.h>
int main()
{
    float x1,y1,x2,y2,x,y,dx,dy,d,Dd;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");

    printf("Enter the value for x1 & y1: ");
    scanf("%f%f",&x1,&x2);
    printf("Enter the value of x2 and y2: ");
	scanf("%f%f",&x2,&y2);

	dx=x2-x1;
	dy=y2-y1;
	d=(2*dy)-(2*dx);
	Dd=2*(dy-dx);

	x=x1;
	y=y1;
	while(x<=x2 && y<=y2)
    {
        putpixel(x,y,15);
        if(d<0)
        {
            x++;
            d=d+(2*dy);
        }
        else
        {
            x++;
            y++;
            d=d+Dd;
        }
        delay(100);
    }
    getch();
    closegraph();
}
