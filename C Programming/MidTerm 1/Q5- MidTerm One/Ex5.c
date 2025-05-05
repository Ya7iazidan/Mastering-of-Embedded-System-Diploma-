/*
 * EX5.c
 *
 *      Author: Eng.Yahia Zakaria
 *      Description:C Function to Count Number of Ones in Binary Number
 */


#include <stdio.h>

int count_ones(int num) {
	int count = 0;
	while (num) {
		num &= num - 1; // Remove the least significant 1
		count++;
	}
	return count;
}

int main() {
	int num;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("Number of ones: %d\n", count_ones(num));
	return 0;
}
