#include<stdio.h>
#include<conio.h>
int main(){

    //if we want to print address of variable
    int a=19;
    int *ptr=&a;
    printf("address of a is:%d\n",ptr);
    printf("%d\n",&a);
    printf("value at this address is :%d",*ptr);
    return 0;
}