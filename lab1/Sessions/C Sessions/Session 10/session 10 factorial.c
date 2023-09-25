//
// Created by ADMIN on 9/12/2023.
//
#include <stdio.h>

int main(){

    int num, num_fact;
    printf("Please enter a number: ");
    scanf("%d", &num);

    num_fact = 1;

    if (num == 1 || num == 0){
        printf("The factorial of your number is 1.");
    }
    else {
        do {
            num_fact = num_fact * num;
            num--;
        } while (num > 1);
        printf("The factorial of your number is: %d", num_fact);
    }
}