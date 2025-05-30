#include <stdio.h>

#define ROWS 5
#define COLS 4

int main(){
	
    // init variables
    int sum = 0;
	char col[] = "COL";
	
    int table[ROWS][COLS] = {{1, 2, 4, 8}, 
				{1, 3, 9, 27}, 
				{1, 4, 16, 64}, 
				{1, 5, 25, 125},
				{1, 6, 36, 216}};

    // print table header
	printf("%9s0%6s1%6s2%6s3", col, col, col, col); 
    printf("    Sum\n");

    for(int i = 0; i < ROWS; i++){
        sum = 0;
        printf("\nRow%d  ", i);

        // print table contents
        for(int j = 0; j < COLS; j++){
            if (j == 0) {
                printf("%d      ", table[i][j]);
            } else {
                printf("%-7d", table[i][j]);
            }
            sum += table[i][j];
        }

        printf("%  d\n", sum);
    }

	return 0;

}
