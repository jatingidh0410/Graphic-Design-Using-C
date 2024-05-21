#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  printf("***** HUT *****");
  line(150,100,50,200);
  line(150,100,350,100);
  line(150,100,300,200);
  line(300,200,500,200);
  line(350,100,500,200);
  line(50,200,300,200);
  rectangle(50,400,300,200);
  rectangle(300,200,500,400);
  rectangle(130,250,230,400);
  getch();
  closegraph();
}