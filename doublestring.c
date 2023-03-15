#include<stdio.h>
#include<conio.h>
int main(){
    // to calculate length of string using pointer 
    char name[300];
    int count=0;
    printf("enter your name here:");
    gets(name);
    char *ptr;
    ptr=name;
    int i=0;
    while(ptr[i]!='\0'){
        if(ptr[i]!=' '){
            count++;
        }
        i++;
    }
    printf("the length of string is:%d",count);

    

    return 0;
}