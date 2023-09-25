//
// Created by ADMIN on 9/12/2023.
//
#include <stdio.h>

int main() {

    int a, b, c;
    printf("Please enter the number you would like to try: ");
    scanf("%d", &a);
    printf("\n");

    for (b = 0, c = a; b <= a; b++) {
        printf("\n%d * %d = %d", b, c, b * c);
    }

}