//
// Created by ADMIN on 8/29/2023.
//
#include <stdio.h>
main(){

    int basic;
    printf("\nPlease enter your basic: ");
    scanf("%d", &basic);

    switch(basic) {
        case 200:
            printf("\nBonus is doller %d\n", 50);
            break;
        case 300:
            printf("\nBonus is doller %d\n", 125);
            break;
        case 400:
            printf("\nBonus is doller %d\n", 140);
            break;
        case 500:
            printf("\nBonus is doller %d\n", 175);
        default:
            printf("\nInvalid entry");
            break;
    }

}