//
// Created by ADMIN on 8/30/2023.
//
#include <stdio.h>

int main() {

    int marks;
    printf("\nPlease enter your marks: ");
    scanf("%d", &marks);

    if (marks < 35){
        printf("\nYour grade is E.");
    }
    else if (marks > 35 && marks <= 45) {
        printf("\nYour grade is D.");
    }
    else if (marks > 45 && marks <= 60) {
        printf("\nYour grade is C.");
    }
    else if (marks > 60 && marks <= 75) {
        printf("\nYour grade is B.");
    }
    else
        printf("Your grade is A.");

    return 0;

}