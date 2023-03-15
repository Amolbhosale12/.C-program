#include<stdio.h>
#include<conio.h>
int main (){
    int a=59;
    int *ptr=&a;
    printf("address of a is:%d\n",ptr);
    printf("value at this position is:%d\n",*ptr);
    ptr++;// it means ptr =ptr+1;
    printf("%d",ptr);

    return 0;
}