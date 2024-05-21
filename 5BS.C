#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long x, y, x_center, y_center;
    long a_sqr, b_sqr, fx, fy, d, a, b, tmp1, tmp2;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C://TURBOC3//BGI");

    printf("_______MIDPOINT ELLIPSE ALGORITHM_______\n\n");
    printf("Enter coordinates x and y: ");
    scanf("%ld %ld", &x_center, &y_center);
    printf("Now enter values of x_radius and y_radius: ");
    scanf("%ld %ld", &a, &b);

    x = 0;
    y = b;
    a_sqr = a * a;
    b_sqr = b * b;
    fx = 2 * b_sqr * x;
    fy = 2 * a_sqr * y;
    d = b_sqr - (a_sqr * b) + (a_sqr * 0.25);

    do
    {
        putpixel(x_center + x, y_center + y, YELLOW);
        putpixel(x_center - x, y_center - y, YELLOW);
        putpixel(x_center + x, y_center - y, YELLOW);
        putpixel(x_center - x, y_center + y, YELLOW);

        if (d < 0)
        {
            d = d + fx + b_sqr;
        }
        else
        {
            y = y - 1;
            d = d + fx - fy + b_sqr;
            fy = fy - (2 * a_sqr);
        }

        x = x + 1;
	fx = fx + (2 * b_sqr);
	delay(100);
    } while (fx < fy);

    tmp1 = (x + 0.5) * (x + 0.5);
    tmp2 = (y - 1) * (y - 1);
    d = b_sqr * tmp1 + a_sqr * tmp2 - (a_sqr * b_sqr);

    do
    {
        putpixel(x_center + x, y_center + y, YELLOW);
        putpixel(x_center - x, y_center - y, YELLOW);
        putpixel(x_center + x, y_center - y, YELLOW);
        putpixel(x_center - x, y_center + y, YELLOW);

        if (d >= 0)
        {
            d = d - fy + a_sqr;
        }
        else
        {
            x = x + 1;
            d = d + fx - fy + a_sqr;
            fx = fx + (2 * b_sqr);
        }

        y = y - 1;
        fy = fy + (2 * a_sqr);
    } while (y > 0);

    getch();
    closegraph();
    return 0;
}
