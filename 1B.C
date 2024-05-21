#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
  int gdriver=DETECT,gmode;
  int xcen,ycen;
  initgraph(&gdriver,&gdmode,"C:\\TURBOC3\\BGI");
  xcen=getmaxx()/2;
  ycen=getmaxy()/2;
  line(xcen,0,xcen,getmaxy());
  line(0,ycen,getmaxx(),ycen);

  getch();
  closegraph();
}