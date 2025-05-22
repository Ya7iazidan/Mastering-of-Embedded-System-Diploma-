/*
 * QUIZ6.c
 *
 *  Created on: Apr 5, 2025
 *      Author: Yahia Zidan
 *      Description: C Program to Clear a Specified Bit In a Given Number
 */
#include <stdio.h>

// Function to clear the bit at position 'bits' in the integer 'n'
int Clear_Specified_Bit(int n, int bits){
    return n &= ~(1 << bits);
}

int main() {
    int n, bits;
    int Result;

    // Prompt user to input a decimal number
    printf("Enter The Number Decimal: ");
    fflush(stdout);
    scanf("%d", &n);

    // Prompt user to input the bit position to clear
    printf("Enter The Position of Bits: ");
    fflush(stdout);
    scanf("%d", &bits);

    // Call function to clear the specified bit and store the result
    Result = Clear_Specified_Bit(n, bits);

    // Display the final result
    printf("The Result: %d", Result);

    return 0;
}
