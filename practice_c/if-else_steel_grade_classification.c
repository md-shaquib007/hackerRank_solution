#include <stdio.h>

int main() {

    int hardness;
    float carbon;
    int tensile;
    
    scanf("%d %f %d",&hardness,&carbon,&tensile);
    
    int grade=0;
    if(hardness>50 && carbon<0.7 && tensile>5600){
        grade=10;
        printf("The grade of the steel is: %d\n",grade);  
        printf("All of the conditions met.");
    }
    else if(hardness>50 && carbon<0.7){
        grade=9;
        printf("The grade of the steel is: %d\n",grade);  
        printf("Two conditions met."); 
    }
    else if(carbon<0.7 && tensile>5600){  
        grade=8;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met."); 
    }
    else if(hardness>50 && tensile>5600){
        grade=7;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met."); 
    }
    else if(hardness>50 || carbon<0.7 || tensile>5600){
        grade=6;
        printf("The grade of the steel is: %d\n",grade);
        printf("Only one condition met.");
    }
    else{
        grade=5;
        printf("The grade of the steel is: %d\n",grade);
        printf("None of the conditions met."); 
    }
    
    return 0;
}