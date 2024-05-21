#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void boundaryfill(int x,int y,int f_color,int b_color){
    if(getpixel(x,y)!= b_color && getpixel(x,y)!= f_color){
	delay(5);
	putpixel(x,y,f_color);
	boundaryfill(x+1,y,f_color,b_color);
	boundaryfill(x,y+1,f_color,b_color);
	boundaryfill(x-1,y,f_color,b_color);
	boundaryfill(x,y-1,f_color,b_color);
    }
}
// getpixel(x,y) gives the color of specified pixel
int main(){
    int gm;
    int gd=DETECT,radius;
    int x,y;
    printf("ENter the x and y position for circles: \n");
    scanf("%d %d",&x,&y);
    printf("Enter the radius of circle: \n");
    scanf("%d",&radius);
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    circle(x,y,radius);
    boundaryfill(x,y,4,15);
    delay(10);
    closegraph();
    return 0;
}