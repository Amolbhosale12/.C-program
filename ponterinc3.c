#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("enter the value here:");
    scanf("%d",&num);
    int *ptr;
    ptr=&num; 
    for(int i=1;i<=10;i++){
        printf("%d\n",i*(*ptr));
    }
    return 0;
}