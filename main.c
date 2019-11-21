#include "myBank.c"
#include <stdio.h>

int main(){
    static int flag = 1;
    char action;
    while (flag){
        printf("Transaction type??: ");
        scanf("%c", &action);
        switch (action){
            case 'O' :
            open(amount());
            break;
            case 'B' :
                printBalans(account());
                break;
            case 'D' :
            add(amount(), account());
                break;
            case 'W' :
            Subtraction(amount(), account());
                break;
            case 'C' :
            close(account());
                break;
            case 'I' :
                break;
            case 'P' :
                break;
            case 'E' :
                E();
                flag = 0;
                break;
        }
    }
    return 0;
}