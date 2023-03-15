#include<stdio.h>
#include<conio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if(j>=5-i && j<=3+i && j-i!=2 && j-i!=0 && i-j!=2){
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

/*       *
        * *
       * * *
      * * * *
*/