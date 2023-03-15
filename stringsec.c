#include<stdio.h>
#include<conio.h>
int main(){
    //problem 2
    // write a program to sortnames in alphabetical order 
    int size;
    printf("enter no of names:");
    scanf("%d",&size);
    //if we want to no of names the we can use two dimensional charater 
    char names[5][100];
    printf("enter all names here:");
    for(int i=0;i<size;i++){
        gets(names[i]);
    }
    // to display the output which is given by user.
    printf("output will be:");
    for(int i=0;i<size;i++){
        printf("%s\n",names[i]);
    }

    return 0;
}