#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(j>=8-i){
                if(i%2!=0){
                    printf("%c",64+i);
                }
                else{
                    printf("%c",96+i);
                }


            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}