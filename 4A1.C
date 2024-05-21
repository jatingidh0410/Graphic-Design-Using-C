// Practical 4a

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
  int gd=DETECT, gm, x1, y1, x2, y2;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  printf("\nEnter the value of x1: ");
  scanf("%d", &x1);
  printf("\nEnter the value of y1: ");
  scanf("%d", &y1);
  printf("\nEnter the value of x2: ");
  scanf("%d", &x2);
  printf("\nEnter the value of y2: ");
  scanf("%d", &y2);
  DDA(x1,y1,x2,y2);
  getch();
  closegraph();
}

DDA(x1, y1, x2, y2)
{
  int i, dx, dy, steps;
  float x, y, xinc, yinc;

  dx = x2-x1;
  dy = y2-y1;

  if (dx >= dy)
    steps = dx;
  else
    steps = dy;

  xinc = dx/steps;
  yinc = dy/steps;

  x = x1;
  y = y1;
  putpixel(ceil(x), ceil(y), 15);

  for(i=0; i<=steps; i++)
  {
    x = x+xinc;
    y = y+yinc;
    putpixel(x,y,15);
  }

  return;
}