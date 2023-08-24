//
// Created by ADMIN on 8/24/2023.
//

#include <stdio.h>

int main() {

    float r, pi, area, perimeter;
    printf("Please enter the radius of the circle: \n");
    scanf("%f", &r);
    pi = 3.14;
    area = pi * r * r;
    perimeter = 2 * pi * r;
    printf("The area of the circle is %0.2f.\n", area);
    printf("The perimeter of the circle is %0.2f.", perimeter);

    return 0;
}