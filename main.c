#include "myBank.h"
#include <stdio.h>



int main(){
    double money;
    int deposit;
    char action;
    while(1){
        printf("Transaction type?: ");
        scanf("%c", &action);
        switch (action){
            case 'O' :
                open();
                break;
            case 'B' :
                deposit = account();
                printBalance(deposit);
                break;
            case 'D' :
                deposit = account();
                money = amount();
                if(add(deposit, money)){
                    printBalance(deposit);
                }
                break;
            case 'W' :
                deposit = account();
                money = amount();
                if(Subtraction(deposit, money)){
                    printBalance(deposit);
                }
                break;
            case 'C' :
                deposit = account();
                close(deposit);
                break;
            case 'I' :
                interest();
                break;
            case 'P' :
                printAll();
                break;
            case 'E' :
                E();
                goto End;
        }
    }
    End:
    return 0;
}