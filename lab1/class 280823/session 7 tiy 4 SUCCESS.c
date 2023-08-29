//
// Created by ADMIN on 8/30/2023.
//
#include <stdio.h>

int main() {

    int slr, allowance;
    char gr;

    printf("\nPlease enter your salary: ");
    scanf("%d", &slr);

    printf("\nPlease enter your grade: ");
    scanf(" %c", &gr);

    if (gr < 'A' || gr > 'F') {
        printf("\nGrade entered is invalid");
    }
    else
        switch(gr) {
        case 'A':
            allowance = slr + 300;
            printf("\nYour total salary is %d", allowance);
            break;
        case 'B':
            allowance = slr + 250;
            printf("\nYour total salary is %d", allowance);
            break;
        default:
            allowance = slr + 100;
            printf("\nYour total salary is %d", allowance);
            break;
    }
    return 0;

}