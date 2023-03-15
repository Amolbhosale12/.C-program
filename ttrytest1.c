#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    // if we want to create pattern then we use nexted loop 
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=i){
                printf("*");
                printf(" ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}