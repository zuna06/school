#include <stdio.h>
#include <stdlib.h>

// define constant
#define LENGTH 35

int main() {

    // init variables
    char name[LENGTH];
    int g_number;
    float gpa;
    FILE *file;

    // get user input
    printf("Enter your first and last name (<35 characters): ");
    fgets(name, LENGTH, stdin);

    printf("Enter your G-number: ");
    scanf("%d", &g_number);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    // open file
    file = fopen("outputfile.txt", "w");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return -1;
    }

    // write user data to file
    fprintf(file, "%s%d\n%.2f\n", name, g_number, gpa);

    fclose(file);
    return 0;
}