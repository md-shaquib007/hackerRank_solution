#include <stdio.h>

int main() {

    int year , month;
    scanf("%d %d", &month, &year);
    
    int days=0;
    
    if(month<=0 || month>=13){
        printf("Invalid Month\n");
    }
     if(year<1){
        printf("Invalid Year\n");
    }
    if( (month<=0 || month>12) || (year<1) ){
        return 0;
    } 

          switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                  days=31;
              break;
            case 4:
            case 6:
            case 9:
            case 11:
                  days=30;
                break;
              case 2:
            if( (year%4==0 && year%100!=0) || year%400==0){
                days=29;
            }
            else{
                days=28;
            }
                break;
          }
            printf("%d\n",days);

    
    return 0;
}