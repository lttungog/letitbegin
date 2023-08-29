//
// Created by ADMIN on 8/29/2023.
//
#include <stdio.h>

int main() {

    int a, b, diff;
    printf("Please enter the values for a and b: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        diff = b - a;
        if (diff = a) {
            printf("\nDifference is equal to value a = %d", a);
        }
        else if (diff = b)
            printf("\nDifference is equal to value b = %d", b);
        else
            printf("\nDifference is not equal to any of the values entered.");
    }
    else {
        diff = a - b;
        if (diff = a) {
            printf("\nDifference is equal to value a = %d", a);
        }
        else if (diff = b)
            printf("\nDifference is equal to value b = %d", b);
        else
            printf("\nDifference is not equal to any of the values entered.");
    }

    return 0;

}