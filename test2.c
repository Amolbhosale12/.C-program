#include<stdio.h>
#include<conio.h>
int main(){
    // focus on techanical knowledge and then move to communication 
    //lower to upper string
    char name[20];//make variable to store string
    printf("enter name here:");
    gets(name);
    //
    for(int i=0;name[i]!='\0';i++){

        if(name[i]>='a' && name[i]<='z'){
            name[i]=name[i]-32;
        }
        else{
            if(name[i]==' '){
                continue;
            }
        }
    }
    // to display string in upper case
    for(int i=0;name[i]!='\0';i++){
        printf("%c",name[i]);
    }

    return 0;
}