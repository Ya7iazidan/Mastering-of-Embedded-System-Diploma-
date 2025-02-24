/*
 * EX2.c
 *
 *  Created on: Feb 9, 2025
 *      Author: Yahia Zakaria
 *      Description: C Program Check the Vocabulary is Vowel or Consonant
 */


#include "stdio.h"

int main()
{
	char ch;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &ch);

	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){

		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
				ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			printf("%c the Vocabulary is Vowel\n", ch);
		    }
		else{
			printf("%c the Vocabulary is Consonant\n", ch);
            }

	}
	else {
		printf("%c That is not Vocabulary! \n", ch);
	}

	return 0;
}
