/*
 * EX8.c
 *
 *  Created on: Feb 25, 2025
 *      Author: Yahia Zakaria
 *      Description:C Program Reveres String
 */

#include <stdio.h>
#include <string.h>

int main()
{

	char str[100];
	int i,j;
	// Get input string safely
	printf("Please Enter The String: ");
	fflush(stdout);
	gets(str);
	// Reverse the string

	for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("The String after reverse: %s", str);
	return 0;
}


