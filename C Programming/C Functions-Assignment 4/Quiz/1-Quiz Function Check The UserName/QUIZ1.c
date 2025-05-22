/*
 * EX1.c
 *
 *  Created on: Mar 15, 2025
 *      Author: Yahia Zidan
 *      Description: C Program to Check The UserName is Same || !Same.
 */

#include <stdio.h>
#include <string.h>

int compare(char A[], char B[]) {
    int i = 0;
    while (A[i] == B[i]) {
        if (A[i] == '\0') {
            return 1; // Both strings ended and are equal
        }
        i++;
    }
    return 0; // Strings are not equal
}

int main() {
    char A[50] = "Yahia Zakaria";
    char B[50];

    printf("Please Enter The UserName: ");
    fflush(stdout);
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = '\0';

    printf("The UserName: %s\n", A);

    if (compare(A, B) == 1) {
        printf("The UserName is true\n");
    } else {
        printf("The UserName is false\n");
    }

    return 0;
}
