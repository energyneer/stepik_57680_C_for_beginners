//
// Created by energyneer on 2024-11-05.
//

#include <stdio.h>

int main_prog_3_5_1() {
    int count;

    scanf("%d", &count);
    printf("%d\n", count / 4);

    return 0;
}

int main_prog_3_5_2() {
    int round, total;

    scanf("%d %d", &round, &total);
    printf("%d %d\n", total / round, total % round);

    return 0;
}

int main_prog_3_5_3() {
    float length, width;

    scanf("%f %f", &length, &width);
    printf("%f\n", length * width);

    return 0;
}

int main_prog_3_5_4() {
    float area, wallWidth, chairWidth;

    scanf("%f %f %f", &area, &wallWidth, &chairWidth);
    const float otherWallWidth = area / wallWidth;
    printf("%d\n", (int)(otherWallWidth / chairWidth));

    return 0;
}

int main_prog_3_5_5() {

    return 0;
}