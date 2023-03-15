#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    // write a program to remove middle name in string and print fist and last word of string 
    
    char name[20];
    int c;
    int d;
    printf("enter name here:");
    gets(name);
    // logic for sorting
    // we can  calculate string length 
    int count=strlen(name);
    printf("length of string is:%d",count);
    printf("\n");
    // to calculate index of last word 
     for(int i=count;name[i]!=' ';i--){
     	 c=i;
     }
     printf("index of last word:%d",c);
     printf("\n");
     // to calculate the index of first word 
     int ct=0;
     for(int i=0;name[i]!=' ';i++){
     	ct++;
	 }
	 ct++;
	 printf("first index of word:%d",ct);
     // we can insert all data in it
    //input amol manik bhosale --> amol bhosale
     for(int i=ct;name[i]!='\0';i++){
          name[i]=name[c];
          c++;
     }

     printf("\n");
     printf("%s",name);
    return 0;
}