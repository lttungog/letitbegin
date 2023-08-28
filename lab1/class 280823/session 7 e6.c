//
// Created by ADMIN on 8/28/2023.
//
#include <stdio.h>

void main() {

    int x, y;
    x = y = 0;

    printf("Enter Choice (1-3): ");
    scanf("%d", &x);

    if (x == 1) {
        printf("\nEnter Value for y (1-5): ");
        scanf("%d", &y);
        if (y <= 5)
            printf("\nThe value for y is: %d", y);
        else
            printf("\nThe value for y exceeds 5");
    }
    else
        printf("\nChoice entered was not 1");

}