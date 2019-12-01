#include <stdio.h>
#define arrlength 50
#define firstdeposit 901
#define balance 1
#define openclose 0


double arr[arrlength][2] = {{0}};


char act(){
    char action;
    start:
    printf("Transaction type?: ");
    scanf("%c", &action);
    if(action == 'O' || action == 'B' || action == 'D' || action == 'W' || action == 'C' || action == 'I' || action == 'P' || action == 'E'){
        return action;
    }
    goto start;
}


int account(){
    start:
    printf("Account number?: ");
    int index;
    scanf("%d", &index);
    if(index > 950 && index < 0){
        return index - firstdeposit;
    }
    else{
        goto start;
    }
    return 0;
}


double amount(){
    double amount;
    printf("Amount?: ");
    scanf("%lf", &amount);
    return amount;
}


void open(){
    double amount;
    printf("Initial deposit?: ");
    scanf("%lf", &amount);
    int index;
    int flag = 1;
    for (int i = 0; i < arrlength && flag; i++){
        if(arr[i][openclose] == 0){
            index = i;
            flag = 0;
        }
    }
    if (flag){
        printf("Sorry, we are running out of space \n");
    }
    else{
        arr[index][openclose] = 1;
        arr[index][balance] = amount;
        printf("your deposit number is: %d \n", index + firstdeposit);
    }
}


int add(int index, double amount){
    if (arr[index][openclose] == 0){
         printf("this account is close\n");
        return 0;
    }
    arr[index][balance] = arr[index][balance] + amount;
    return 1;
}


int Subtraction(int index, double amount){
    if (arr[index][openclose] == 0){
        printf("this account is close\n");
        return 0;
    }
    else{
        if(arr[index][balance] < amount){
            printf("There is not enough money in this account\n");
            return 0;
        }
        else{
            arr[index][balance] = arr[index][balance] - amount;
            return 1;
        }
        
    }
    
}


void printBalance(int index){
    if (index < 0 || index > 49){
        printf("Account number is unavailable\n");
    }
    else {
        if(arr[index][openclose] == 0){
            printf("this account is closed\n");
        }
        else{
        printf("In account number %d the balance is %.2lf\n",index + firstdeposit, arr[index][balance]);
        }
    }
}


void close(int index){
    if(arr[index][openclose] == 1){
        arr[index][openclose] = 0;
        arr[index][balance] = 0;
    }
    else{
        printf("this account is already closed\n");   
    }
}


void interest(){
    printf("Interest rate?: ");
    int rate;
    scanf("%d", &rate);
    for (int i = 0; i < arrlength; i++){
        if (arr[i][openclose == 1]){
            add(i,arr[i][balance] * rate / 100);
        }
    }

}


void printAll(){
    for (int i = 0; i < arrlength; i++){
        if(arr[i][openclose] == 1){
           printBalance(i); 
        }
    }
    
}

void E(){
    for (int i = 0; i < arrlength; i++){
        if (arr[i][openclose] == 1){
            close(i);
        }
    }
}