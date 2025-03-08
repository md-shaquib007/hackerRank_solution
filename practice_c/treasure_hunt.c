#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    
    if(a==1){
       printf("Player chooses the Left path.\n");
        int b;
        scanf("%d",&b);
        if(b==1){
            printf("Poor choice, Game Over!\n");
            return 0;
        }
        else if(b==2){
            printf( "Player found a bridge.\n");
            int b2;
            scanf("%d",&b2);
            if(b2==1){
                printf("Player crosses the bridge safely.\n");
            }
            else if(b2==2){
                printf("Poor luck, Game Over!\n");
                return 0;
            }
        }
        
    }
        
    else if(a==2){
        printf("Player chooses the Middle path.\n");
        if(a==2){
            int puzzle;
            scanf("%d",&puzzle);
                if(puzzle==582){
                    printf("Player solved the puzzle.\n");
                }
            else{
                printf("Foolish player, Game Over!\n");
                return 0;
            }
        }
    }
    
    else if(a==3){
        printf("Player chooses the Right path.\n");
                    int puzzle2;
            scanf("%d",&puzzle2);
            if(puzzle2==30){
               printf("Player solved the puzzle.\n");
            }
            else{
                printf("Foolish player, Game Over!\n");
                return 0;
            }
        }
        
        

    int final;
    scanf("%d",&final);
    
    if(final==1){
        printf("All that glitters is not gold, Game Over!\n");
    }
    else if(final==2){
        printf("All your efforts were for nothing, Game Over!\n");
    }
    else if(final==3){
        printf("Congratulations!! You won the treasure.\n");
    }
    
    
    
        
    return 0;
}