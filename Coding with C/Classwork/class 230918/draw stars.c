//
// Created by ADMIN on 9/18/2023.
//
#include <stdio.h>

void draw_rec (int s);

int main() {

    int size;
    printf("\nCanh co 3 ngoi sao.\n");
    draw_rec(3);

    printf("\nMot doan code khac....\n");
    draw_rec(5);

    printf("\nBan muon co bao nhieu ngoi sao o canh? \n");
    scanf("%d", &size);
    draw_rec(size);

    return 0;

}

void draw_rec(int s) {

    printf("\nVe hinh vuong moi nao ;) : \n");
    for (int i = 0; i < s; ++i) {
        printf("\n");
        for (int j = 0; j < s; ++j)
            printf("*");
    }

    printf("\nDONE! \n");

}