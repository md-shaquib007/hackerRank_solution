#include <stdio.h>

int main() {

    int age , annual_income , risk_tolerence;
    scanf("%d %d %d",&age, &annual_income, &risk_tolerence);
    
    if(age>50 && !(annual_income>75000 && risk_tolerence==3)){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    
    else if(age > 30 && annual_income<=30000 && (risk_tolerence==1 ||  risk_tolerence==2) ){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    
    else if(age>=30 && age<=50 && annual_income<=75000 && risk_tolerence==2){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    
    else if(age>=30 && age<=50 && annual_income>75000 && (risk_tolerence==1 || risk_tolerence==2) ){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    
    
    else if(age<=30){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    
    else if(age>=30 && age<=50 && annual_income>75000 && risk_tolerence==3){
      printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");  
    }
    
    else if(age>50 && annual_income>75000 && risk_tolerence==3){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    
    
    return 0;
}