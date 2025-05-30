#include <stdio.h>

#define MAX_SIZE 50

int main() {

    // init variables
    char user_str[MAX_SIZE] = { "\0" };
    int lower = 0, upper = 0, digits = 0;

    // get user input
    printf("Enter a string (<50 characters): ");
    fgets(user_str, 49, stdin);

    // loop through str and check if the character
    // is digit, lower-case, or upper-case
    for(int i = 0; i < 49; i++){
        printf("%c", user_str[i]);
        if((user_str[i] >= '0') && (user_str[i] <= '9')) {
            digits++;
        } else if ((user_str[i] >= 'A') && (user_str[i] <= 'Z')) {
            upper++;
        } else if ((user_str[i] >= 'a') && (user_str[i] <= 'z')) {
            lower++;
        }
    }

    // print findings
    printf("\nNumber of lower-case letters: %d", lower);
    printf("\nNumber of upper-case letters: %d", upper);
    printf("\nNumber of digits: %d\n", digits);


    return 0;
}