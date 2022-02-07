#include <stdio.h>

int main(void){
    int day, start, j, k = 1;

    printf("Enter number of days in month: ");
    scanf("%d", &day);
    printf("Enter starting day of the week: ");
    scanf("%d", &start);

    for(j = 1; j <= day; j++){
        k++;
        if (j % 7 == 0){
            printf("\n");
            printf("%d ", j);
            k = 0;
        }
        else {
            printf("%d ", j);
        }
    }

    return 0;
}