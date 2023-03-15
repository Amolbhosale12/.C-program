/*
write a program to take input from user side and in the form of number and 
calculate factorial of that number.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void fact(int x);

int main(){
int num;
printf("enter the value here:");
scanf("%d",&num);
fact(num);

    return 0;
}

void fact(int x){
    int result=1;
    while(x!=0){
        result=result*x;
        x--;
    }
    printf("%d",result);
}