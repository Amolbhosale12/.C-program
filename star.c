#include<stdio.h>
#include<conio.h>
int main(){
    int flag=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=17;j++){
            if(j>=10-i && j<=8+i){
                if(flag){
                    printf("%d",i);
                    flag=0;
                }
                else{
                    printf("*");
                    flag=1;
                }
            }
            else{
                printf("*");
            }

        }
        printf("\n");

    }
    return 0;
}