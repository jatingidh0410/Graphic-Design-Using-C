#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int n, x[100], y[100], xp, yp, degree;
float radian;

void degToRad() {
    radian = (float)degree * 3.14f / 180;
}

void rotation() {
    int i;
    float t, v, tmp_x, tmp_y;
    for (i = 0; i < n; i++) {
        t = x[i] - xp;
        v = y[i] - yp;
        tmp_x = t * cos(radian) - v * sin(radian);
        tmp_y = v * cos(radian) + t * sin(radian);
        x[i] = xp + round(tmp_x);
        y[i] = yp + round(tmp_y);
    }
}

void draw() {
    int i;
    for (i = 0; i < n - 1; i++) {
        line(x[i], y[i], x[i + 1], y[i + 1]);
    }
    line(x[0], y[0], x[n - 1], y[n - 1]);
}

int main() {
    int gd = DETECT, gm, i;

    printf("Enter the number of sides: ");
    scanf("%d", &n);

    printf("Enter coordinates (x,y) for each point: ");
    for (i = 0; i < n; i++) {
        scanf("%d%d", &x[i], &y[i]);
    }

    printf("\nEnter pivot point coordinate: ");
    scanf("%d%d", &xp, &yp);

    printf("\nEnter rotation angle: ");
    scanf("%d", &degree);

    degToRad();

    initgraph(&gd, &gm, "");

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
    closegraph();
    return 0;
}
