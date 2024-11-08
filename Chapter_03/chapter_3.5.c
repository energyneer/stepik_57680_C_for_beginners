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
    int rub, kop;
    scanf("%d %d", &rub, &kop);
    const long allInKop = kop + rub * 100;
    printf("%ld %ld", allInKop / 106, allInKop % 106);

    return 0;
}

int main_prog_3_5_6() {
    int firstLapsCount;
    float coefficient;
    scanf("%d %f", &firstLapsCount, &coefficient);
    printf("%d\n", (int)(firstLapsCount - firstLapsCount * coefficient));

    return 0;
}

int main_prog_3_5_7() {
    int bell, nBell;
    scanf("%d %d", &bell, &nBell);
    printf("%d\n", (bell + nBell)*(nBell - bell + 1)/2);

    return 0;
}

int main_prog_3_5_8() {
    int galleonInW1, sickleInW1, knutInW1;
    int galleonInW2, sickleInW2, knutInW2;
    scanf("%d %d %d", &galleonInW1, &sickleInW1, &knutInW1);
    scanf("%d %d %d", &galleonInW2, &sickleInW2, &knutInW2);
    long knutInSum = galleonInW1 * 17 * 29 + sickleInW1 * 29 + knutInW1 +
        galleonInW2 * 17 * 29 + sickleInW2 * 29 + knutInW2;
    long galleonInSum = knutInSum / (17 * 29);
    long sickleInSum = knutInSum % (17 * 29) / 29;
    knutInSum = knutInSum - galleonInSum * 17 * 29 - sickleInSum * 29;
    printf("%ld %ld %ld", galleonInSum, sickleInSum, knutInSum);

    return 0;
}