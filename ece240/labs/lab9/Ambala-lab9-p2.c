#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST_SIZE 100
#define LENGTH 35

int main() {

    // init variables and open file
    int count = 0;
    char names[MAX_LIST_SIZE][LENGTH];
    FILE *file = fopen("inputfile.txt", "r");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return -1;
    }

    // read from file and count names
    // while loop makes sure the list doesn't exceed 100 names
    while (count < MAX_LIST_SIZE && fgets(names[count], LENGTH, file)) {
        count++;
    }
    // close file after reading
    fclose(file);

    // print names from last index to first 
    printf("The list of names in reverse order:\n\n");
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", names[i]);
    }

    return 0;
}