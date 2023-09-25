//
// Created by ADMIN on 9/20/2023.
//
#include <stdio.h>

void menu();
void menuchoice(char x);
float cost(char x, int y);

int main() {

    char drink;
    int qtt;

    do {

        printf("\n");
        menu();
        printf("\n\nPlease enter which drink you would like: ");
        scanf("%c", &drink);

        if (drink != 'f') {
            printf("\nPlease enter the quantity: ");
            scanf("%d", &qtt);
            fflush(stdin);
            menuchoice(drink);
            float totalcost = cost (drink, qtt);
            printf("\nTotal cost = $%0.2f", totalcost);
        }
    } while (drink != 'f');

    return 0;

}

void menu() {

    printf("\n********* Coffee Shop Menu *********");
    printf("\n  a. Nau Da                 $2.50");
    printf("\n  b. Den Da                 $3.00");
    printf("\n  c. Bac Siu                $3.50");
    printf("\n  d. Latte                  $4.00");
    printf("\n  e. Cappuccino             $4.50");
    printf("\n  f. Quit          ");

}

void menuchoice(char x) {

    switch (x) {
        case 'a':
            printf("\nPlacing order: Nau Da.");
            break;
        case 'b':
            printf("\nPlacing order: Den Da.");
            break;
        case 'c':
            printf("\nPlacing oredr: Bac Siu.");
            break;
        case 'd':
            printf("\nPlacing order: Latte.");
            break;
        case 'e':
            printf("\nPlacing order: Cappuccino.");
            break;
        default:
            printf("\nPlease try again.");
            break;
    }

}

float cost(char x, int y) {

    float price;

    switch (x) {
        case 'a':
            price = 2.50;
            break;
        case 'b':
            price = 3.00;
            break;
        case 'c':
            price = 3.50;
            break;
        case 'd':
            price = 4.00;
            break;
        case 'e':
            price = 4.50;
            break;
        default:
            price = 0.00;
    }

    return price * y;

}