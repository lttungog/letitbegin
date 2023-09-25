//
// Created by ADMIN on 8/25/2023.
//
#include <stdio.h>

int main() {

    int x, y;
    x = (2 + 3) / 6;
    printf("x = %d", x);
    x = (12 + 6) / 2 * 3;
    printf("\nx = %d", x);
    y = x = (2 + 3) / 4;
    printf("\ny = x = %d", x);
    x = 7/2;
    y = 3 + 2 * (x = 7/2);
    printf("\nx = %d", x);
    printf("\ny = %d", 3 + 2 * x);
    x = (int)3.8 + 3.3;
    printf("\nx = %d", x);
    x = (2 + 3) * 10.5;
    printf("\nx = %d", x);
    x = 3 / 5 * 22.0;
    printf("\nx = %d", x);
    x = 22.0 * 3 / 5;
    printf("\nx = %d", x);


    return 0;

}