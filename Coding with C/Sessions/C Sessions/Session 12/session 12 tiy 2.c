//
// Created by ADMIN on 9/17/2023.
//
#include <stdio.h>

void main() {

    int n;
    int arr[100];
    int a;
    int max, min;
    int j;
    int secarr[100];
    int b, c;

    printf("Please enter the number of members in the array: ");
    scanf("%d", &n);

    for (a = 0; a < n; a++) {
        printf("\nNumber %d is: ", a+1);
        scanf("%d", &arr[a]);
    }

    for (j = 0; j < n; j++) {
        secarr[j] = arr[j];
    }

    max = secarr[0];
    min = secarr[0];

    for (b = 0; b < n; b++) {
        if (secarr[b] > max)
            max = secarr[b];
    }

    for (c = 0; c < n; c++) {
        if (secarr[c] < min)
            min = secarr[c];
    }

    printf("\nThe maximum number is: %d", max);
    printf("\nThe minimum number is: %d", min);

    return 0;
}