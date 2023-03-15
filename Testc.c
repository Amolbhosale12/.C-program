#include<stdio.h>
#include<conio.h>

int findMax(int a[]);// function declaration

int main(){ 
     int a[5];// array to store value;
     printf("enter five array here:");
     for(int i=0;i<5;i++){// here we take input from user side.
        scanf("%d",&a[i]);
     }
     int result=findMax(a);//function calling
     printf("max value from array is:%d",result);
    return 0;
}

int findMax(int a[]){// function defination.
    int *p;
    p=a;
    int max=0;
    for(int i=0;i<5;i++){
        if(p[i]>max){
            max=p[i];
        }
    }
    return max;
}