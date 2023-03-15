#include<stdio.h>
#include<conio.h>
int s=0;
void sumeven(int x);

int main(){
    int num;
    //to calculate sum of all even number using recursion.
    printf("enter the number here:");
    scanf("%d",&num);
    sumeven(num);
    return 0;
}

void sumeven(int x){
    if(x!=0){
        if(x%2==0){
        s=s+x;
        }
        --x;
        sumeven(x);
    }
    else{
        printf("sum of all even number is: %d",s);
    }
    
    
}