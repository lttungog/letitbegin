//
// Created by ADMIN on 9/18/2023.
//
#include <stdio.h>

void main() {

    int arr[5];
    int n, sum = 0;
    int min, max;
    int i;
    float avg;

    for (n = 0; n < 5; n++) {
        printf("\nPlease enter the numbers for the array: ");
        scanf("%d", &arr[n]);
        sum += arr[n];
    }

    min = arr[0];
    max = arr[0];

    for (i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
    }

    avg = (float)sum / 5;

    printf("\nThe maximum number of the array is: %d", max);
    printf("\nThe minimum number of the array is: %d", min);
    printf("\nThe sum of the numbers in the array is: %d", sum);
    printf("\nThe average of the array is: %0.2f", avg);

    for (i = 4; i >= 0; i--) {
        printf("\nThe array in reversed order is: %d", arr[i]);
    }

    return 0;
}