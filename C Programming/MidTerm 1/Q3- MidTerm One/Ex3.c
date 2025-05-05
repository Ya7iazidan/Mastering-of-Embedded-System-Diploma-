/*
 * Ex3.c
 *
 *  Created on: May 3, 2025
  *      Author: Yahia Zakaria
 *      Description:C Program Prime Number Two Intervals by use Function
 */


#include <stdio.h>

int checkNumPrime(int num) {

    if (num <= 0) return 0;
    if (num == 2) return 1;  // Only even prime
    if (num % 2 == 0) return 0;  // Reject even numbers

    // Check odd divisors up to square root
    for (int i = 3; i*i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num_1, num_2, temp;

    //Input numbers (interval)
    printf("Enter two positive numbers (interval): ");
    fflush(stdout);
    scanf("%d %d", &num_1, &num_2);

    // Swap if numbers are reversed
    if (num_1 > num_2) {
        temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }

    printf("Prime numbers between %d and %d:\n", num_1, num_2);

    //Prime number generation
    for (int i = num_1; i <= num_2; i++) {
        if (checkNumPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
