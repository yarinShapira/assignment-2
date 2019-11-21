#include <stdio.h>
#define arrlength 50
#define firstdeposit 901
#define balance 1
#define openclose 0


static double arr[arrlength][2]={{0}};


int account(){
printf("Account number?: ");
int index;
scanf("%d", &index);
return workIndex(index);
}


double amount(){
    double amount;
    printf("Initial deposit?: ");
    scanf("%lf", &amount);
    return amount;
}


void open(double amount){
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
        printf("your deposit number is: %d \n", getIndex(index));
    }
}


void add(int index, double amount){
    arr[index][balance] = balance + amount;
}


int getIndex(int index){
return index + firstdeposit;
}


int workIndex(int index){
    return index - firstdeposit;
}


double getbalance(int index){
    return arr[index][balance];
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
        printf("your balance is %.2lf\n", arr[index][balance]);
        }
    }
}


void E(){
    for (int i = 0; i < arrlength; i++){
        if (arr[i][openclose] == 1){
            arr[i][balance] = 0;
            arr[i][openclose] = 0;
        }
    }
}