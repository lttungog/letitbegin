//
// Created by ADMIN on 9/12/2023.
//
#include <stdio.h>

int main() {

    int a, b, c, d;
    printf("Please enter a number: ");
    scanf("%d", &a);
    printf("\n");

    for (b = 1; b <= a; b++) {
        printf("\n");
        for (c = 1; c <= b; c++) {
            printf("%d", c);
        }
    }

}