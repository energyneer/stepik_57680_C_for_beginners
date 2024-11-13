//
// Created by energyneer on 2024-11-11.
//

#define EPS 0.0001      // требуемая точность сравнения

#include <stdio.h>
#include <assert.h>

float fahr(int cel) {
    return cel * 9.0F / 5.0F + 32;
}

int main_prog_4_3_1() {
    int cel;    // градусы Цельсия
    float f;    // градусы Фаренгейта

    // тесты
    //assert(32 == fahr(0));      // сравнение это ДВА ==
    //assert(122 == fahr(50));
    //assert(-40 == fahr(-40));
    //assert(33.8 == fahr(1));

    scanf("%d", &cel);
    f = fahr(cel);
    printf("%.2f\n", f);    // .2f - печатать с точностью до 2 знаков после .

    return 0;
}

float celsius(int fahr) {
    return (fahr - 32) * 5.0F / 9.0F;
}

int main_prog_4_3_2() {
    float cel;  // градусы Цельсия
    int f;      // градусы Фаренгейта

    scanf("%d", &f);
    cel = celsius(f);
    printf("%.4f\n", cel);    // .2f - печатать с точностью до 2 знаков после .

    return 0;
}