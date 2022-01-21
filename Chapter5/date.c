//prints date in a legal form

#include <stdio.h>

int main(void){
    int month, day, year;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Dated this %d", day);
    switch (day){ //this switch statement is used to determine the corret postfix for the given days//
        case 1: case 21: case 31: //when giving multiple scenarios use : to denote "or"//
          printf("st"); break;
        case 2 : case 22: 
          printf("nd"); break;
        case 3 : case 23:
          printf("rd"); break;
        default: printf("th"); break;
    }
   printf(" day of ");
   switch (month){ //the statement is the variable being used
     case 1: printf("January"); break; // case number represents the value to be considered at true when compared to user value //
     case 2: printf("February"); break;
     case 3: printf("March"); break;
     case 4: printf("April"); break;
     case 5: printf("May"); break;
     case 6: printf("June"); break;
     case 7: printf("July"); break;
     case 8: printf("August"); break;
     case 9: printf("September"); break;
     case 10: printf("October"); break;
     case 11: printf("November"); break;
     case 12: printf("December"); break;
   }
   printf(", 20%.2d.\n", year);
   return 0;
}