/*
 * Ex7.c
 *
 *  Created on: May 5, 2025
 *      Author: Eng.Yahia Zakaria
 *      Description: C Function to Sum Numbers From 1 to 100 (Without Loop)
 */

#include <stdio.h>

int FunSum(int n) {
    int sum = n * (n + 1) / 2;
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    fflush(stdout);
    scanf("%d", &n);
    int result = FunSum(n);
    printf("The Result is: %d", result);
    return 0;
}
