//
// Created by ADMIN on 9/14/2023.
//
#include <stdio.h>
#include <string.h>

void main() {

    int i, n = 0;
    int item;
    char x[10][12];
    char temp[12];

    printf("Enter each string on a separate line \n\n");
    printf("Type 'END' when over \n\n");

    do {
        printf("\nString %d: ", n+1);
        scanf("%s", x[n]);
    } while (strcmp(x[n++], "END"));
    // reorder the list on strings

    n = n - 1; // n = 4 - 1 = 3

    for (item = 0; item < n-1; ++item) { // item = 0
        // find lowest of remaining strings
        for(i = item + 1; i < n; ++i) { // i = 1
            if (strcmp (x[item], x[i]) > 0) { // x[0], x[1] == compare "has" va "seen"???
                // interchange two strings
                strcpy(temp, x[item]);
                strcpy(x[item], x[i]);
                strcpy(x[i], temp);
            }
        }
    }

    // Display the arrange list of strings

    printf("\nRecorded list of strings: \n");
    for (i = 0; i < n; ++i) {
        printf("\nString %d is %s", i+1, x[i]);
    }

}