//
// Created by ADMIN on 9/11/2023.
//
#include <stdio.h>

int main() {

    int num;
    printf("The numbers that can be divided by 5 from 100 to 0 are: \n\n");
    for (num = 100; num != 0; num -= 5){
        printf("%d\n", num);
    }


}