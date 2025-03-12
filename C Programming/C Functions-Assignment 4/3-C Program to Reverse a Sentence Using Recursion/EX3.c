/*
 * EX3.c
 *
 *  Created on: Mar 12, 2025
 *      Author: Yahia Zidan
 *      Description: C Program to Reverse a Sentence Using Recursion
 */

#include <stdio.h>

void Reverse()
{
	char c;
	fflush(stdout);
	scanf("%c",&c);
	if(c != '\n'){
		Reverse();
		printf("%c", c);
	}
}
int main(){
	printf("Enter Sentence: ");
	Reverse();

	return 0;
}
