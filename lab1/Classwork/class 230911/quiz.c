//
// Created by ADMIN on 9/11/2023.
//
#include <stdio.h>

int main() {

    int user, pass;
    printf("Please enter your username: ");
    scanf("%d", &user);
    printf("\nPlease enter your password: ");
    scanf("%d", &pass);

    if (user == 123 && pass == 456) {
        printf("\nThe menu currently available is as follows:");
        printf("\nPress 1 for Coffee.");
        printf("\nPress 2 for Milk Tea.");
        printf("\nPress 3 for Green Tea.");
        printf("\nPress any other number for Lavie.");
        printf("\nPlease enter a drink of your selection: ");
        int select;
        scanf("%d", &select);
        switch (select) {
            case 1:
                printf("\nThe drink you have chosen is Coffee.");
                break;
            case 2:
                printf("\nThe drink you have chosen is Milk Tea.");
                break;
            case 3:
                printf("\nThe drink you have chosen is  Green Tea.");
                break;
            default:
                printf("\nThe drink you have chosen is Mineral Water Lavie.");
                break;
        }
    }
    else
        printf("\nThe username or password is incorrect.");

    return 0;

}