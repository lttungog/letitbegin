//
// Created by ADMIN on 9/20/2023.
//
#include <stdio.h>

char grade(int a);

int main() {

    int marks;
    printf("\nPlease enter your number of marks: ");
    scanf("%d", &marks);

    char result1 = grade(marks);
    // printf("\nYour grade is: %c", result1);

    if (result1 == 'A' || result1 == 'B' || result1 == 'C' || result1 == 'D')
        printf("\nYour grade is: %c", result1);
    else
        printf("You have failed.");

}

char grade(int a) {

    char b;

    if (a >= 80) {
        b = 'A';
        return b;
    }
    else if (a < 80 && a >= 70) {
        b = 'B';
        return b;
    }
    else if (a < 70 && a >= 60) {
        b = 'C';
        return b;
    }
    else if (a < 60 && a >= 50) {
        b = 'D';
        return b;
    }
    else
        b = 'F';
        return b;

}