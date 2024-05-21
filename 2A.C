#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
  int gdriver=DETECT,gmode;
  int xmax,ymax;
  initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
  xmax=getmaxx();
  ymax=getmaxy();
  line(xmax/2,0,xmax/2,ymax);
  line(0,ymax/2,xmax,ymax/2);
  circle(180,125,100);
  outtextxy(170,125,"CIRCLE");
  rectangle(58,251,304,392);
  outtextxy(160,300,"RECTANGLE");
  arc(500,150,45,135,100);
  outtextxy(500,130,"HALF ELLIPSE");
  ellipse(500,300,0,360,75,25);
  outtextxy(500,300,"ELLIPSE");
  getch();
  return 0;
}