#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int x, y;

    printf("Enter an integer value for variable x: ");
    scanf("%d", &x);

    printf("Enter an integer value for variable y: ");
    scanf("%d", &y);

    printf("Before the swap function is called: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After the swap function is called: x = %d, y = %d\ncl", x, y);

    return 0;
}