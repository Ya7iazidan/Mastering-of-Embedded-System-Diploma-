/*
 * Ex6.c
 *
 *  Created on: May 5, 2025
 *      Author: Eng.Yahia Zakaria
 *      Description: C Function to Return Unique Number in Array With One Loop
 */
#include <stdio.h>

int findUnique(int arr[], int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= arr[i]; // XOR cancels duplicates
    }
    return unique;
}

int main() {
    int arr[] = {4,2,5,2,5,7,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Unique number: %d", findUnique(arr, size));
    return 0;
}

