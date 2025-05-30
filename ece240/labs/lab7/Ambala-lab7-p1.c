#include <stdio.h>

#define SIZE 10

int main() {

	int array[SIZE];
	int temp1;
	int temp2;

	for(int i = 0; i < 10; i++){
		printf("Enter an integer value: ");
		scanf("%d", &array[i]);
	}

	printf("\nArray before rotation: ");
	for(int i = 0; i < 10; i++){
		printf("%d", array[i]);
	}

	for(int i = 0; i < 9; i++){
		if(i == 0){
			temp1 = array[i];
			array[i] = array[9];
		} else {
			temp1 = temp2;
		}
		temp2 = array[i+1];
		array[i+1] = temp1;
	}

	printf("\nArray after rotation: ");
	for(int i = 0; i < 10; i++){
		printf("%d", array[i]);
	}
	
	printf("\n");

	return 0;
}
