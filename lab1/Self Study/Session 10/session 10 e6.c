//
// Created by ADMIN on 9/12/2023.
//
#include <stdio.h>

int main() {

    int cnt;
    for (cnt = 1; cnt <= 10; cnt++){
        if (cnt == 5)
            continue;
        printf("%d\t", cnt);
    }

    return 0;
}