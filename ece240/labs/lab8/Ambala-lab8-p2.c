#include <stdio.h>
#include <string.h>

#define MAX_SIZE 50

int main() {

    // init variables
    char user_str[MAX_SIZE] = { "\0" };
    
    int words;
    char* token;

    // get user input
    printf("Enter a string (<50 characters): ");
    fgets(user_str, 49, stdin);

    // define token variable
    token = strtok(user_str, " ");

    // loop through str to get each "token"//word
    // increment words
    while(token != NULL) {
        words++;
        token = strtok(NULL, " ");
    }

    // print findings
    printf("Number of words: %d\n", words);

    return 0;
}