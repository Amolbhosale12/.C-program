#include<stdio.h>
#include<conio.h>

void add(int x ,int y);
void sub(int x ,int y);
void mul(int x ,int y);
void div(int x ,int y);
void mod(int x ,int y);

int main(){
    int num,num1,num2;
    //wap to print arithmetic operations on integer using function
    printf("for addition you can use enter 1\n");
    printf("for substraction you can use enter 2\n");
    printf("for multification you can use enter 3\n");
    printf("for division you can use enter 4\n");
    printf("for modular you can use enter 5\n");
    printf("enter the first value :");
    scanf("%d",&num1);
    printf("enter the second value :");
    scanf("%d",&num2);
    printf("enter the number here according to required operation:\n");
    scanf("%d",&num);

    switch(num){
        case 1:add(num1,num2);
        break;
        case 2:sub(num1,num2);
        break;
        case 3:mul(num1,num2);
        break;
        case 4:div(num1,num2);
        break;
        case 5:mod(num1,num2);
        break;
        default : printf("enter proper value.");

    }
    return 0;
}
    //for addition
    void add(int x ,int y){
        printf("addition is:%d",x+y);
    }
    //for substration 
    void sub(int x ,int y){
        printf("subtraction is:%d",x-y);
    }
    //for multiplication
    void mul(int x ,int y){
        printf("multification is:%d",x*y);
    }
    //for division 
    void div(int x ,int y){
        printf("division is:%d",x/y);
    }
    //for modular
    void mod(int x ,int y){
        printf("reminder is:%d",x%y);
    }