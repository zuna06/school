#include <stdio.h>
#include <math.h>

int main(){

	float a;
	float b;

	printf("Enter the length of side a: ");
	scanf("%f", &a);

	printf("Enter the length of side b: ");
	scanf("%f", &b);

	printf("\nThe length of the hypotenuse is %.3f.\n", sqrt(pow(a, 2) + pow(b, 2)));

	return 0;
}
