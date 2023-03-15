#include<stdio.h>
#include<conio.h>
int main(){
    for(int i=1;i<=6;i++){
        for(int j=1;j<=11;j++){
            if(j>=7-i && j<=5+i && j-i!=4 && j-i!=2 && j-i!=0 && i-j!=2 && i-j!=4){
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