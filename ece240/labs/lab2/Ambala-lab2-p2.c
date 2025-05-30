/*
 *
 * ECE 240
 * Lab 2 Part 2
 * Tanish Ambala
 *
 * */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char char1;
	char char2;
	char char3;
	char char4;

	printf("Enter a character: ");
	scanf("%c", &char1);

	printf("Enter two characters: ");
	scanf(" %c %c", &char2, &char3);

	printf("Enter another character: ");
	scanf(" %c", &char4);

	printf("The first two letters are %c and %c.\n", char1, char2);
	printf("The last two letters are %c and %c.\n", char3, char4);

	return 0;
}
