//
// Created by ADMIN on 9/14/2023.
//
#include <stdio.h>
#include <string.h>

void main() {

    int ary[5];
    int secary[5];
    int i, j, k, t;

    for(i = 0; i < 5; i++) {
        printf("\nPlease enter a number for the array: ");
        scanf("%d", &ary[i]);
    }

    k = 0;
    for (t = 4; t >= 0; t--) {
        secary[k] = ary[t];
        k++;
    }

    for(j = 0; j < 5; j++) {
        printf("\nNumber %d is %d", j+1, secary[j]);
    }


}