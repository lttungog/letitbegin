//
// Created by ADMIN on 9/13/2023.
//
#include <stdio.h>

void main() {

    char ans;

    do {
        printf("\nDo you love me? ");
        scanf("%c", &ans);
        fflush(stdin);
    } while (ans != 'y' && ans != 'Y');
    printf("\nI love you too!");

}