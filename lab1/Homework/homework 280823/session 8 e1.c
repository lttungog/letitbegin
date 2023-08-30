//
// Created by ADMIN on 8/30/2023.
//
#include <stdio.h>

int main() {

    float com = 0, sales_amt;
    printf("Enter the Sales Amount: ");
    scanf("%f", &sales_amt);

    if (sales_amt >= 10000)
        com = sales_amt * 0.1;

    printf("\nCommision = %0.2f", com);

}