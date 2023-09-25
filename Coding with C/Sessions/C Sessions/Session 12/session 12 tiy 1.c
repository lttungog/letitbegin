//
// Created by ADMIN on 9/17/2023.
//
#include <stdio.h>

void main() {

    int n;
    int ary[100];
    int i;
    int l, k = 0;
    int theary[100];
    int j;

    printf("Please enter the number of numbers in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nPlease enter a number for the array: ");
        scanf("%d", &ary[i]);
    }

    for (l = n-1; l >= 0; l--) {
            theary[k] = ary[l];
            k++;
    }

    for(j = 0; j < n; j++) {
        printf("\nNumber %d in reversed order is %d", j+1, theary[j]);
    }


}