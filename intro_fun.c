#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int a[10] = {100, 206, 300, 409, 509, 601}; //Line 1
     printf("result: %d",a+1);//base address + index * size of int
    // printf("%d",a[0]); 
    // int *p[] = {a, a+1, a+2, a+3, a+4, a+5}; //Line 2 
    // printf("address of a of 0th position :%d\n",&a[1]);
    // printf("value of p at 0 th position :%d",a);

    //if we want to store address of double pointer than we can use the *** and variable name as follow 
    // int a=19;
    // int *ptr1 =&a;
    // int **ptr2=&ptr1;k
    // int ***ptr3=&ptr2;
    // printf("%d\n",**ptr3);
    // printf("%d",ptr1);

    return 0;
}