#include <stdio.h> 

int main(void){
    int x;
    int space;
    int ast;

    printf("Enter an odd number: \n");
    scanf("%d", &x);
    if((x % 2) != 1){
        printf("stop playing with me bitch");
        return 0;
    }
    space = x - 1;
    ast = 1;
    for(int i = 0; i < x; ++i){
        for(int a = 0; a < space; ++a){
            printf(" ");
        }
        for(int b = 0; b < ast; ++b){
            printf("*");
        }     
        --space;
        ast = ast +2; 
        printf("\n");  
    }
    return 0;
}