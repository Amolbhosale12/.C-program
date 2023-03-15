#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=1;i<=13;i++){
        for(j=0;j<=7;j++){
            if(j==1){
                printf("%d",j);
            }
            else if(j>=2 && j<=i && i>=2 && i<=7){
                printf("0");

            }
            else if(j>=2 && j<=14-i && i>=8 && i<=13){
                printf("0");

            }

        }
        printf("\n");
    }
    return 0;
}