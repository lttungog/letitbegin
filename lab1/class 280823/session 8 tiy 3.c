//
// Created by ADMIN on 8/30/2023.
//
#include <stdio.h>

int main() {

    float a, b, c;
    printf("\nPlease enter values for a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b && a > c)
        printf("The number with the highest value is a = %0.2f", a);
    else if (b > a && b > c)
        printf("The number with the highest value is b = %0.2f", b);
    else
        printf("The number with the highest value is c = %0.2f", c);

    return 0;

}