//
// Created by ADMIN on 9/11/2023.
//
#include <stdio.h>

int main() {

    int num1, num2, sum;
    num1 = 0;
    num2 = 1;

    printf("%d\t", num1);
    do {
        printf("%d\t", num2);
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    } while (num2 <= 25);
}