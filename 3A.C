#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
  int gd=DETECT,gm;
  int xcen,ycen;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  xcen=getmaxx()/2;
  ycen=getmaxy()/2;

  circle(xcen,ycen,50);
  rectangle(xcen-40,ycen-20,xcen+40,ycen+20);
  rectangle(xcen-30,ycen-30,xcen+30,ycen+30);
  rectangle(xcen-100,ycen-100,xcen+100,ycen+100);
  setcolor(1);
  circle(xcen,ycen,30);
  setcolor(15);
  circle(xcen,ycen,60);
  setcolor(2);
  ellipse(xcen,ycen,0,360,100,150);
  line(xcen-100,ycen-100,xcen+100,ycen+100);
  getch();
  closegraph();
  return 0;

}