// Practical 6b
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int i,n,x[100],y[100];
float tx,ty;
void draw();
void translate();

void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
  printf("Enter the no. of sides: ");
  scanf("%d",&n);
  printf("Enter the x,y coordinates of each point: ");
  for(i=0; i<n; i++)
  {
    scanf("%d %d", &x[i], &y[i]);
  }
  printf("Enter the translation factors tx and ty: ");
  scanf("%f %f", &tx, &ty);
  setcolor(RED);
  draw();
  getch();
  translate();
  setcolor(BLUE);
  draw();
  getch();
  closegraph();
}

void draw()
{
  for(i=0; i<n-1; i++)
  {
    line(x[i],y[i],x[i+1],y[i+1]);
  }
  line(x[0],y[0],x[n-1],y[n-1]);
}

void translate()
{
  for(i=0; i<n; i++)
  {
    x[i] = x[i]+tx;
    y[i] = y[i]+ty;
  }
}