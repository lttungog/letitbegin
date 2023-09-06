//
// Created by ADMIN on 8/27/2023.
//
#include <stdio.h>

int main() {

    int iResult, a = 10, b = 8, c = 6, d = 5, e = 2;

    iResult = a - b - c - d;
    printf("\niResult = %d", iResult);
    iResult = a - b + c - d;
    printf("\niResult = %d", iResult);
    iResult = a + b / c / d;
    printf("\niResult = %d", iResult);
    iResult = a + b / c * d;
    printf("\niResult = %d", iResult);
    iResult = a / b * c * d;
    printf("\niResult = %d", iResult);
    iResult = a % b / c * d;
    printf("\niResult = %d", iResult);
    iResult = a % b % c % d;
    printf("\niResult = %d", iResult);
    iResult = a - (b - c) - d;
    printf("\niResult = %d", iResult);
    iResult = (a - (b - c)) - d;
    printf("\niResult = %d", iResult);
    iResult = a - ((b - c) - d);
    printf("\niResult = %d", iResult);
    iResult = a % (b % c) * d * e;
    printf("\niResult = %d", iResult);
    iResult = a + (b - c) * d - e;
    printf("\niResult = %d", iResult);
    iResult = (a + b) * c + d * e;
    printf("\niResult = %d", iResult);
    iResult = (a + b) * (c / d) % e;
    printf("\niResult = %d", iResult);

    return 0;
}