#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int x1,y1,x2,y2,gdriver,gmode;
	gdriver=DETECT;
	initgraph(&gdriver,&gmode,"C:/TC/BGI");
	printf("Enter the value of x1, y1, x2, y2: ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	DDA(x1, y1, x2, y2);
}

DDA(x1, y1, x2, y2)
{
	int dx,dy,steps,i;
	float x,y,xinc,yinc;

	dx = x2 - x1;
	dy = y2 - y1;

	if(dx>dy)
		steps = dx;
	else
		steps = dy;

	xinc = dx/steps;
	yinc = dy/steps;
	x=x1;
	y=y1;

	putpixel(ceil(x), ceil(y), 15);

	for(i=1; i<=steps; i++)
	{
		x = x + xinc;
		y = y + yinc;
		putpixel(ceil(x), ceil(y), 15);
	}
	getch();
	closegraph();
}