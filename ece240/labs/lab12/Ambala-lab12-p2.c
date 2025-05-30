#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {

    int* intArray = (int*)malloc(sizeof(int) * SIZE);

    intArray[0] = 98;
    intArray[1] = 97;
    intArray[2] = 96;
    intArray[3] = 95;
    intArray[4] = 94;

    for(int i = 0; i < SIZE; i++) {
        printf("intArray[%d] = %d\n", i, intArray[i]);
    }

    return 0;

}