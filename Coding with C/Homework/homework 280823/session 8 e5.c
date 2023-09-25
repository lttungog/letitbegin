//
// Created by ADMIN on 8/30/2023.
//
#include <stdio.h>

int main() {

    int num1, num2, res;
    char op;
    num1 = 90;
    num2 = 33;
    op = '-';

    switch(op) {
        case '+':
            res = num1 + num2;
            printf("\nThe sum is: %d", res);
            break;
        case '-':
            res = num1 - num2;
            printf("\nNumber after substraction is: %d", res);
            break;
        case '/':
            res = num1 / num2;
            printf("\nNumber after division is: %d", res);
            break;
        case '*':
            res = num1 * num2;
            printf("\nNumber after multiplication is: %d", res);
            break;
        default:
            printf("\nInvalid.");
            break;
    }

}