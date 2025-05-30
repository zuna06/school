/*
*
* Tanish Ambala
* ECE 240 - C Programming for Engineers
* Homework assignment #8
* 
*/

#include <stdio.h>

// define consts
#define MAX_FILE_SIZE 100

int main() {

    // init and define vars;
    int count = 0;
    int sum = 0;
    double avg = 0;
    int file_data[MAX_FILE_SIZE];
    FILE *input_file = fopen("inputfile.dat", "r");
    FILE *output_file;

    if(input_file == NULL) {
        printf("Error. Unable to open file.\n");
        return -1;
    }

    while(fscanf(input_file, "%d", &file_data[count]) == 1) {
        if(count >= MAX_FILE_SIZE) {
            printf("File exceeds maximum allowable size.\n");
            fclose(input_file);
            return -1;
        }
        count++;
    }

    fclose(input_file);

    for(int i = 0; i < count; i++) {
        sum += file_data[i];
    }

    avg = (double) sum / count;

    output_file = fopen("outputfile.dat", "w");

    if(output_file == NULL) {
        printf("Error. Unable to open file.\n");
        return -1;
    }

    // write nums in rev order to out file
    for (int i = count - 1; i >= 0; i--) {
        fprintf(output_file, "%d\n", file_data[i]);
    }

    // empty line
    fprintf(output_file, "\n");

    // write calculated data to out file
    fprintf(output_file, "The number of integer values in the list is %d.\n", count);
    fprintf(output_file, "The sum of the values in the list is %d.\n", sum);
    fprintf(output_file, "The average of the values in the list is %.3f.\n", avg);

    return 0;
}