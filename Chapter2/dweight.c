//computes the dimensional 
#include <stdio.h>

int main(void){
    //int height, length, width, volume, weight;
    //can also be written in one initialization

    int height = 8, length =12, width = 10;
    int volume, weight;

    //height = 8; 
    //length = 12;
    //width = 10;
    volume = height * length * width;
    weight = (volume + 165)/166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    //can also written as one exp within print: printf("%d\n", height*length*width) 
    printf("Dimensional weight (pounds): %d\n", weight);
    
    return 0;
}