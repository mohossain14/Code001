#include <stdio.h>

int main(void){
    float amount;

    printf("Enter the total amount: ");
    scanf("%f", &amount);

    printf("Your taxed amount is ");

   if (amount < 750.00f){
        printf("%3.2f", amount + (0.01f * amount));
   }
   else if((amount >= 750.00f) & (amount <= 2250.00f)){
        printf("%4.2f", amount + (0.02f * amount) + 7.5f);
   }
   else if((amount >= 2250.00f) & (amount <= 3750.00f)){
        printf("%4.2f", amount + (0.03f * amount) + 37.5f);
   }
   else if((amount >= 3750.00f) & (amount <= 5250.00f)){
        printf("%4.2f", amount + (0.04f * amount) + 82.5f);
   }
   else if((amount >= 5250.00f) & (amount <= 7000.00f)){
        printf("%4.2f", amount + (0.05f * amount) + 142.5f);
   }
   else if(amount >= 7000.00f){
        printf("%5.2f", amount + (0.06f * amount) + 230.0f);
   }
   printf("\n");

   return 0;
}