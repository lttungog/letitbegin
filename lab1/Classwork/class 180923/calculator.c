//
// Created by ADMIN on 9/18/2023.
//
#include <stdio.h>

int add(int a, int b);

// int calculator {
int main() {

    // calling upon the function with available variables
    int result = add(5, 3);
    printf("Total is: %d\n", result);

    // calling upon the function with available variables
    int result2 = add(4, 3);
    printf("Total is: %d\n", result2);

    // user enters values
    int num1, num2;
    printf("\nPlease enter the first value: ");
    scanf("%d", &num1);
    printf("\nPlease enter the second value: ");
    scanf("%d", &num2);

    // calling upon the function a third time with user provided values
    int result3 = add(num1, num2);
    printf("Total is: %d\n", result3);

    return 0;

}

int add(int a, int b) {

    printf("\n\nExecute calculations: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return a + b;

}