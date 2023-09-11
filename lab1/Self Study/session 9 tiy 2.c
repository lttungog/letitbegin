//
// Created by ADMIN on 9/11/2023.
//
#include <stdio.h>

int main() {

    int num1, num2, sum;
    label1:
    printf("\nPlease enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2){
        while (num1 <= num2){
            if(num1 % 2 != 0)
                sum = sum + num1;
            num1++;
        }
        printf("\nSum of odd Numbers in Given range is: %d", sum);

    }
    else if (num1 > num2){
        while (num2 <= num1){
            if(num2 % 2 != 0)
                sum = sum + num2;
            num2++;
        }
        printf("\nSum of odd Numbers in Given range is: %d", sum);
    }
    else {
        printf("\nPlease enter two different numbers!");
        goto label1;
    }



}