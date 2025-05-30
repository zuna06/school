/*
*
* Tanish Ambala
* ECE 240 - C Programming for Engineers
* Homework assignment #7
* 
*/

#include <stdio.h>

#define MIN_SIZE 2
#define MAX_SIZE 100

void display_menu() {
    printf("\nSelect an operation to perform on the list:\n");
    printf("\t0 - Enter a list of floating point numbers.\n");
    printf("\t1 - Calculate the average of the numbers in the list.\n");
    printf("\t2 - Find the smallest number in the list.\n");
    printf("\t3 - Find the largest number in the list.\n");
    printf("\t4 - Calculate the deviation of each number from the average.\n");
    printf("\t5 - Exit the program.\n");
}


void list_gen(float* float_list, int *size) {
    while(*size < (MIN_SIZE) || *size > MAX_SIZE) {
        printf("How mant values are in the list? ");
        scanf("%d", size);
        if(*size < MIN_SIZE || *size > MAX_SIZE) {printf("\nInvalid value.\n");}
    }
    for(int i = 0; i < *size; i++) {
        printf("Enter value number %d: ", i);
        scanf("%f", &float_list[i]);
    }
    printf("The values that were entered are:\n");
    for(int i = 0; i < *size; i++) {
        printf("x[%d] = %.2f", i, float_list[i]);
    }
}

float get_average(float* float_list, int size) {
    float sum = 0;
    for(int i = 0; i < size; i++) {
        sum += float_list[i];
    }
    printf("The average is %.2f.\n", (sum / (float) size));

    return (sum / (float) size);
}

void find_small(float* float_list, int size) {
    float smallest = float_list[0];
    for(int i = 1; i < size; i++) {
        smallest = (float_list[i] < smallest) ? float_list[i] : smallest; 
    }
    printf("The smallest number is %.2f\n", smallest);
}

void find_large(float* float_list, int size) {
    float largest = float_list[0];
    for(int i = 1; i < size; i++) {
        largest = (float_list[i] > largest) ? float_list[i] : largest; 
    }
    printf("The largest number is %.2f\n", largest);
}

void find_dev(float* float_list, int size, float average) {
    for (int i = 0; i < size; i++) {
        float dev = float_list[i] - average;
        printf("The deviation from the average for x[%d] is %.2f.\n", i, dev);
    }
}

int main() {

    // init general vars
    int size;
    int choice;
    float avg = 0;
    float fp_list[MAX_SIZE];

    // init bool vars
    int list_init = 0;
    int avg_calculated = 0;

    // run until user chooses to exit
    while (choice != 5) {

        display_menu();
        printf("\nSelect: ");
        scanf("%d", &choice);

        // check if list was init or not
        if (!list_init && choice != 0 && choice != 5){
            printf("You must enter the list first (option 0).\n");
        } else {
            // switch through choices
            switch (choice) {
                case 0:
                    list_gen(fp_list, &size);
                    list_init = 1;
                    break;
                case 1:
                    avg = get_average(fp_list, size);
                    avg_calculated = 1;
                    break;
                case 2:
                    find_small(fp_list, size);
                    break;
                case 3:
                    find_large(fp_list, size);
                    break;
                case 4:
                    // check if the average was calculated or not
                    if(!avg_calculated) {
                        printf("Average must be calculated first.\n");
                    } else {
                        find_dev(fp_list, size, avg);
                    }
                    break;
                case 5:
                    printf("\nHave a nice day.\n");
                    break;
                default:
                    printf("I\nInvalid selection. Please choose 0-5.\n");
                    break;
            }
        }
    }
    
    return 0;
}