#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=3;j++){
            if(j<=i && i<=3){
                printf("%d ",i*j);
            }
            else if(i>=4 && j<=6-i && i==4){
                printf("%d ",2*j);

            }
            else if(i==5 && j==1){
                printf("1");

            }
        }
        printf("\n");
    }
    return 0;

}