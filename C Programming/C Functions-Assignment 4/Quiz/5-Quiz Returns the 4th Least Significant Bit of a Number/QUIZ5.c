/*
 * QUIZ5.c
 *
 *  Created on: Mar 16, 2025
 *      Author: Yahia Zidan
 *      Description: Returns the 4th least significant bit of a number
 */

#include <stdio.h>

int get_4th_lsb(int num) {
    return (num >> 3) & 1;
}

int main() {
    int num;
    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &num);
    printf("The 4th LSB is: %d\n", get_4th_lsb(num));
    return 0;
}
