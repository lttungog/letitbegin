//
// Created by ADMIN on 8/30/2023.
//
#include <stdio.h>

int main() {

    float x, y;
    printf("\nPlease enter the values of x and y: ");
    scanf("%f %f", &x, &y);

    if (x < 2000 || x > 3000)
        printf("\nThe number you have entered for x is %0.2f.", x);

    if (y >= 100 && y <= 500)
        printf("\nThe number you have entered for y is %0.2f.", y);

    return 0;

}