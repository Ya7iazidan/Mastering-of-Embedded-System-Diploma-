/*
 * Ex10.c
 *
 *  Created on: May 5, 2025
 *      Author: Eng.Yahia Zakaria
 *      Description:C Function to Count the Max Number of Ones Between Two Zeros
 */


#include <stdio.h>

// Function to find the maximum number of 1s between two 0s
int maxOnesBetweenZeros(int num) {
    int maxCount = 0;
    int count = 0;
    int started = 0; // flag to check if we have seen the first 0

    while (num > 0) {
        int bit = num & 1;

        if (bit == 0) {
            if (started) {
                if (count > maxCount)
                    maxCount = count;
            }
            count = 0; // reset count after second 0
            started = 1; // first zero seen
        } else if (started) {
            count++; // count 1s only after first 0
        }

        num >>= 1;
    }

    return maxCount;
}

int main() {

    int test = 110;  // binary: 01101110
    printf("Test : %d\n", maxOnesBetweenZeros(test));

    return 0;
}
