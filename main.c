#include "myBank.c"
#include <stdio.h>





int main(){
    static int flag = 1;
    static double money;
    static int deposit;
    while (flag){
        char action;
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
                flag = 0;
                break;
        }
    }
    return 0;
}