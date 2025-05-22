/*
 * EX3.c
 *
 * Created on: May 22, 2025
 * Author: ENG. Yahia Zakaria
 * Description: C Program to Add Two Complex Numbers by Passing Structure to a Function
 */

#include <stdio.h>

/* Structure definition for complex numbers */
struct SComplex {
    float real;
    float imaginary;
};

/* Function to read complex number from user */
struct SComplex read_complex(const char prompt[]) {
    struct SComplex num;
    printf("%s\n", prompt);
    // Input format: two space-separated floating-point numbers
    printf("Enter real and imaginary parts respectively: ");
    fflush(stdout);
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}

/* Function to add two complex numbers */
struct SComplex add_complex(struct SComplex a, struct SComplex b) {
    struct SComplex result;

    result.real = a.real + b.real;

    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

/* Function to display complex number in a+bi format */
void print_complex(struct SComplex num) {
    // Format specification: one decimal place for both components
    printf("Sum = %.1f + %.1fi\n", num.real, num.imaginary);
}


int main() {
    struct SComplex num1, num2, sum;

    // Get first complex number
    num1 = read_complex("For 1st complex number:");

    // Get second complex number
    num2 = read_complex("For 2nd complex number:");

    // Calculate sum of complex numbers
    sum = add_complex(num1, num2);

    // Display result
    print_complex(sum);

    return 0;
}
