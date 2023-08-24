//
// Created by ADMIN on 8/24/2023.
//

#include <stdio.h>

int main(){

    int a, b, c, d, i;
    int r1, r2, r3;

    printf("Test  r1 = ++i % 7\n");
    printf("i = ");
    scanf("%d", &i);
    r1 = ++i % 7;
    printf("r1 = ++i % 7 = %d\n", r1);

    printf("Test  r2 = 5 * (c - 3 + d)\n");
    printf("c, d = ");
    scanf("%d %d", &c, &d);
    r2 = 5 * (c - 3 + d);
    printf("Result r2 = 5 * (c - 3 + d) = %d\n", r2);

    printf("Test r3 = a * (b + c / d) - 22\n");
    printf("a, b, c, d = ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    r3 = a * (b + c / d) - 22;
    printf("Result r3 = a * (b + c / d) - 22 = %d\n", r3);

    return 0;
}