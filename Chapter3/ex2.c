#include <stdio.h>

int main(void){
    //float x = 134.33f;
    //printf("|%-8.1e|%10.6e|%8.3f|%6.0f", x, x, x, x);

    float x, y;
    int i;

    scanf("%f%d%f", &x, &i, &y);
    printf("%f,%d,%f", x, i, y);

    return 0;
}