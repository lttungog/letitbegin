//
// Created by ADMIN on 8/30/2023.
//
#include <stdio.h>

int main() {

    int num1, num2;
    num1 = 77;
    num2 = 90;

    if (num1 == num2)
        printf("\nThe numbers are equal.");
    else if (num1 < num2)
        printf("\nThe larger number is %d", num2);
    else
        printf("\nThe larger number is %d", num1);

    return 0;

}