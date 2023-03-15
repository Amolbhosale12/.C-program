#include<stdio.h>
#include<conio.h>
int main(){
    //write a program to print no of white spaces present in given string.

    char name[50];
    printf("enter the string here:");
    gets(name);
    int i=0;
    int count=0;
    while(name[i]!='\0'){

        if(name[i]==' '){
            count++;
        }
        i++;

    }
    printf("the no of white spaces present in string is :%d",count);



    return 0;
}