// take input from user base and index then calculate the power/

#include<stdio.h>
#include<conio.h>
int main(){
    int base,index;
    
    printf("enter base value here:");
    scanf("%d",&base);
    printf("enter index value here:");
    scanf("%d",&index);
    int result=1;
    int i=1;
    while(i<=index){
        result =result*base;
        i++;
    }
    printf("power is:%d",result);
    return 0;
}