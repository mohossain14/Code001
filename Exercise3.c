//numbers program

#include<stdio.h>

int main(void){
    int val, i, sum = 0;
    float div;

    printf("Enter a number: ");
    scanf("%d", &val);

    num[val];

    for(i = 0; i < val; i++){
        printf("Enter a given number: ");
        scanf("%d", num[i]);
    }

    for (i = 0; i < val; i++){
        sum += num[i];
    }

    div = sum /val;

    printf("%.2f", div);
    return 0;


}