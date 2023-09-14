//
// Created by ADMIN on 9/14/2023.
//
#include <stdio.h>
#include <string.h>

void main() {

    char txt[1000];
    int a, vowels;

    printf("Please enter a line of text: ");
    scanf("%[^\n]s", txt);

    // printf("The string you have entered is: %s", txt);
    // vowels = a, e, i, o, u

    a = 0;
    vowels = 0;

    while(txt[a] != '\0') {
        if (txt[a] == 'a' || txt[a] == 'e' || txt[a] == 'i' || txt[a] == 'o' || txt[a] == 'u' || txt[a] == 'A' ||
        txt[a] == 'E' || txt[a] == 'I' || txt[a] == 'O' || txt[a] == 'U')
            vowels++;
        a++;
    }
    printf("\nThe number of vowels in the string is: %d", vowels);

    return 0;

}