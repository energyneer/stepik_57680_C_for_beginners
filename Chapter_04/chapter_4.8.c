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