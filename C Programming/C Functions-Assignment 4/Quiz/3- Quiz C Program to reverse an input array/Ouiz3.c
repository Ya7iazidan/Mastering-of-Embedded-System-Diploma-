/*
 * Quiz3.c
 *
 *  Created on: Mar 16, 2025
 *      Author: Yahia Zidan
 *      Description: C Program to reverse an input array
 */

#include <stdio.h>

void Reverse_funct(int arr[], int size) {
    int temp, i;
    // Reverse the array by swapping elements
    for(i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int Size_of_array, i;
    int Array[50];

    // Get array size input
    printf("Enter the size of array (1 to 50): ");
    fflush(stdout);
    scanf("%d", &Size_of_array);

    // Validate input
    if(Size_of_array < 1 || Size_of_array > 50) {
        printf("Invalid input! Number must be between 1 and 50.");
        return 1;
    }

    // Get array elements
    printf("Enter %d elements:\n", Size_of_array);
    for(i = 0; i < Size_of_array; i++) {
        printf("Element %d: ", i+1);
        fflush(stdout);
        scanf("%d", &Array[i]);
    }

    // Print original array
    printf("\nOriginal array: ");
    for(i = 0; i < Size_of_array; i++) {
        printf("%d ", Array[i]);
    }

    // Reverse the array
    Reverse_funct(Array, Size_of_array);

    // Print reversed array
    printf("\nReversed array: ");
    for(i = 0; i < Size_of_array; i++) {
        printf("%d ", Array[i]);
    }

    return 0;
}
