//
// Created by ADMIN on 8/29/2023.
//
#include <stdio.h>

int main() {

    int a, b, d;
    printf("Please enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    d = a % b;

    if (d == 0) {
        printf("a is divisible by b");
    }
    else
        printf("a is not divisible by b");

    return 0;
}