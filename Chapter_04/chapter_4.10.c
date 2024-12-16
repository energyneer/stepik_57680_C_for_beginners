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