//
// Created by ADMIN on 8/28/2023.
//
#include <stdio.h>

void main(){

    char c;
    printf("Please enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
        printf("Lowercase character = %c", c + 'a' - 'A'); // 'c' trong truong hop nhap B = 66, 'a' = 97, 'A' = 65 -> 66 + 97 - 65 = 98 == 'b'
    else
        printf("Character Entered = %c", c);

}