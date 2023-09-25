//
// Created by ADMIN on 9/18/2023.
//
#include <stdio.h>

void drawSqr();
void drawRec();

int main() {

    printf("Draw a rectangle: \n");
    drawRec();
    printf("Draw a square: \n");
    drawSqr();

    return 0;
}

void drawSqr() {

    printf("************");
    printf("\n*          *");
    printf("\n*          *");
    printf("\n*          *");
    printf("\n************");
    printf("\n");

}


void drawRec() {

    printf("*****************");
    printf("\n*               *");
    printf("\n*               *");
    printf("\n*               *");
    printf("\n*****************");
    printf("\n");

}