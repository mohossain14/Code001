#include <stdio.h>

int main(void){
   float num1, num2 = 0.0f;
   int flag = 1; 

   printf("Enter a number: ");
   scanf("%f",&num1);

   while (flag != 0){
        printf("Enter a number: ");
        scanf("%f",&num1);
        if (num1 > num2){
                num2 = num1;
                flag = 1;
        }
        else if (num1 = 0){
            flag = 0;
            break;
        }
   } 
   printf("The largest number entered was %.2f\n", num2);
   return 0;
}