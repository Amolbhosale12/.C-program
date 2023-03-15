#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// function declaration.
int findMax(int a[]);

int main(){
    // take input from user
    int a[5];
    printf("enter all elemet here:");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    // fuction calling.
    int result=findMax(a);
    printf("Max value is:%d",result);

    return 0;
}
// function defination.
int findMax(int a[]){
    int max=0;
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;

}