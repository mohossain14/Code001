//prints date in a legal form

#include <stdio.h>

int main(void){
    int month, day, year;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Dated thid %d", day);
    switch (day){
        case 1: case 21: case 31:
          printf("st"); break;
        case 2 : case 22: 
          printf("nd"); break;
    }
}