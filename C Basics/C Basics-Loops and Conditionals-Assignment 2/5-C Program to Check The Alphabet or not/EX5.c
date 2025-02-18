/*
 * EX5.c
 *
 *  Created on: Feb 9, 2025
 *      Author: Yahia Zidan
 *      Description: C Program to Check The Alphabet
 */
#include "stdio.h"

int main()
{
	char ch;

	printf("Pleas Enter The Alphabet : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &ch);

	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

		printf("The Entered is Alphabet.\n%c", ch);
	}
		else {
			printf("The Entered is NOT Alphabet.\n%c", ch);
		}

	return 0;
}
