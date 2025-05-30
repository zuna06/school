#include <stdio.h>
#include <stdlib.h>

#define LENGTH 15

int main() {

    char* str = (char*)malloc(sizeof(char) * LENGTH);

    str = "Hello World!\n";

    printf("%s\n", str);

    return 0;
}