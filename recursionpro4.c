#include<stdio.h>
#include<conio.h>
void swap(int a,int b);

int main(){
    int num1,num2;
    // swap two value using function
    printf("enter first value here:");
    scanf("%d",&num1);
    printf("enter second value here:");
    scanf("%d",&num2);
    swap(num1,num2);

    return 0;
}

void swap(int a,int b){
    int temp=b;
    b=a;
    a=temp;
    printf("after swaping a is:%d b is :%d",a,b);
}