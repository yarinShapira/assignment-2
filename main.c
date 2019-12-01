#include "myBank.h"
#include <stdio.h>



int main(){
    double money;
    int deposit;
    char action;
    Start:
        action = act();
        if (action == 'O'){
            open();
            goto Start;
        }
        if (action == 'B'){
            deposit = account();
            printBalance(deposit);
            goto Start;
        }
        if (action == 'D'){
            deposit = account();
            money = amount();
            if(add(deposit, money)){
                printBalance(deposit);
            }
            goto Start;
        }
        if (action == 'W'){
            deposit = account();
            money = amount();
            if(Subtraction(deposit, money)){
                printBalance(deposit);
            }
            goto Start;
        }
        if (action == 'C'){
            deposit = account();
            close(deposit);
            goto Start;
        }
        if (action == 'I'){
            interest();
            goto Start;
        }
        if (action == 'P'){
            printAll();
            goto Start;
        }
        if (action == 'E'){
                E();
        }
    return 0;
}