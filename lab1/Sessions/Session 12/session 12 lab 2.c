//
// Created by ADMIN on 9/17/2023.
//
#include <stdio.h>

int main() {

    int A[10][10], B[10][10], C[10][10];
    int row, col;
    int i, j;

    printf("Enter the 2 dimensions of the matrix: ");
    scanf("%d %d", &row, &col);
    printf("\nEnter the values of the matrix A and B: \n");

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("\nA[%d][%d], B[%d][%d]: ", i, j, i, j);
            scanf("%d %d", &A[i][j], &B[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("\nA[%d][%d] = %d, B[%d][%d] = %d, C[%d][%d] = %d\n", i, j, A[i][j], i, j, B[i][j], i, j, C[i][j]);
        }
    }

    return 0;

}