//
// Created by ADMIN on 9/13/2023.
//
#include <stdio.h>

void main() {

    char ans;
    printf("Please enter your answer (y/n): ");
    scanf("%c", &ans);

    while (ans == 'y'|| ans == 'Y') {
        printf("You have decided to continue.");
        fflush(stdin);
        printf("\nPlease enter your answer again: ");
        scanf("%c", &ans);
    }
    printf("You have decided to stop the process.");



}