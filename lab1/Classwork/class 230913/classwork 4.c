//
// Created by ADMIN on 9/13/2023.
//
#include <stdio.h>

void main() {

    char ans;
    int i = 0;

    do {
        printf("\nDo you love me? ");
        scanf("%c", &ans);
        fflush(stdin);
        i++;
    } while (ans != 'y' && i <= 2);
    if (i > 3) {
        printf("\nThat's too bad.");
    }
    else
        printf("\nI love you too.");

}