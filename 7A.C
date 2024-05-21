#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int gd=DETECT,gm;
int n,x[100],y[100],i,xp,yp,degree;
float radian;
void rotation();
void draw();
void degToRad()
{
radian=(float)degree*3.14f/180;
}
void main()
{
printf("Enter the number of sides: ");
scanf("%d", &n);
printf("Enter coordinates (x,y) for each point: ");
for (i=0; i<n; i++)
{
  scanf("%d%d", &x[i], &y[i]);
}

printf("\nEnter pivot point coordinate: ");
scanf("%d%d", &xp, &yp);

printf("\nEnter rotation angle: ");
scanf("%d", &degree);

degToRad();
initgraph(&gd, &gm, "C:\\TC\\BGI");
cleardevice();

// Drawing original in RED Color
setcolor(RED);
draw();

// Doing rotation
getch();
rotation();

// Drawing rotated polygon in BLUE color
setcolor(BLUE);
draw();
getch();
}

void draw()
{
for(i=
0;i<n-1;i++)
{
line(x[i],y[i],x[i+1],y[i+1]);
}
line(x[0],y[0],x[n-1],y[n-1]);
}
void rotation(){
float t,v;
for(i=0;i<n;i++){
 t=x[i]-xp;
 v=y[i]-yp;
 x[i]=xp+floor(t*cos(radian)-v*sin(radian));
 y[i]=yp+floor(v*cos(radian)-t*sin(radian));
}
}