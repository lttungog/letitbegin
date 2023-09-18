//
// Created by ADMIN on 8/28/2023.
//
#include <stdio.h>

int main(){

    int i, r;

    printf("Enter value: ");
    scanf("%d", &i);
    r = i++ % 7;
    printf("\n%d", r);
    r = ++i % 7;
    printf("\n%d", r);

    int a, b, c, d, sum1, sum2;

    printf("\n\nPlease enter 4 values: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum1 = 5 * (c - 3 + d);
    sum2 = a * (b + c / d) - 22;
    printf("\nFirst sum is = %d", sum1);
    printf("\nSecond sum is = %d", sum2);

    return 0;
}