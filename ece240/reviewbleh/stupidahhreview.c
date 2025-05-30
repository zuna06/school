#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *somefile;
    int num;

    somefile = fopen("filename.txt", "w");

    if (somefile == NULL) return -1;
    
    fprintf(somefile, "entering this string: %s", "text");

    fscanf(somefile, "%d", &num);


    // fread and fwrite for binary files only

    fclose(somefile);

    return 0;
}