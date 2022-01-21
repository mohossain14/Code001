// program that gives you city within a area code

#include <stdio.h>

int main(void){
    int code;

    printf("Enter the area code: ");
    scanf("%d",&code); //scans in the area code//

    switch(code){
        case 229: printf("Albany"); break; //switch statement with all the possible cities and area codes//
        case 404: printf("Atlanta"); break;
        case 470: printf("Atlanta"); break;
        case 478: printf("Macon"); break;
        case 678: printf("Atlanta"); break;
        case 706: printf("Columbus"); break;
        case 770: printf("Columbus"); break;
        case 912: printf("Savannah"); break;
        default: printf("Area code not recognized"); break;
    }

    return 0;
}