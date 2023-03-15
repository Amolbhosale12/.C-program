#include<stdio.h>
#include<conio.h>
int main(){
    int fvalue,svalue;
    printf("enter the first value here:");
    scanf("%d",&fvalue);
    printf("enter the second value here:");
    scanf("%d",&svalue);
    int *ptr1=&fvalue;
    int *ptr2=&svalue;
    int temp=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;
    printf("fvalue is:%d\n",*ptr1);
    printf("svalue is:%d",*ptr2);

    return 0;
}