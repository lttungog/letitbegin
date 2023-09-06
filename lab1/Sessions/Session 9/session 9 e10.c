//
// Created by ADMIN on 9/6/2023.
//

#include <stdio.h>

int main() {

    int x;
    char i, ans;
    i = ' ';

    do {
        x = 0;
        ans = 'y';
        fflush(stdin);
        printf("\nEnter sequence of character:");
        do {
            i = getchar();
            x++;
        }while (i != '\n');
        i = ' ';
        printf("\nNumber of characters entered is: %d", --x);
        printf("\nMore sequences (Y/N) ?");
        ans = getchar();
    }while (ans == 'Y' || ans == 'y');

}