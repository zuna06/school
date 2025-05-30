#include <stdio.h>

int main(){
	
	int time_input;
	int hours;
	int minutes;
	int seconds;

	printf("Enter total time (in seconds): ");
	scanf("%d", &time_input);

	hours = time_input / 3600;
	minutes = (time_input - (hours * 3600)) / 60;
	seconds = (time_input - (hours * 3600) - (minutes * 60));

	printf("\nThe equivalent time is %d hours, %d minutes, and %d seconds.\n", hours, minutes, seconds);

	return 0;

}
