/*
 *
 * ECE 240
 * Lab 2 Part 1
 * Tanish Ambala
 *
 * */

#include <stdio.h>

int main() {

	int num1;
	int num2;

	printf("Enter an integer value: ");
	scanf("%d", &num1);
	
	printf("Enter another integer value: ");
	scanf("%d", &num2);

	printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);

	return 0;
}
