#include<stdio.h>
#include<conio.h>
int s=0;
void sum(int x);

int main(){
    int num;
    //to calculate sum of all element using recursion.
    printf("enter the number here:");
    scanf("%d",&num);
    sum(num);
    return 0;
}

void sum(int x){
    if(x!=0){
        s=s+x;
        --x;
        sum(x);
    }
    else{
    printf("sum of all number is:%d",s);
    }
}
// in recursion always remember two thinks 
// we have apply limit in every program of recursion 
// second is recursive call 
// this above two thinks are most important 