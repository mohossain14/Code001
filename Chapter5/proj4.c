// takes Beaufort scale to estimate wind force

#include <stdio.h>

int main(void){
    float wind;

    printf("Enter the wind speed (in knots): ");
    scanf("%f",&wind);

    if (wind < 1.0f){
        printf("Calm");
    }
    else if (wind > 1.0f && wind < 3.0f){ //compares the wind speed within the given ranges to confirm force//
        printf("Light air");
    }
    else if (wind > 4.0f && wind < 27.0f){
        printf("Breeze");
    }
    else if (wind > 28.0f && wind < 47.0f){
        printf("Gale");
    }
    else if (wind > 48.0f && wind < 63.0f){
        printf("Storm");
    }
    else if (wind > 63.0f){
        printf("Hurricane");
    }
}