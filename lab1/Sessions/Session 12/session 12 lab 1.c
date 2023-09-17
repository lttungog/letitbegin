//
// Created by ADMIN on 9/17/2023.
//
#include <stdio.h>

int main() {

    int n;
    int num[100];
    int l;
    int desnum[100], k;
    int i, j , temp;

    printf("Please enter the total number of marks: ");
    scanf("%d", &n); // declare total number of elements

    for (l = 0; l < n; l++) {
        printf("\nEnter the marks of student number %d: ", l+1);
        scanf("%d", &num[l]); // declaring each element in the array
    }

    for (k = 0; k < n; k++) { // make copy of array
        desnum[k] = num[k];
    }

    for (i = 0; i < n-1; i ++) {
        for (j = i+1; j < n; j++) {
            if (desnum[i] < desnum[j]) {
                temp = desnum[i];
                desnum[i] = desnum[j];
                desnum[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("\n Number at [%d] is %d.", i, desnum[i]);

    return 0;

}