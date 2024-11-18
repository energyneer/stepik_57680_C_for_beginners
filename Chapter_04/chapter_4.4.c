//
// Created by energyneer on 2024-11-18.
//

#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    return sqrt(pow(dx, 2) + pow(dy, 2));
}

// Stepik code
int main_prog_4_4_1() {
    int x1, y1, x2, y2;
    float len;

    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    len = dist(x1, y1, x2, y2);
    printf("%.3f\n", len);
    return 0;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float dist1 = dist(x1, y1, x2, y2);
    float dist2 = dist(x2, y2, x3, y3);
    float dist3 = dist(x3, y3, x1, y1);
    float p = (dist1 + dist2 + dist3) / 2.0F;

    return sqrt(p * (p - dist1) * (p - dist2) * (p - dist3));
}

// Stepik code
int main_prog_4_4_2() {
    int x1, y1, x2, y2, x3, y3;
    float s;

    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    scanf("%d%d", &x3, &y3);
    s = area(x1, y1, x2, y2, x3, y3);
    printf("%.3f\n", s);

    return 0;
}

void print_revers(int x)
{
    int rest = x / 10;
    if (rest > 0)
    {
        printf("%d", x % 10);

        print_revers(rest);
    }
    else
    {
        printf("%d", x);
    }
}

int main_prog_4_4_3()
{
    int number;
    scanf("%d", &number);

    print_revers(number);
    printf("\n");

    return 0;
}