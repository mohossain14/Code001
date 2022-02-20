//grades a 5 by 5 array 
#include <stdio.h>
#define N 3
#define BOUND ((int) (sizeof(mat) / sizeof(mat[0])))

int main(void){
    int mat[N][N];
    int i, j, Max[N] = {0}, Min[N] = {100};
    int row[N] = {0}, col[N] = {0};
    double avg[N];

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

    for(i = 0; i < BOUND; i++){
        avg[i] = row[i] / (double) BOUND;
    }

    for(i = 0; i < BOUND; i++){
        for(j = 0; j < BOUND; j++){
            if(mat[j][i] > Max[i]){
                Max[i] = mat[j][i];
            }
            else{
                continue;
            }
        }
    }
    for(i = 0; i < BOUND; i++){
        for(j = 0; j < BOUND; j++){
            if(mat[j][i] < Min[i]){
                Min[i] = mat[j][i];
            }
            else{
                continue;
            }
        }
    }

    printf("\nStudent Avg:  ");
    for(i = 0; i < BOUND; i++){
        printf("%.2f ", avg[i]);
    }
    printf("\nHigh Scores: ");
    for(i = 0; i < BOUND; i++){
        printf("%d ", Max[i]);
    }
    printf("\nLow Scores: ");
    for(i = 0; i < BOUND; i++){
        printf("%d ", Min[i]);
    }

    return 0;
}