//
// Created by energyneer on 2024-11-19.
//

#include <stdio.h>

void swap(int * px, int * py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

// Stepik code
int main_prog_4_8_1()
{
    int x, y;
    scanf("%d%d", &x, &y);

    swap(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}

// Stepik code
int main_prog_4_8_2()
{
    int x, y;
    scanf("%d%d", &x, &y);

    swap(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}

void min2time(int mm, int * ph, int * pm)
{
    *ph = mm / 60;
    *pm = mm - *ph * 60;
}

// Stepik code
int main_prog_4_8_3()
{
    int mm, h, m;
    scanf("%d", &mm);

    min2time(mm, &h, &m);

    printf("%02d:%02d\n", h, m);

    return 0;
}

void min2time2(int mm, int * ph, int * pm)
{
    mm %= 24 * 60;
    *ph = mm / 60;
    *pm = mm - *ph * 60;
}

// Stepik code
int main_prog_4_8_4()
{
    int mm, h, m;
    scanf("%d", &mm);

    min2time2(mm, &h, &m);

    printf("%02d:%02d\n", h, m);

    return 0;
}