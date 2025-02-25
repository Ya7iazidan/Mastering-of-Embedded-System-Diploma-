/*
 * EX6.C
 *
 *  Created on: Feb 24, 2025
 *      Author: Yahia Zidan
 *      Description:C Program to Find Freq of Chra in String
 */
#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];    // Declare variables

	char ch;
	int i;
	int sum=0;
    // Get input string from user
	printf("Please Enter The String: ");
	fflush(stdout);
	gets(str);
    // Get character to search from user
	printf("Please Enter The Char to find Freq:");
	fflush(stdout);
	scanf("%c", &ch);
    // Loop through string until null terminator is found
	for(i = 0; str[i] != '\0'; ++i)
	    {
	        if(ch == str[i])
	            ++sum;
	    }
    // Display final result
	printf("Freq of %c = %d\n", ch, sum);
	    return 0;
}
