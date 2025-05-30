#include <stdio.h>

int main() {

	int numArr[4];
	int greatestVal = 0;
	
	// read numbers into array
	printf("Enter four integer values: ");
	scanf("%d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3]);

	// loop through array and check against greatestVal
	for(int i = 0; i < 4; i++) {
		if (numArr[i] > greatestVal) {
			greatestVal = numArr[i];
		} else {
			continue;
		}
	}
	
	printf("\nThe largest value is %d.\n", greatestVal);

	return 0;
}
