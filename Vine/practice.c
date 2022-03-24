#include <stdio.h>
#define BOUND ((int) (sizeof(str)/ sizeof(str[0])))

int main(void){
    char str[6];
    int r = 0, i;
    char ch;
    char *A[5][6] = {{"  ###  "},{" #   # "},{" ##### "},{" #   # "},{" #   # "}};
    char *B[5][6] = {{"#### "}, {"#   # "}, {"####"},{"#   #"},{"###### "}};

    printf("Enter a name: ");
    gets(str);

    for(r = 0; r < BOUND; r++){
        printf("\n");
        for (i = 0; i < 5; i++){
            ch = str[i];
            if(ch == 97){
                printf("%s ", A[r][i]);
            }
            else if(ch == 98){
                printf("%s ", B[r][i]);
            }
        }
    }
    return 0;
}