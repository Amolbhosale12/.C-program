#include<stdio.h>
#include<conio.h>
#include<string.h>
int main (){
    char a[90];
    // char type variable 
    // when we declared variable generally block created according size which is entered by users.and also create another block which is fullfill by '0'
    //to calculate length of string with using function 
    // as we know if we want to store full name including spaces so at that time we can use gets() fuction 
    printf("enter the string here:");
    gets(a);
   //without using function we can use own logic to calculate length of string 
   // if we want reverse char array then we can use strrev() function 
   strrev(a);
   printf("%s",a);
   
    return 0;
}