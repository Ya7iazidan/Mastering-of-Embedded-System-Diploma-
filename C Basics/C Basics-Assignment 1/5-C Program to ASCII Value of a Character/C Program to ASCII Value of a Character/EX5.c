/*
 * EX5.c
 *
 *  Created on: Feb 8, 2025
 *      Author: Yahia Zakaria
 */


#include <stdio.h>

int main()
{
    char ch;


    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c", &ch);


    printf("The ASCII value of '%c' is: %d\n", ch, ch);

    return 0;
}
