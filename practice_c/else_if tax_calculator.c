#include <stdio.h>

int main() {

    float income;
    scanf("%f",&income);
    float tax=0;
    float ic=0;
    if(income>=0 && income<=250000){
        printf("%.2f",tax);
    }
    else if(income>250000 && income<=500000){
        ic=income-250000;
        tax=250000*0+ic*0.05;
        printf("%.2f",tax);
    }
    else if(income>500000 && income<=1000000){
        ic=income-500000;
        tax=250000*0+250000*0.05+ic*0.2;
        printf("%.2f",tax); 
    }
    else if(income>1000000){
        ic=income-1000000;
        tax=250000*0+250000*0.05+500000*0.2+ic*0.3;
        printf("%.2f",tax);
    }
    else if(income<0){
        printf("INVALID");
    }
    return 0;
}