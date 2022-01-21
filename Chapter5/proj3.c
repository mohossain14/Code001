//Calculate a brokers commission on a trade

#include <stdio.h>

int main(void){
    float commission, value, shares, sharePrice, rivalPrice;


    printf("Enter the number of shares: ");
    scanf("%f", &shares); //scan in the value of the trade
    printf("Enter the value of the shares: ");
    scanf("%f", &sharePrice);

    value = shares * sharePrice;

    if (value < 2500.00f){ //the if statements go in a sequential order of comparing the the maximum limit of each tier and then executing the correct percentages
        commission = 30.00f + .017f * value;
    }
    else if (value < 6250.00f){ // with the floats important to specify the .00f so the program knows the hard cut off
        commission = 56.00f + .0066f * value; // important to always have the f after each float so it doesnt get converted to a double by the compiler
    }
    else if (value < 20000.00f){
        commission = 76.00f + .0034f * value;
    }
    else if (value < 50000.00f){
        commission = 100.00f + .0022f * value;
    }
    else if (value < 500000.00f){
        commission = 155.00f + .0011f * value;
    }
    else {
        commission = 255.00f + .0009f * value;
    }
    if (commission < 39.00f){
        commission = 39.00f;
    }

    if (shares < 2000){ //computes the rival value 
        rivalPrice = 33.00f + .03f * shares; 
    }
    else{
        rivalPrice = 33.00f + .02f * shares;
    }

    printf("Original broker commission: $%.2f\n", commission); //when printing the commission its a good idea to only go two digits at .2f
    printf("Rival broker commission: %.2f\n", rivalPrice);
    return 0;
}