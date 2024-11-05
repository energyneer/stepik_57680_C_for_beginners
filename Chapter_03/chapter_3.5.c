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