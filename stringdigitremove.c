#include<stdio.h>
#include<conio.h>
int main(){
    // write a program to remove all digits from string
    char name[300];
    printf("enter the full string here :");
    gets(name);
    for(int i=0;name[i]!='\0';i++){
        if(name[i]>='0' && name[i]<='9'){
            continue;
        }
        else{
            printf("%c",name[i]);
        }
        

    }

    return 0;
}