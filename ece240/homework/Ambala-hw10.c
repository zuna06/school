/*
*
* Tanish Ambala
* ECE 240 – C Programming for Engineers
* Homework assignment #10
*
*/

// use -lm to link math header
#include <stdio.h>
#include <math.h>


// def pi since math.h is not working
// #define M_PI 3.14159265358979323846
// fixed, use -lm to link math header

// def consts
#define RECT  'r'
#define POLAR 'p'
#define RE  p1
#define IM  p2
#define MAG p1
#define ANG p2

// def struct
typedef struct complex {
    double p1;
    double p2;
    char coord;
} complex_t;

void GetCompNum(complex_t *compNum) {
    // get comp num from user
    printf("Enter a complex number.\n");
    printf("Choose rectangular (r) or polar (p) coordinates: ");
    scanf("%c", &compNum->coord);

    // check type and get user input
    if (compNum->coord == RECT) {

        // if type is rect get re and im of num
        printf("Enter the real and imaginary parts.\n");

        // get user input
        printf("Real part: ");
        scanf("%lf", &compNum->RE);
        printf("Imaginary part: ");
        scanf("%lf", &compNum->IM);
    } else if (compNum->coord == POLAR) {

        // if type is polar get mag and ang of num
        printf("Enter the magnitude and the angle (in degrees).\n");
        
        // get user input
        printf("Magnitude: ");
        scanf("%lf", &compNum->MAG);
        printf("Angle (degrees): ");
        scanf("%lf", &compNum->ANG);
    } else {
        printf("Invalid coord type.\n");
    }
}

void PrintCompNum(complex_t compNum) {
    // print comp num according to type
    // rect else polar else unkno
    if (compNum.coord == RECT) {
        printf("z = %.3lf + %.3lfi\n", compNum.RE, compNum.IM);
    } else if (compNum.coord == POLAR) {
        printf("z = %.3lf /_ %.2lf\n", compNum.MAG, compNum.ANG);
    } else {
        printf("Unknown coord type, cannot print complex number.\n");
    }
}

void ConvertCompNum(complex_t *compNum) {
    if (compNum->coord == RECT) {
        // temp vars
        double re = compNum->RE;
        double im = compNum->IM;
        compNum->MAG = sqrt(re * re + im * im);
        // arctan func and PI to convert to degrees
        compNum->ANG = atan(im / re) * (180.0 / M_PI);
        compNum->coord = POLAR;
    } else if (compNum->coord == POLAR) {
        // temp vars
        double mag = compNum->MAG;
        double angle = compNum->ANG;
        double radians = angle * (M_PI / 180.0);
        // cos and sin and PI to convert to rads
        compNum->RE = mag * cos(radians);
        compNum->IM = mag * sin(radians);
        compNum->coord = RECT;
    }
}

double Real(complex_t compNum) {
    // get real part of num
    // calc if polar else return RE
    if (compNum.coord == POLAR) {
        // rads conversion
        double radians = compNum.ANG * (M_PI / 180.0);
        return compNum.MAG * cos(radians);
    }
    return compNum.RE;
}

double Imag(complex_t compNum) {
    // get imaginary part of num
    // calc if polar else return RE
    if (compNum.coord == POLAR) {
        // rads conversion
        double radians = compNum.ANG * (M_PI / 180.0);
        return compNum.MAG * sin(radians);
    }
    return compNum.IM;
}

void Add(complex_t *result, complex_t a, complex_t b) {

    // same form
    if (a.coord == POLAR) ConvertCompNum(&a);
    if (b.coord == POLAR) ConvertCompNum(&b);

    // addition
    double re_sum = a.RE + b.RE;
    double im_sum = a.IM + b.IM;

    // store result in correct form
    if (result->coord == POLAR) {
        result->MAG = sqrt(re_sum * re_sum + im_sum * im_sum);
        result->ANG = atan(im_sum / re_sum) * (180.0 / M_PI);
        result->coord = POLAR;
    } else {
        result->RE = re_sum;
        result->IM = im_sum;
        result->coord = RECT;
    }
}

void Sub(complex_t *result, complex_t a, complex_t b) {
    
    // set coords to same form
    if (a.coord == POLAR) ConvertCompNum(&a);
    if (b.coord == POLAR) ConvertCompNum(&b);

    // calc difference
    double re_diff = a.RE - b.RE;
    double im_diff = a.IM - b.IM;

    // store in result
    // form chosen before func call
    if (result->coord == POLAR) {
        result->MAG = sqrt(re_diff * re_diff + im_diff * im_diff);
        result->ANG = atan(im_diff / re_diff) * (180.0 / M_PI);
        result->coord = POLAR;
    } else {
        result->RE = re_diff;
        result->IM = im_diff;
        result->coord = RECT;
    }
}

int main() {
    
    // init complex coord structs
    complex_t z1;
    complex_t z2;
    complex_t result;

    // get 2 complex coords from user
    GetCompNum(&z1);
    GetCompNum(&z2);

    // print each num
    printf("\nFirst number: ");
    PrintCompNum(z1);
    printf("Second number: ");
    PrintCompNum(z2);

    // convert from p to r or r to p for each num
    printf("\nConverted first number: ");
    ConvertCompNum(&z1);
    PrintCompNum(z1);

    printf("Converted second number: ");
    ConvertCompNum(&z2);
    PrintCompNum(z2);

    // imag and real showcase
    printf("\nReal part of first: %.3lf\n", Real(z1));
    printf("Imaginary part of first: %.3lf\n", Imag(z1));

    printf("\nReal part of second: %.3lf\n", Real(z2));
    printf("Imaginary part of second: %.3lf\n", Imag(z2));

    // add nums and store it in other struct

    // show sum in rect form
    result.coord = RECT;
    Add(&result, z1, z2);
    printf("\n\nSum in rectangular form: ");
    PrintCompNum(result);

    // show sum in polar form
    result.coord = POLAR;
    Add(&result, z1, z2);
    printf("Sum in polar form: ");
    PrintCompNum(result);

    // subtract nums and store in other struct

    // show diff in rect form
    result.coord = RECT;
    Sub(&result, z1, z2);
    printf("\nDifference in rectangular form: ");
    PrintCompNum(result);

    // show diff in polar form
    result.coord = POLAR;
    Sub(&result, z1, z2);
    printf("\nDifference in polar form: ");
    PrintCompNum(result);

    return 0;
}
