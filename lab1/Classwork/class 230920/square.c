//
// Created by ADMIN on 9/20/2023.
//
#include <stdio.h>

int chuvi(int a, int b);
int dientich (int a, int b);

int main() {

    int height, width;
    printf("\nPlease enter value for height: ");
    scanf("%d", &height);
    printf("\nPlease enter value for width: ");
    scanf("%d", &width);

    int result1 = chuvi(height, width);
    printf("\nChu vi hinh nay la: %d", result1);
    int result2 = dientich(height, width);
    printf("\nDien tich hinh nay la: %d", result2);

}

int chuvi(int a, int b) {

    int c;
    c = 2 * (a + b);
    return c;

}

int dientich(int a, int b) {

    int c;
    c = a * b;
    return c;

}