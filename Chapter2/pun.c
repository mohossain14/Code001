#include <stdio.h>

int main(void){
    int pref, group_num, pub_code, item_num, check;

    printf("Enter the ISBN: ");
    scanf("%d-%d-%d-%d-%d", &pref, &group_num, &pub_code, &item_num, &check);

    printf("GS1 Prefix: %d\n", pref);
    printf("Group Identifier: %d\n", group_num);
    printf("Publisher Code: %d\n", pub_code);
    printf("Item Number: %d\n", item_num);
    printf("Check Digit: %d\n", check);

    return 0;
}