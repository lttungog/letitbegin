//
// Created by ADMIN on 9/14/2023.
//
#include <stdio.h>

void main() {

    char alpha[26];
    int i, j;

    for (i = 65, j = 0; i < 91; i++, j++) {
        alpha[j] = i;
        printf("The character now assigned is %c \n", alpha[j]);
    }
    getchar();
}