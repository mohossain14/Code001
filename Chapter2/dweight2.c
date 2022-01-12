//compute the dimensional weight of a box based on input from the user input

#include <stdio.h>
#define INCHES_PER_POUND 166 //macro definition of something the reader may need to know later. We use define a directive with the value after it. Convention is to have all macro names in [CAPS].

int main(void){
    int height, length, width, volume, weight;

    printf("Enter the height of the box: "); //when scanning we dont need the newline character since we want the user to input a value onto that same line. The user pressing enter is essentially newline//
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1)/ INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
}