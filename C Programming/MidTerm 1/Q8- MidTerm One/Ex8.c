/*
 * Ex8.c
 *
 *  Created on: May 5, 2025
 *      Author: Eng.Yahia Zakaria
 *      Description: C Function to Take an Array and Reveres its Elements
 */
#include <stdio.h>

// Function to reverse the elements of an array
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        // Swap elements at positions i and (size - 1 - i)
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);

    reverseArray(a, size); // Reverse the array

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

