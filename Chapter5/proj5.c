//income tax calculator

#include <stdio.h>

int main(void){
    float income, tax; //use float since we will likely have decimals

    printf("Enter your yearly income: ");
    scanf("%f", &income);

    if (income < 750.00f){ //statements need to compare to brackets
        tax = .01 * income;
    }
    else if (income < 2250.00f){
        tax = 7.5f + (.02f * (income -750.00f)); 
    }
    else if (income < 3750.00f){
        tax = 37.5f + (.03f * (income -2250.00f));
    }
    else if (income < 5250.00f){
        tax = 82.5f + (.04f * (income - 3750.00f));
    }
    else if (income < 7000.00f){
        tax = 142.5f + (.05f * (income - 5250.00f));
    }
    else if (income > 7000.00f){
        tax = 230.00f + (.06f * (income - 7000.00f));
    }
    printf("Your taxed income will be: $%.2f", tax);
    
    return 0;
}