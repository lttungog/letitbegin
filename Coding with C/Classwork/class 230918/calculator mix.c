//
// Created by ADMIN on 9/18/2023.
//
#include <stdio.h>

int sum (int a, int b);
int substr (int a, int b);
int multi (int a, int b);
int div (int a, int b);

void main() {

    int num1, num2;
    printf("\nPlease enter first value: ");
    scanf("%d", &num1);
    printf("\nPlease enter second value: ");
    scanf("%d", &num2);

    int result1 = sum(num1, num2);
    printf("\nThe sum is: %d", result1);
    int result2 = substr(num1, num2);
    printf("\nThe substraction result is: %d", result2);
    int result3 = multi(num1, num2);
    printf("\nThe multiplication result is: %d", result3);
    int result4 = div(num1, num2);
    printf("\nThe division result is: %d", result4);

    return 0;

}

int sum (int a, int b) {

    int c;
    c = a + b;
    return c;
}

int substr (int a, int b) {

    int c;
    c = a - b;
    return c;

}

int multi (int a, int b) {

    int c;
    c = a * b;
    return c;

}

int div (int a, int b) {

    int c;
    c = a / b;
    return c;

}