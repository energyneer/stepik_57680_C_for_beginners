//
// Created by energyneer on 2024-11-11.
//

#define EPS 0.0001

#include <stdio.h>
#include <assert.h>

float fahr(int cel) {
    return cel * 9.0F / 5.0F + 32;
}

// Stepik code
int main_prog_4_3_1() {
    int cel;
    float f;

    // тесты
    //assert(32 == fahr(0));
    //assert(122 == fahr(50));
    //assert(-40 == fahr(-40));
    //assert(33.8 == fahr(1));

    scanf("%d", &cel);
    f = fahr(cel);
    printf("%.2f\n", f);

    return 0;
}

float celsius(int fahr) {
    return (fahr - 32) * 5.0F / 9.0F;
}

// Stepik code
int main_prog_4_3_2() {
    float cel;
    int f;

    scanf("%d", &f);
    cel = celsius(f);
    printf("%.4f\n", cel);

    return 0;
}
