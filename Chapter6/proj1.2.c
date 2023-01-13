#include <stdio.h>

int main(void){
   float num1, num2 = 0.0f; //initialize variables
   int flag = 1;  //flag variable

   printf("Enter a number: "); //prompts user for a number
   scanf("%f",&num1);

   while(flag != 0){ //while the flag isn't 0
        printf("Enter a number: "); //reads in input for each loop
        scanf("%f",&num1);
        if(num1 > num2){ //if greater than makes it new default
            num2 = num1;
        }
        else if(num1 == 0.0f){ //checks if value is zero
            flag = 0; //changes flag to end loop
        }
        else{ //tells loop to continue
            continue;
        }
   };
   printf("The largest number entered was %.2f\n", num2); //prints max value
   return 0;
}