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

    printf("1. Nau Da");
    printf("\n2. Den Da");
    printf("\n3. Bac Siu");
    printf("\n4. Latte");
    printf("\n5. Cappuccino");

}

void menuFruits() {

    printf("1. Ep Cam");
    printf("\n2. Ep Chanh");
    printf("\n3. Ep Chanh Leo");
    printf("\n4. Ep Dua Hau");
    printf("\n5. Ep Oi");

}