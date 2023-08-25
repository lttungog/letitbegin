//
// Created by ADMIN on 8/25/2023.
//

#include <stdio.h>

int main() {

    int a, b, c, sum;
    printf("Please enter your grades for Maths, Literature and English: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a * 2 + b * 2 + c;
    if (sum >= 40) {
        printf("You have passed.");
    }
    else {
        printf("You have failed.");
    }

    return 0;
}