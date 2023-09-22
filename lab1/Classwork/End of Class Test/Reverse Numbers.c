//
// Created by ADMIN on 9/22/2023.
//
#include <stdio.h>

void main() {


    int arr[100];
    int secarr[100];
    int k = 0;

    printf("\nPlease enter 10 numbers: ");
    printf("\n=============================");

    for (int i = 0; i < 10; i++) {
        printf("\nNumber %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int j = 9; j >= 0; j--) {
        secarr[k] = arr[j];
        k++;
    }

    /*printf("\nThe numbers in reversed order is: ");

    for (int t = 0; t < 10; t++) {
        printf("\nNumber %d is %d", t+1, secarr[t]);
    } */

    printf("\nReversed:");

    for (int b = 0; b < 10; b++) {
        printf(" %d", secarr[b]);
    }

}