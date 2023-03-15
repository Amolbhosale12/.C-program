#include<stdio.h>
#include<conio.h>
int main(){
    // to check number is strong number or not
    int sum=0,no1,originalvalue,fact=1,num ,i;
    printf("enter the value here:");
    scanf("%d",&num);
    originalvalue=num;
    while(originalvalue!=0){
    no1=originalvalue%10;
      for(i=1;i<=no1;i++){
        fact=fact*i;
      }
    originalvalue=originalvalue/10;
    sum=sum+fact;
    fact=1;
    }
    if(sum==num){
        printf("entered number is strong number");
    }
    else{
        printf("entered number is not a strong number");
    }
    
    return 0;
}
