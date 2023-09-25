//
// Created by ADMIN on 8/28/2023.
//
#include <stdio.h>

int main() {

    int x;
    x = 0;

    printf("Enter Choice (1-3): ");
    scanf("%d", &x);

    if (x == 1){
        printf("\nThe choice is 1");
    }
    else if (x == 2){
        printf("\nThe choice is 2");
    }
    else if (x == 3){
        printf("\nThe choice is 3");
    }
    else {
        printf("\nInvalid choice");
    }

    return 0;
}