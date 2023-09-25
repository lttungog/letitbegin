//
// Created by ADMIN on 8/27/2023.
//

#include <stdio.h>

int main () {

    int s, m = 3, n = 5, r, t;
    float x = 3.0, y;

    t = n/m;
    printf("t = %d", t);
    r = n%m;
    printf("\nr = %d", r);
    y = n/m;
    printf("\ny = %f", y);
    t = x * y - m / 2;
    printf("\nt = %d", t);
    x = x * 2.0;
    printf("\nx = %f", x);
    s = (m+n) / r;
    printf("\ns = %d", s);
    y = --n;
    printf("\ny = %f", y);

    return 0;

}