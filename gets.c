#include<stdio.h>
#include<conio.h>
int main(){
    // if we want limited character input in string then  we can use fgets() function as follow
    char name[30];
    printf("enter input here:");
    gets(name);
    printf("name is:");
    puts(name);
    return 0;
}