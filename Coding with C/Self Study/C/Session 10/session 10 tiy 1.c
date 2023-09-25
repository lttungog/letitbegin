//
// Created by ADMIN on 9/12/2023.
//
#include <stdio.h>

int main() {

    int age;
    char name[20];

    printf("Please enter your name: ");
    scanf("%[^\n]", name);
    fflush(stdin);
    printf("\nPlease enter your age: ");
    scanf("%d", &age);

    for (age == 1; age > 0; age--) {
        printf("\n%s", name);
    }

}