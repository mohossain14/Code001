//can you see this Ownen? 


#include <stdio.h>

int main(void){
    int a;
    int b;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    if((a % 2) == 1){
        printf("The number %d is odd\n", a);
    }
    else{
        printf("The number %d is even\n", a);
    }
    if((b % 2) == 1){
        printf("The number %d is odd\n", b);
    }
    else{
        printf("The number %d is even\n", b);
    }
    return 0;
}
