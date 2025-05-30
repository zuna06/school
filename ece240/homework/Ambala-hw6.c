/*
*
*   Tanish Ambala
*   ECE 240 - C Programming for Engineerings
*   Homework Assignment #6
*
*/

#include <stdio.h>
#include <math.h>

#define G 32.174 // gravity in ft/sec^2

// 1 mile = 5280 feet

void simulate_fall(double h) {
    // init simulation data
    double time = 0; // total time
    double speed = 0; // current speed
    double height = h; // initial height
    double dt = 0.0000001; // time step

    double impact_ft;
    double impact_mph;

    // calculate until object reaches ground (height ~ 0)
    while(height > 0) {
        speed = speed + G * dt;
        height = height - speed * dt;
        time += dt;
    }

    printf("\nFall time = %.5lf sec\n", time);
    printf("Impact speed = %.5lf ft/sec\n", speed);
    printf("Impact speed = %.5lf mph\n", speed * 15/22);
}

int main() {
    // init user inputs;
    char units;
    double position_y = 0;

    // get user inputs
    printf("Enter initial height with units (f or m): ");
    scanf("%lf %c", &position_y, &units);

    if(units == 'm' || units == 'M') {
        units = 'f';
        position_y *= 5280;
    } else if (units != 'f' && units != 'F') {
        printf("Invalid units.\n");
        return -1;
    }

    // simulate fall
    simulate_fall(position_y);

    return 0;
}