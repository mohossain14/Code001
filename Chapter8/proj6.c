//BIFF filter

#include <stdio.h>
#include <ctype.h>

#define N 100
#define BOUND ((int) (sizeof(message) / sizeof(message[0])))

int main(void){
    char message[N] = {};
    int i, count = 0;
    char ch;

    printf("Enter message: ");
    ch = getchar();
    for(i = 0; i < BOUND; i++){
        if (ch == '\n'){
            break;
        }
        else{
            message[i] = ch;
            ch = getchar();
            count++;
        }
    }
    printf("\n");
    for (i = 0; i < count; i++){
        if(message[i] == 'a'){
            printf("%c", '4');
        }
        else if(message[i] == 'b'){
            printf("%c", '8');
        }
        else if(message[i] == 'e'){
            printf("%c", '3');
        }
        else if(message[i] == 'i'){
            printf("%c", '1');
        }
        else if(message[i] == 'o'){
            printf("%c", '0');
        }
        else if(message[i] == 's'){
            printf("%c", '5');
        }
        else {
            printf("%c", toupper (message[i]));
        }
    }
    printf("!!!!!!!!!\n");
    return 0;
}