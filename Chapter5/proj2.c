//write a program that takes 24hr time and converts it to 12-hour form

#include <stdio.h>

int main(void){
    int hr, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);

    if (hr > 12){ //need an if statement to check if hour is >12
        printf("Equivalent 12-hour time: %d:%d PM", hr - 12, min); //subtract 12 from hour and include PM and thats it
    }
    else{
        printf("Equivalent 12-hour time: %d:%d AM", hr, min);
    }
    return 0;
}