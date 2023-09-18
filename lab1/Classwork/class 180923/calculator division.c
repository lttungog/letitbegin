//
// Created by ADMIN on 9/18/2023.
//
#include <stdio.h>

float div(float a, float b);

int main() {

    float result1 = div(4, 2);
    printf("\nThe result is: %0.2f", result1);

    float result2 = div(6, 3);
    printf("\nThe result is: %0.2f", result2);

    float num1, num2;
    printf("\n\nPlease enter first value: ");
    scanf("%f", &num1);
    // scanf cannot have value "%0.2f" - it can only use "%f" !!!!
    printf("\nPlease enter second value: ");
    scanf("%f", &num2);
    float result3 = div(num1, num2);
    printf("\nThe result is: %0.2f", result3);

    return 0;

}

float div(float a, float b) {

    printf("\n\nExecute the calculations: ");
    printf("\na = %0.2f", a);
    printf("\nb = %0.2f", b);
    return a / b;

}