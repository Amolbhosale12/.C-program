/*
write a program to find all words ended with given character 
for example user entered I am Programmer
character r.
the output will be programmer.
*/

#include<stdio.h>
#include<conio.h>
int main(){
    char name[50];
    char word[5];
    int diff;
    int count=0;
    printf("enter full name here:");
    gets(name);
    printf("enter character here:");
    gets(word);
    int index;
    
    for(int i=0;name[i]!='\0';i++){
        if(name[i]==' '){
            int temp=i-1;
            diff=name[temp]-word[0];
            if(diff==0){
                index=i-count;
                     // to display output
                     printf("\n");
                     for(int i=index;name[i]!=' ';i++){
                     printf("%c",name[i]);
                     }
            }
            count=0;
        }
        else{
            count++;
        }
    }

  
    return 0;
}