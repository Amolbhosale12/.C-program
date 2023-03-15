#include<stdio.h>
#include<conio.h>
// factorial using recursion
// function declaration.
void factorial(int num,int fact);

int main(){
    int num;
    int fact=1;
    printf("enter number here:");
    scanf("%d",&num);
    factorial(num,fact);// function calling.
    return 0;
}
// function declaration.
void factorial(int num,int fact){
    
    if(num!=0){
        fact=fact*num;
        num--;
        factorial(num,fact);
    }
    else{
        printf("factorial of number is:%d",fact);
    }

}