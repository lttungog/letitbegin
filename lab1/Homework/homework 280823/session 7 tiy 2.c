//
// Created by ADMIN on 8/29/2023.
//
#include <stdio.h>

int main() {

    int a, b, sum;
    printf("Please enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    sum = a + b;

    if (sum == 1000) {
        printf("The sum of these 2 numbers is equal to 1000.");
    } else if (sum > 1000)
        printf("The sum of these 2 numbers is greater than 1000.");

    return 0;

}