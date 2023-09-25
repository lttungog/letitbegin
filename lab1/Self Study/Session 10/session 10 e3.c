//
// Created by ADMIN on 9/12/2023.
//
#include <stdio.h>

int main() {

    int cnt, cnt1;
    cnt = cnt1 = 0;

    do {
        printf("\nPlease enter a number: ");
        scanf("%d", &cnt);
        printf("The number entered is: %d", cnt);
        cnt1++;
    } while (cnt != 0);
    printf("\nThe total numbers entered were %d", --cnt1);

    return 0;
}