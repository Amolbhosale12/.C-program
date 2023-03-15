#include<stdio.h>
#include<conio.h>
int main(){
    int count=1;
    int count1=1;
    int i,j,k=72;
    for(i=1;i<=7;i++){
        for(j=1 ;j<=14;j++){
            if(j>=i && j<=7){
                printf("%c ",64+count);
                count++;       
            }
            else if(j>=8 && j<=15-i){
                printf("%c ",k-count1);
                count1++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        count =1; 
        count1=1;
        k--;
    }
    return 0;
}