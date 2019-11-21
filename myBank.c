#include <stdio.h>
#define arrlength 50
#define firstdeposit 901
#define balans 1
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
        add(index, amount);
        printf("your deposit number is: %d \n", getIndex(index));
    }
}


void add(int index, double amount){
    arr[index][balans] = balans + amount;
}


int getIndex(int index){
return index + firstdeposit;
}


int workIndex(int index){
    return index - firstdeposit;
}


double getBalans(int index){
    return arr[index][balans];
}


void printBalans(int index){
    if (index < 0 || index > 49){
        printf("Account number is unavailable\n");
    }
    else {
        if(arr[index][openclose] == 0){
            printf("this account is closed\n");
        }
        else{
        printf("your balans is %.2lf\n", arr[index][balans]);
        }
    }
}




























void B(){
    printf("Account number?: ");
    int index;
    scanf("%d", &index);
    index = index - firstdeposit;

}


void D(){
    printf("Account number?: ");
    int index;
    scanf("%d", &index);
    printf("Amount?: ");
    double amount;
    scanf("%lf", &amount);
    index = index - firstdeposit;
    if (index < 0 || index > 49){
        printf("Account number is unavailable\n");
    }
    else {
        if(arr[index][openclose] == 0){
            printf("this account is closed\n");
        }
        else{
            arr[index][balans] = arr[index][balans] + amount;
        printf("your balans is %.2lf\n", arr[index][balans]);
        }
    }
}


void W(){
    printf("Account number?: ");
    int index;
    scanf("%d", &index);
    printf("Amount?: ");
    double amount;
    scanf("%lf", &amount);
    index = index - firstdeposit;
    if (index < 0 || index > 49){
        printf("Account number is unavailable\n");
    }
    else {
        if(arr[index][openclose] == 0){
            printf("this account is closed\n");
        }
        else{
            if(amount > arr[index][balans]){
                printf("there not enough money on this Account\n");
            }
            else{
                arr[index][balans] = arr[index][balans] + amount;
                printf("your balans is %.2lf.\n", arr[index][balans]);
            }
        }
    }
}


void C(){
    printf("Account number?: ");
    int index;
    scanf("%d", &index);
    index = index - firstdeposit;
    if (index < 0 || index > 49){
        printf("Account number is unavailable\n");
    }
    else {
        if (arr[index][openclose] == 0){
            printf("Account is already close\n");
        }
        else{
            arr[index][balans] = 0;
            arr[index][openclose] = 0;
        }
    }
}


void I(){
    printf("Interest rate? ");
    double Interest;
    scanf("%lf", &Interest);
    for (int i = 0; i < arrlength; i++){
        if (arr[i][openclose] == 1){
            double add = ((arr[i][balans] * Interest)/100);
            arr[i][balans] = arr[i][balans] + add;
        }
    }    
}


void P(){
    for (int i = 0; i < arrlength; i++){
        if (arr[i][openclose] == 1){
            printf("Account number: %d, balans: %.2lf.\n",i+firstdeposit, arr[i][balans]);
        }
    }
}


void E(){
    for (int i = 0; i < arrlength; i++){
        if (arr[i][openclose] == 1){
            arr[i][balans] = 0;
            arr[i][openclose] = 0;
        }
    }
}