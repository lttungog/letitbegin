//
// Created by ADMIN on 9/11/2023.
//
#include <stdio.h>

int main() {

    int i, j, k, a;
    i = 1;
    printf("Please enter a number: ");
    scanf("%d", &i);
    printf("\n");

    for(j = 1; j <= i; j++){
        printf("\n");
        for(k = 1; k <= j; k++){
            printf("%d", k);
        }

    }

}