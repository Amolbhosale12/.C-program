/*
write a program to check year is leap year or not.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    printf("enter the year here:");
    int year;
    scanf("%d",&year);
    // to check year is leap or not.
    if(year%400==0){
        printf(" leap year");
    }
    else if(year%100==0){ 
        printf("not leap year");
    }
    else if(year%4==0){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
    return 0;
}