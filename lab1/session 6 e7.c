//
// Created by ADMIN on 8/28/2023.
//
#include <stdio.h>

void main() {

    int a;
    float d;
    char ch, name[40];
    printf("Please enter the data\n");
    scanf("%d %f %c %s", &a, &d, &ch, name);
    printf("\nThe values accepted are : %d, %f, \n%c, %s", a, d, ch, name);

}