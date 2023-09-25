//
// Created by ADMIN on 9/14/2023.
//
#include <stdio.h>
#include <string.h>

void main() {

    int ary[5];
    int i, j, k, t, temp;

    for(i = 0; i < 5; i++) {
        printf("\nPlease enter a number for the array: ");
        scanf("%d", &ary[i]);
    }

    /*for (k = 0, t = 4; t > 2; k++, t-- ) {
        strcpy(temp, ary[k]);
        strcpy(ary[k], ary[t]);
        strcpy(ary[t], ary[k]);
    }*/

    for(j = 0; j < 5; j++) {
        printf("\nNumber %d is %d", j+1, ary[j]);
    }


}