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
        printf("\nName %d: ", n+1);
        scanf("%s", x[n]);
    } while (strcmp(x[n++], "END"));

    n = n - 1;

    for (item = 0; item < n-1; ++item) {
        for(i = item + 1; i < n; ++i) {
            if (strcmp (x[item], x[i]) > 0) {
                strcpy(temp, x[item]);
                strcpy(x[item], x[i]);
                strcpy(x[i], temp);
            }
        }
    }

    printf("\nRecorded list of Names: \n");
    for (i = 0; i < n; ++i) {
        printf("\nStudent Name %d is %s", i+1, x[i]);
    }

    return 0;

}