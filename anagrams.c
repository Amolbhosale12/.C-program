#include<stdio.h>
#include<conio.h>
#include<String.h>
int main(){
    // write a program to check whether both strings are anagrams or not.
    // first string -spar
    // sencond string- rasp 
    //output =both are anagrams.
    // how to check string is anagrams or not 
    // every charecter present in first string which is must be present in another string 
    // at any position. if present then print string is anagrams otherwise print string is not anagrams.

    // when we try to solve it we have one best way to solve this program
    // firstly to sort string in any way either ascending or descending order.
    // then compare each charecter if difference is other then 0 then this string is not anagrams.

    char name1[10];
    char name2[10];
    printf("enter name1 here:");
    gets(name1);
    printf("enter name2 here:");
    gets(name2);
    char temp;
    //first string in ascending order.
    for(int i=0;name1[i]!='\0';i++){
        for(int j=i+1;name1[j]!='\0';j++){
            if(name1[i]>name1[j]){
                temp=name1[i];
                name1[i]=name1[j];
                name1[j]=temp;
            }
        }
    }
    char temp1;
   
    for(int i=0;name2[i]!='\0';i++){
        for(int j=i+1;name2[j]!='\0';j++){
            if(name2[i]>name2[j]){
                temp1=name2[i];
                name2[i]=name2[j];
                name2[j]=temp1;

            }
        }
    }
    int a=strlen(name2);
    int b=strlen(name1);
    int flag=0;
    if(a==b){
        int c=0;
        // if length of string is same then compare each and every character.
        for(int i=0;name1[i]!='\0';i++){
            if(name1[i]-name2[c]!=0){
                flag=1;
                break;
            }
            c++;
        }
        if(flag==1){
            printf("String is not anagrams.");
        }
        else{
            printf("String is anagrams.");
        }
    }
    else{
        printf("string is not anagrams");
    }

    // printf("first string in ascending order:  ");
    // for(int i=0;name1[i]!='\0';i++){
    //     printf("%c",name1[i]);
    // }

     // printf("\n");
    // printf("second string in ascending order.");
    // for(int i=0;name2[i]!='\0';i++){
    //     printf("%c",name2[i]);
    // }


    return 0;
}