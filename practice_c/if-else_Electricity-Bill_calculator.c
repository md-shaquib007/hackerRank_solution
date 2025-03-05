#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    float price;
    if(n<0){
        printf("Invalid Input!");
        return 0;
    }
    else if(n>=0 && n<=100){
        price=n*5;
    }
    else if(n>100 && n<=300){
        price=100*5+(n-100)*7;
    }
    else{
        price=100*5+200*7+(n-300)*10;
    }
    float discount=0;
    float finalp=price;
    if(price>0 && price<=1200){
        discount=0.1*price;
        finalp=price-discount;
    }
        printf("The electricity bill is: %.2f.\n",finalp);
              
           
    return 0;
}