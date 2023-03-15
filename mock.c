#include <stdio.h>
#include <conio.h>
int main(){
    int i,j,count=1,count2=1,count3=1,count4=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j<=i){
                printf("%c ",64+count);
                count++;
            }
            else if(j==i+1 && i>=2){
                printf("%c ",64+count2);
                count2++;
            }
            else if(j==i+2 && i>=3){
                printf("%c ",64+count3);
                count3++;  
            }
            else if(j==i+3 && i>=4){
                printf("%c ",64+ count4);
                count4 ++;
            }
            else if(j==9 && i==5){
                printf("%c ",65);

            }

        }
        printf("\n");
        count=1;
        
    }
    
    return 0;
}