#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
void main() {
 int x,y,x_mid,y_mid,radius,dp;
 int gm,gd=DETECT;
 clrscr();
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 printf("******** MID POINT CICRLE DRAWING ALGORITHM ********");
 printf("\nEnter the coordinate=");
 scanf("%d %d",&x_mid,&y_mid);
 printf("Enter the radius=");
 scanf("%d",&radius);
 x=0;
 y=radius;
 dp=1-radius;

 do{
  putpixel(x_mid+x,y_mid+y,YELLOW);
  putpixel(x_mid+y,y_mid+x,YELLOW);
  putpixel(x_mid-y,y_mid+x,YELLOW);
  putpixel(x_mid-x,y_mid+y,YELLOW);
  putpixel(x_mid-x,y_mid-y,YELLOW);
  putpixel(x_mid-y,y_mid-x,YELLOW);
  putpixel(x_mid+y,y_mid-x,YELLOW);
  putpixel(x_mid+x,y_mid-y,YELLOW);
  delay(100);
  if(dp<0){
   dp=dp+(2*x)+1;
  }else{
   y=y-1;
   dp=dp+(2*x)-(2*y)+1;
  }
  x=x+1;
 }
 while(y>x);
 getch();
 closegraph();
}
