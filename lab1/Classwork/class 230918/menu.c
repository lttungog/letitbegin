//
// Created by ADMIN on 9/18/2023.
//
#include <stdio.h>

void menuCoffee();
void menuFruits();

int main() {

    printf("Our menu currently has the following items: \n");
    printf("MENU\n\n");
    printf("COFFEE\n");
    menuCoffee();
    printf("\n\nFRUITS\n");
    menuFruits();

    return 0;

}

void menuCoffee() {

    printf("1. Nau Da        35000vnd");
    printf("\n2. Den Da        35000vnd");
    printf("\n3. Bac Siu       40000vnd");
    printf("\n4. Latte         45000vnd");
    printf("\n5. Cappuccino    50000vnd");
    printf("\n6. Quit          ")

}

void menuFruits() {

    printf("1. Ep Cam         50000vnd");
    printf("\n2. Ep Chanh       40000vnd");
    printf("\n3. Ep Chanh Leo   45000vnd");
    printf("\n4. Ep Dua Hau     35000vnd");
    printf("\n5. Ep Oi          45000vnd");

}