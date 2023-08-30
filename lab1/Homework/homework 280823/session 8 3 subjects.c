//
// Created by ADMIN on 8/30/2023.
//
#include <stdio.h>

int main() {

    int m1, m2, m3, per;
    printf("Please enter your 3 grades: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    per = (m1 + m2 + m3) / 3;

    if (per < 50)
        printf("You have failed.");
    else if (per >= 50 && per < 60)
        printf("Your grade is E.");
    else if (per >= 60 && per < 70)
        printf("Your grade is E+.");
    else if (per >= 70 && per < 80)
        printf("Your grade is B.");
    else if (per >= 80 && per < 90)
        printf("Your grade is A.");
    else
        printf("Your grade is A+");

    return 0;

}