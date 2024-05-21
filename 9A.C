#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void floodFill(int x,int y,int oldcolor,int newcolor){
    if(getpixel(x,y) == oldcolor){
        putpixel(x,y,newcolor);
        floodFill(x+1,y,oldcolor,newcolor);
        floodFill(x,y+1,oldcolor,newcolor);
        floodFill(x-1,y,oldcolor,newcolor);
        floodFill(x,y-1,oldcolor,newcolor);
    }
}//getpixel(x,y) gives the color of specified pixel 
int main(){
    int gm,gd=DETECT,radius;
    int x,y;
    printf("Enter the radius,x and y position of circle: \n");
    scanf("%d %d",&x,&y);
    printf("Enter the radius of circle: \n");
    scanf("%d",&radius);
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    circle(x,y,radius);
    floodFill(x,y,0,15);
    delay(10);
    getch();
    return 0;
}
