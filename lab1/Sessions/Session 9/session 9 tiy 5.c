//
// Created by ADMIN on 9/12/2023.
//
#include <stdio.h>

int main() {

    int a, b, c;
    printf("Please enter a number: ");
    scanf("%d", &a);
    printf("\n");

    for (b = a; b != 0; b--){
        printf("\n");
        for (c = b; c != 0; c--){
            printf("*");
        }
    }
}