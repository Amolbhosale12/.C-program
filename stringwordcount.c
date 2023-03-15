#include<stdio.h>
#include<conio.h>
#include<string.h>
//wap a c program to count no of words in given string
int main(){
    char ch[100];
    int count=1;
    printf("enter the string here:");
    gets(ch);
    for(int i=0;i<=strlen(ch);i++){
        if( ch[i]==' '){
            count++;
        }

    }
    printf("on of words present in string are:%d",count);
    return 0;
}