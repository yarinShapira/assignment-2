#include "myBank.c"

int main(){
    static int flag = 1;
    while (flag){
        char action;
        printf("Transaction type?: ");
        scanf("%c", &action);
        switch (action){
            case 'O' :
            double num = amount();
            open(num);
            break;
            case 'B' :
                int numAccount = account();
                printBalans(numAccount);
                break;
            case 'D' :
                D();
                break;
            case 'W' :
                W();
                break;
            case 'C' :
                C();
                break;
            case 'I' :
                I();
                break;
            case 'E' :
                E();
                flag = 0;
                break;
             case 'P' :
                P();
                break;
            default:
                printf("Undetermined action\n");
                break;
        }
    }
    return 0;
}