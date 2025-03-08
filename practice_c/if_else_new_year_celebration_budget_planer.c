#include <stdio.h>

int main() {

    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses ;
    scanf("%d %d %d %d %d %d",&budget, &numGuests, &foodCostPerGuest, &decorationCost, &musicCost, &extraExpenses);
    
    int totalCost= numGuests*foodCostPerGuest+decorationCost+extraExpenses+musicCost;
    
    int tfoodCost= numGuests * foodCostPerGuest;
    
    if(numGuests>25 && musicCost<=0){
        printf("Celebration Denied");
    }
    else if( totalCost>budget || numGuests<=5 || (numGuests>50)){
        printf("Celebration Denied");
    }
    
    else if((decorationCost>=0.3*budget && tfoodCost>=0.5*budget)){
        printf("Celebration Denied");
    }
    else{
        printf("Celebration Approved");
    }
    
    
    return 0;
}