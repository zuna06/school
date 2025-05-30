#include <stdio.h>

int main() {

	int month;
	int days = 0;

	// get user input
	printf("Enter a month (1 - 12): ");
	scanf("%d", &month);
	
	// assigns day based on month
	switch (month) {
		case 1:
			days = 31;
			break;
		case 2:
			days = 28;
			break;	
		case 3:
			days = 31;
			break;
		case 4:
			days = 30;
			break;
		case 5:
			days = 31;
			break;
		case 6:
			days = 30;
			break;
		case 7:
			days = 31;
			break;
		case 8: 
			days = 31;
			break;
		case 9:
			days = 30;
			break;
		case 10:
			days = 31;
			break;
		case 11:
			days = 30;
			break;
		case 12:
			days = 31;
			break;
		default:
			days = 0;
	}

	// checks if month is out of bounds
	if (days != 0) {
		printf("The specified month has %d days.\n", days);
	} else {
		printf("Sorry. Not a valid month.\n");
	}

	return 0;
}
