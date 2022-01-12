//write a program that computes the volume of a sphere

#include <stdio.h>
#define FRACTION (4.0f / 3.0f)
#define PI 3.14159f
int main(void){
    float radius;
    float volume;

    printf("What is the radius of the sphere: ");
    scanf("%f", &radius);

    volume = FRACTION * PI * (radius * radius * radius);

    printf("The volume of the sphere is: %.2f\n", volume);


}