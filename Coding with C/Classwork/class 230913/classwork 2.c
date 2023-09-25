//
// Created by ADMIN on 9/13/2023.
//
#include <stdio.h>

void main() {

    char ans;

    do {
        printf("\nPlease enter a character: ");
        scanf("%c", &ans);
        printf("\nYou have decided to continue.");
        fflush(stdin);
    } while (ans == 'y'|| ans == 'Y');
    printf("\nYou have decided to stop the process.");

}