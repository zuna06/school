/*
*
*   Tanish Ambala
*   ECE 240 - C Programming for Engineerings
*   Homework Assignment #4
*
*/

#include <stdio.h>

// code policy
void printPolicy() {
    printf("Program to calculate final course grade\n\n");
    printf("Course Grading Policy:\n");
    printf("Homework        10.00%%\n");
    printf("Labs            10.00%%\n");
    printf("Quizzes         15.00%%\n");
    printf("Midterm Exam    15.00%%\n");
    printf("Project         10.00%%\n");
    printf("Final Exam      20.00%%\n");    
    printf("***************************************\n\n");
}

// function to get grade to minimize repeated code
float getGrade(char* prompt) {
    float grade;
    float scale;
    
    printf("%s", prompt);
    scanf("%f/%f", &grade, &scale);

    return grade / scale;
}

int main() {

    // define variables
    // note: you made a mistake, i removed test grade and replaced it
    // with quizGrade to follow the grading policy

    float hwGrade;
    float labGrade;
    float quizGrade; 
    float midGrade;
    float projGrade;
    float finalGrade; 
    float classGrade;

    float scale;

    // print policy
    printPolicy();

    // get user input
    hwGrade = getGrade("Enter Homework grade (grade//scale): ");
    labGrade = getGrade("Enter Lab grade (grade//scale): ");
    quizGrade = getGrade("Enter Quiz grade (grade//scale): ");
    midGrade = getGrade("Enter Midterm grade (grade//scale): ");
    projGrade = getGrade("Enter Project grade (grade//scale): ");
    finalGrade = getGrade("Enter Final grade (grade//scale): ");

    // calculate class grade
    classGrade = ((hwGrade * 0.1) +
                  (labGrade * 0.1) +
                  (quizGrade * 0.15) +
                  (midGrade * 0.15) +
                  (projGrade * 0.3) +
                  (finalGrade * 0.2)) * 100;

    printf("\nFinal Course Grade = %.2f\n", classGrade);

    return 0;

}