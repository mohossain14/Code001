#include <stdio.h>

int squareIt(int x, int n){
    int r = ;
    for(int i = 0; i  < n; ++i){
        r=r*x;
    }
    return r;
}

int main(void){
    int a;
    int b;
    int sQ;

    printf("Enter two integers a and b: \n");
    scanf("%d %d", &a, &b);
    sQ = squareIt(a,b);
    printf("a ^ b is %d", sQ);
    return 0;
}