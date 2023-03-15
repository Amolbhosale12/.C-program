//our role is to reverse string using looping we can follow below some step.
//printf("before reversing string the output is :%s",name);
// without using function which is present in headere file
//first step is to calculate the count or no of character present in string

#include<stdio.h>
#include<conio.h>

int main(){
    void reverselogic(char x[]);
    char name[100],temp;
    int count=0;
    printf("enter the name here:");
    gets(name);
    reverselogic(name);
    return 0;
}

//function is used to reduse complecity and increse reusablity.
void reverselogic(char x[]){
    char temp;
     int i=0;
     int count=0;
    while(x[i]!='\0'){
        i++;
    }//
    for(int a=i-1;a>=i/2;a--){
        temp=x[count];
        x[count]=x[a];
        x[a]=temp;
        count++;
    }
    printf("after reversing:%s",x);
}
//if