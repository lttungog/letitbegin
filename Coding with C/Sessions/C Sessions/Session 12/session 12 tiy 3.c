//
// Created by ADMIN on 9/17/2023.
//
#include <stdio.h>

void main() {

    char txt[1000];
    int a, vowels, consonants;

    printf("Please enter a word: ");
    scanf("%[^\n]s", txt);

    // printf("The string you have entered is: %s", txt);
    // vowels = a, e, i, o, u

    a = 0;
    vowels = 0;
    consonants = 0;

    while(txt[a] != '\0') {
        if (txt[a] == 'a' || txt[a] == 'e' || txt[a] == 'i' || txt[a] == 'o' || txt[a] == 'u' || txt[a] == 'A' ||
            txt[a] == 'E' || txt[a] == 'I' || txt[a] == 'O' || txt[a] == 'U')
            vowels++;
        else
            consonants++;
        a++;
    }
    printf("\nThe number of vowels in the string is: %d", vowels);
    printf("\nThe number of consonants in the string is: %d", consonants);

    return 0;

}