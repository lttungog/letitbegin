//
// Created by ADMIN on 8/29/2023.
//
#include <stdio.h>

void main() {

    begin:;
    int productcode;
    float orderamount, rate = 0.0;
    printf("\nPlease enter the product code: ");
    scanf("%d", &productcode);
    printf("\nPlease enter the order amount: ");
    scanf("%f", &orderamount);

    if (productcode == 1){
        if (orderamount >= 500)
            rate = 0.12;
        else if (orderamount >= 300)
            rate = 0.08;
        else
            rate = 0.02;
    }
    else if (productcode == 2){
        if (orderamount >= 2000)
            rate = 0.10;
        else if (orderamount >= 1500)
            rate = 0.05;
    }
    else if (productcode == 3){
        if (orderamount >= 5000)
            rate = 0.10;
        else if (orderamount >= 2500)
            rate = 0.05;
    }
    else {
        printf("\nThat is an invalid product code.");
        goto begin;
    }

    orderamount -= orderamount * rate;
    printf("\nThe net order amount is %0.2f", orderamount);
}