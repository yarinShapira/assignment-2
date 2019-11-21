#include "myBank.h"
#include <stdio.h>

int main(){
    static int flag = 1;
    while (flag){
        char action;
        printf("Transaction type?: ");
        scanf("%c", &action);
        switch (action){
            case 'O' :
            open(amount());
            break;
            case 'B' :
                printBalans(account());
                break;
            case 'D' :
                break;
            case 'W' :
                break;
            case 'C' :
                break;
            case 'I' :
                break;
            case 'E' :
                E();
                flag = 0;
                break;
             case 'P' :
                break;
            default:
                printf("Undetermined action\n");
                break;
        }
    }
    return 0;
}