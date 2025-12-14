#include <stdio.h>

#define ROWS 10  

int main() {

    int triangle[ROWS][ROWS];

    for (int i = 0; i < ROWS; i++) {

        triangle[i][0] = 1;


        triangle[i][i] = 1;


        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }


    for (int i = 0; i < ROWS; i++) {

        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}