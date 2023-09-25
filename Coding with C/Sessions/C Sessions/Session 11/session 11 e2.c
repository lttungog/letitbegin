//
// Created by ADMIN on 9/14/2023.
//
#include <stdio.h>

void main() {

    int ary[10];
    int i, total, high;

    for (i = 0; i < 10; i++) {
        printf("\nEnter value: %d: ", i+1);
        scanf("%d", &ary[i]);
    }
    // From the above code we will get values for the variables from the array ([0] - [9])

    // Displays highest of the entered values

    high = ary[0];

    for (i = 1; i < 10; i++) {
        if(ary[i] > high)
            high = ary[i]; //high is replaced for the next loop until it reaches the highest variable ary[9]
    }
    printf("\nHighest value entered was %d", high);

    // Prints average of values entered for ary[10]

    for (i = 0, total = 0; i < 10; i++)
        total = total + ary[i];
    printf("\nThe average of the elements of ary is %d", total/i);
}