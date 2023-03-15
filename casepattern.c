#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if( j==2+i || j==4-i){
             printf("*");
            }
            else if(j==i-2 && i>=3){
                printf("*");

            }
            else if(j==8-i && i>=3){
                printf("*");

            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}