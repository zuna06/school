/*
 * Tanish Ambala
 * Lecture 3
 * Potential Energy Program
 *
 */

#include <stdio.h>

int main(void) {
	
	// potential energy of an object
	// U = mgh
	const float GRAVITY = 9.81f;
	float mass, height, potential;
	
	printf("Enter object mass: ");
	scanf("%f", &mass);
	printf("Enter object height: ");
	scanf("%f", &height);

	potential = (mass * GRAVITY * height);

	printf("Potential Energy = %.2f", potential);

	return 0;
}
