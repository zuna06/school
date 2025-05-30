#include <stdio.h>

#define SIZE 10

void update(int *arr, int num) {
    for(int i = 0; i < num; i++) {
        if(arr[i] % 2 == 0) {
            arr[i] += 1;
        } else {
            arr[i] += 2;
        }
    }
}

void print_arr(int* arr) {
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {

    int num_arr[SIZE];

    for(int i = 0; i < SIZE; i++) {
        printf("Enter an integer value for array element %d: ", i);
        scanf("%d", &num_arr[i]);
    }

    printf("\nBefore the Update function is called:");
    printf("The array values are:   ");
    print_arr(num_arr);

    update(num_arr, SIZE);

    printf("\n\nAfter the Update function is called:");
    printf("The array values are:   ");
    print_arr(num_arr);
    printf("\n");
    
    return 0;
}