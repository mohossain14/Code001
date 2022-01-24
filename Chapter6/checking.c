//balances a checkbook

#include <stdio.h>

int main(void){
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("***ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    for(;;){ //this statement if how we do an infinite loop where we can have a return statement within the loop and break statements
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd){
            case 0: {
                balance = 0.0f; break;
            }
            case 1: {
                printf("Enter amount of credit: ");
                scanf("%f", &credit); 
                balance +=credit; break;
            }
            case 2: {
                printf("Enter amount of debit: ");
                scanf("%f", &debit); 
                balance -=debit; break;
            }
            case 3: {
                printf("Current balance: $%.2f\n", balance); break;
            }
            case 4: {
                return 0; //the return tells the program to exit and takes us to the default console
            }
            default: {
                printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
                break;
            }
        }
    }
}