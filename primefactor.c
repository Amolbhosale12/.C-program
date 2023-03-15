#include<stdio.h>
#include<conio.h>
int main(){
    // print factor 
    // if we want to print no of factor of value then we will follow some step
    int num;
    printf("enter the value here:");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
       // if(num%i==0){

            int flag=1;
            for(int j=2;j<=i/2;j++){
                    if(i%j==0){
                    flag =0;
                    break;
                    }
            }
            if(num%i==0){
            if(flag){
                printf("%d\n",i);
            }
            }
     //   }

    }
    return 0;
}