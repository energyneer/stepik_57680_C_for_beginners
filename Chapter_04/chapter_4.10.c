//
// Created by energyneer on 2024-12-16.
//

#include <stdio.h>

void mirror(int *px, int *py)
{
    *px *= -1;
}

int main_prog_4_10_1()
{
    int x, y;
    scanf("%d %d", &x, &y);

    mirror(&x, &y);
    printf("%d %d", x, y);

    return 0;
}

void mirror_seg(int *px1, int *py1, int *px2, int *py2)
{
    *py1 *= -1;
    *py2 *= -1;
}

int main_prog_4_10_2()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    mirror_seg(&x1, &y1, &x2, &y2);
    printf("%d %d %d %d", x1, y1, x2, y2);

    return 0;
}

void move(int *px, int *py, int dx, int dy)
{
    *px += dx;
    *py += dy;
}

int main_prog_4_10_3()
{
    int x1, y1, dx, dy;
    scanf("%d %d %d %d", &x1, &y1, &dx, &dy);

    move(&x1, &y1, dx, dy);
    printf("%d %d", x1, y1);

    return 0;
}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc)
{
    *pxc = (xrb + xlt) / 2;
    *pyc = (ylt + yrb) / 2;
}

int main_prog_4_10_4()
{
    int xlt, ylt, xrb, yrb, pxc, pyc;
    scanf("%d %d %d %d", &xlt, &ylt, &xrb, &yrb);

    center(xlt, ylt, xrb, yrb, &pxc, &pyc);
    printf("%d %d", pxc, pyc);

    return 0;
}

void rotateC(int *x1, int *y1, int *x2, int *y2)
{
    int xc = (*x1 + *x2) / 2;
    int yc = (*y1 + *y2) / 2;

    int temp = *x1;
    *x1 = xc - (*y1 - yc);
    *y1 = yc + (xc - temp);

    temp = *x2;
    *x2 = xc + (yc - *y2);
    *y2 = yc - (temp - xc);
}

int main_prog_4_10_5()
{
    int xlt, ylt, xrb, yrb;
    scanf("%d %d %d %d", &xlt, &ylt, &xrb, &yrb);

    rotateC(&xlt, &ylt, &xrb, &yrb);
    printf("%d %d %d %d", xlt, ylt, xrb, yrb);

    return 0;
}