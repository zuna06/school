/*
*
*   Tanish Ambala
*   ECE 240 - C Programming for Engineerings
*   Homework assignment #3
*
*/

#include <stdio.h>

int main() {

    // initialize all variables

    float slope;
    float y_int;

    int x_coord1;
    int x_coord2;
    int x_coord3;
    int y_coord1;
    int y_coord2;

    // get user input

    printf("Enter 1st X coordinate: ");
    scanf("%d", &x_coord1);

    printf("Enter 1st Y coordinate: ");
    scanf("%d", &y_coord1);

    printf("Enter 2nd X coordinate: ");
    scanf("%d", &x_coord2);

    printf("Enter 2nd Y coordinate: ");
    scanf("%d", &y_coord2);

    // calculate slope and y-intercept

    slope = (float) (y_coord2 - y_coord1) / (float)(x_coord2 - x_coord1);

    y_int = y_coord1 - slope * x_coord1;

    printf("\nslope = %f\n", slope);
    printf("y-intercept = %f\n", y_int);

    printf("\nline equation: y = %fx + %f\n", slope, y_int);

    // use calculated equation to solve for 3rd point

    printf("\nEnter 3rd x coordinate: ");
    scanf("%d", &x_coord3);

    printf("\n3rd y coordinate = %f\n", slope * x_coord3 + y_int);

    return 0;
}