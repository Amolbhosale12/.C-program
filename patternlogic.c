#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    int count=69,count1=68;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1){
                printf("%c ",count);
                count--;
                
            }
            else if(i== 2 && j<=4){
                printf("%c ",count1);
                count1--;


            }
        }
        printf("\n");
        
        

    }
    return 0;
}