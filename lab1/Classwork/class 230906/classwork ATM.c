//
// Created by ADMIN on 9/6/2023.
//
#include <stdio.h>

int main() {

    double amount, balance;
    balance = 200000;

    printf("Please enter the amount you would like to take: ");
    scanf("%lf", &amount);

    if (amount <= balance) {
        if ((int) amount % 50000 == 0) {
            printf("\nPlease receive the money.");
            balance = balance - amount;
            printf("\nYour new balance is: %0.2f", balance);
        }
    }
    else
        printf("\nThe amount you have entered is invalid.");

    return 0;

}