//
// Created by ADMIN on 9/18/2023.
//
#include <stdio.h>

int mult(int a, int b);

int main() {

    int result1 = mult(2, 4);
    printf("\nThe result is: %d\n", result1);

    int result2 = mult(3, 5);
    printf("\nThe result is: %d\n", result2);

    int num1, num2;
    printf("\nPlease enter first value: ");
    scanf("%d", &num1);
    printf("\nPlease enter second value: ");
    scanf("%d", &num2);
    int result3 = mult(num1, num2);
    printf("\nThe result is: %d\n", result3);

    return 0;

}

int mult(int a, int b) {

    printf("\nExecute calculations: ");
    printf("\na = %d", a);
    printf("\nb = %d", b);
    return a * b;

}