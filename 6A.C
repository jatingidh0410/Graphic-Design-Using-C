// Practical 6a
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int i,n,x[100],y[100];
float sx,sy;

void draw()
{
  for(i=0; i<n-1; i++)
  {
    line(x[i],y[i],x[i+1],y[i+1]);
  }
  line(x[0],y[0],x[n-1],y[n-1]);
}

void scale()
{
  for(i=0;i<n;i++)
  {
    x[i] = x[0]+(int)((float)(x[i]-x[0])*sx);
    y[i] = y[0]+(int)((float)(y[i]-y[0])*sy);
  }
}

void main()
{
  int gd=DETECT, gm;
  initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
  printf("Enter the no. of sides: ");
  scanf("%d",&n);
  printf("Enter the x and y coordinates of each point: ");
  for(i=0;i<n;i++)
  {
    scanf("%d %d", &x[i], &y[i]);
  }
  printf("Enter the scaling factors sx and sy: ");
  scanf("%f %f",&sx,&sy);
  setcolor(RED);
  draw();
  getch();
  //cleardevice();
  scale();
  setcolor(BLUE);
  draw();
  getch();
  closegraph();
}