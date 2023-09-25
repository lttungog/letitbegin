//
// Created by ADMIN on 8/27/2023.
//
#include <stdio.h>

int main() {

    float x, ft, in;
    printf("Please enter a real number: ");
    scanf("%f", &x);
    in = x / 2.54;
    ft = in / 12;
    printf("\n%0.1f centimeters is %0.1f feet.", x, ft);
    printf("\n%0.1f centimeters is %0.1f inches.", x, in);

    return 0;
}