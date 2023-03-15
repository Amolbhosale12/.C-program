#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,count =2,k=70;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j<=6-i){
                printf("%c",64+j);
            }
            else if(j>=4+i){
                
                printf("%c",k-count);
                count++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        count=1;
        k--;
    
    }

    return 0;
}