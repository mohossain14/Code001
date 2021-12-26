#include <stdio.h>

int main(){

    #define Lower 0  //!define constants so that people reading the code know exactly what is going on
    #define UPPER 300
    #define step 20 
    
    int fahr;
    printf("Fahrenheit\tCelsius\n");

    for(fahr = 300; fahr >= 0; fahr = fahr -20){
        printf("%3d\t\t%6.2f\n", fahr, (5.0/9.0)*(fahr - 32));
    }
    return 0;
}
//left off on page 27