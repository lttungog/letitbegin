//
// Created by ADMIN on 9/6/2023.
//

// ECHO PROGRAM
// A program to accept input data from the console and print it on the screen
//End of input data is indicated by pressing (Ctrl + F2)

#include <stdio.h>

int main() {

    char ch;
    while ((ch = getchar()) != EOF){
        putchar(ch);
    }

}