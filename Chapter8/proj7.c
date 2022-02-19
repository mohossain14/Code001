//grades a 5 by 5 array 
#include <stdio.h>
#define N 3
#define BOUND ((int) (sizeof(mat) / sizeof(mat[0])))

int main(void){
    int mat[N][N];
    int i, j;
    int row[N] = {0}, col[N] = {0};

    for(i = 0; i < BOUND; i++){ //first main loop for the rows
        printf("Row %d:\n", i + 1);
        for(j = 0; j < BOUND; j++){ //second loop for columns
            printf("Num %d: ", j + 1);
            scanf("%d", &mat[i][j]); //scans in the numbers array
        }
    }
    for (i = 0; i < BOUND; i++){
        for(j = 0; j < BOUND; j++){
            row[i] += mat[i][j]; //adds the numbers in the rows, i stays static so we add rows while j changes to add across
        }
    }
    for (i = 0; i < BOUND; i++){
        for(j = 0; j < BOUND; j++){
            col[i] += mat[j][i]; //adds columns, j changes, while i stays the same
        }
    }

    printf("\nRow Totals:  ");
    for(i = 0; i < BOUND; i++){
        printf("%d ", row[i]);
    }
    printf("\nColumn totals: ");
    for(i = 0; i < BOUND; i++){
        printf("%d ", col[i]);
    }

}