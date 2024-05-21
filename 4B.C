#include<stdio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int x1,x2,y1,y2;
int dx,dy,i,e;
float x,y;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("Enter the starting point x1:");
scanf("%d",&x1);
printf("Enter the starting point y1:");
scanf("%d",&y1);
printf("Enter the starting point x2:");
scanf("%d",&x2);
printf("Enter the starting point y2:");
scanf("%d",&y2);

dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
e=2*dy-dx;
i=1;
cleardevice();

a:putpixel(ceil(x),ceil(y),WHITE);
while(e>=0)
{
y=y++;
e=e-2*dx;
}

x++;
e=e+2*dx;
i++;
if(x<=x2)
goto a;
getch();
}
