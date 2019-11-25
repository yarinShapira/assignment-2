#include "myBank.h"
#include <stdio.h>



int main(){
    static double money;
    static int deposit;
    static char action;
    Start:
    action = act();
        switch (action){
            case 'O' :
                open();
                goto Start;
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
            default:
            goto Start;
        }
    End:
    return 0;
}