#include <stdio.h>

// def rect struct
typedef struct rect {
    float length;
    float width;
    float perimeter;
} rect_t;

// get rect data from user
void GetRectangle(rect_t* r) {
    printf("Enter the length and width of a rectangle.");
    printf("\nLength: ");
    scanf("%f", &r->length);
    printf("Width: ");
    scanf("%f", &r->width);
    //r->perimeter = 0;
}

// calc rect perimeter
void CalcPerimeter(rect_t* r) {
    r->perimeter = 2 * r->length + 2 * r->width;
}

// formatted output for rect data
void PrintRectangle(rect_t* r) {
    printf("The perimter of a rectangle with length %.1f and width %.1f is %.1f\n", r->length, r->width, r->perimeter);
}

int main() {

    // init struct
    rect_t rectangle;

    GetRectangle(&rectangle);
    CalcPerimeter(&rectangle);
    PrintRectangle(&rectangle);

    return 0;
}