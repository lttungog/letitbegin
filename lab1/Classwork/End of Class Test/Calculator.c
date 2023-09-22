//
// Created by ADMIN on 9/22/2023.
//
#include <stdio.h>

void menu();
int sum (int a, int b);
int sub (int a, int b);
int multi (int a, int b);
int div (int a, int b);

int main() {

    int num1, num2;

    printf("\nPlease enter the 1st Number: ");
    scanf("%d", &num1);
    printf("\nPlease enter the 2nd Number: ");
    scanf("%d", &num2);

    int result1 = sum (num1, num2);
    int result2 = sub (num1, num2);
    int result3 = multi (num1, num2);
    int result4 = div (num1, num2);

    char x;
    printf("\nThis is the list of processes: \n");
    menu();
    fflush(stdin);
    printf("\nPlease select which process you would like the result of: ");
    scanf("%c", &x);

    switch(x) {
        case 'a':
            printf("\nThe sum of the numbers is: %d\n", result1);
            break;
        case 'b':
            printf("\nThe substraction result is: %d\n", result2);
            break;
        case 'c':
            printf("\nThe multiplication result is: %d\n", result3);
            break;
        case 'd':
            printf("\nThe division result is: %d\n", result4);
            break;
        default:
            printf("\nThe process you have chosen is invalid.");
    }


    return 0;

}

void menu() {

    printf("a. Sum");
    printf("\nb. Substraction");
    printf("\nc. Multiplication");
    printf("\nd. Division");
    printf("\n");

}

int sum (int a, int b) {

    int c;
    c = a + b;
    return c;

}

int sub (int a, int b) {

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