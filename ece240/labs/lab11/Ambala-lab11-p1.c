#include <stdio.h>

//consts
#define SIZE 20

typedef struct example {
    char name[20];
    int number;
    float value;
} example_t;

void print_struct(example_t* ex_struct){
    printf("\nName: %s\n", ex_struct->name);
    printf("Number: %d\n", ex_struct->number);
    printf("Value: %.2f\n", ex_struct->value);
}


int main() {

    // init/def structs
    example_t first = {"Example One", 1, 123.45};
    example_t second = {"Example Two", 2, 246.80};
    example_t third;

    printf("Enter a name: ");
    scanf("%20s", &third.name);

    printf("Enter a number (integer): ");
    scanf("%d", &third.number);

    printf("Enter a value (float): ");
    scanf("%f", &third.value);

    print_struct(&first);
    print_struct(&second);
    print_struct(&third);

    return 0;
}