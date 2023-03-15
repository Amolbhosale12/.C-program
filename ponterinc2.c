#include<stdio.h>
#include<conio.h>
int main(){
    int num,result=1;
    //to find factorial of given number
    printf("ENTER THE NUMBER HERE:");
    scanf("%d",&num);
    int *ptr;
    ptr=&num;
    for(int i=1;i<=*ptr;i++){
       result=result*i;
    }
    printf("factorial of given number is:%d",result);

    return 0;
}