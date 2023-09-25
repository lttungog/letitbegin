//
// Created by ADMIN on 8/28/2023.
//
#include <stdio.h>

int main(){

    int a = 5, b = 6, c = 7;
    printf("The value of a - b > c is %i\n", a - b > c);
    printf("The value of a * b >= c is %i\n", a * b >= c);
    printf("The value of a < b AND b > c is %i\n", a < b && b > c);
    printf("The value of a > b OR b < c is %i\mn", a > b || b < c);
    printf("The value of a + b / 2 + c <= 15 && a < b || a + c < b is %i", a + b / 2 + c <= 15 && a < b || a + c < b);

    return 0;
}