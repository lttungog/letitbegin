//
// Created by ADMIN on 8/30/2023.
//
#include <stdio.h>

int main() {

    char x;

    printf("\nPlease enter a letter to see corresponding languages or packages: ");
    scanf(" %c", &x);

    switch(x) {
        case 'A':
        case 'a':
            printf("The value you have entered corresponds to Ada.");
            break;
        case 'B':
        case 'b':
            printf("The value you have entered corresponds to Basic.");
            break;
        case'C':
        case 'c':
            printf("The value you have entered corresponds to COBOL.");
            break;
        case 'D':
        case 'd':
            printf("The value you have entered corresponds to dBASE III.");
            break;
        case 'f':
        case 'F':
            printf("The value you have entered corresponds to Fortran.");
            break;
        case 'p':
        case 'P':
            printf("The value you have entered corresponds to Pascal.");
            break;
        case 'v':
        case 'V':
            printf("The value you have entered corresponds to Visual C++.");
            break;
        default:
            printf("The value you have entered does not correspond to any language or package currently available.");
            break;
    }

    return 0;

}