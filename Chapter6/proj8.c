//prints out the calendar given days and start of the month
#include <stdio.h>

int main(void){
    int day, start,i , j, r = 0;

    printf("Enter number of days in month: ");
    scanf("%d", &day);
    printf("Enter starting day of the week: ");
    scanf("%d", &start);

    for(j = 1; j < start; j++){ //loops through
        printf(" **");
    }
    r = start - 1; //r is our tracker for the number of days within the week

    for(i = 1; i <= day; i++){ //main loop that iterates the days
        if ((r % 7) == 0){ // is the tracker has mod 0 then its the end of the week
            printf("\n");
            printf("%2d ", i); //prints the day for the following week 
            r++; //increments
        }
        else{
            printf("%2d ", i); //prints out the days
            r++;
        }

    }
    return 0;
}