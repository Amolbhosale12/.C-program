#include<stdio.h>
#include<conio.h>
int f=1;
void fact(int x);

int main(){
    int num;
    //to calculate sum of all element using recursion.
    printf("enter the number here:");
    scanf("%d",&num);
    fact(num);
    return 0;
}

void fact(int x){
    if(x!=0){
        f=f*x;
        --x;
        fact(x);
    }
    else{
    printf("sum of all number is:%d",f);
    }
}