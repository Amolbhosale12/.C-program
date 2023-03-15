#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
     // if we want to store name then we can follow some steps 
     // char ch[90]={"amol manik bhosale"};
     // printf("name is:%s",ch);

      // if i want to print name which given by user as we know we can use scanf() function but we want to store all name including space at that time we can use gets() function to store whole name 
      // for example scanf() is replaced by gets()
      // as we know if we want to use function according to requirement we can use header  file that is <srting.h>
      // what about header file - in this header file there are different function present in for example strlen(),strupr() etc 
      // if we create array of char data type  we can able to use function according to our demand but we are able to calculate length and another operation without using function it means we can use  own logic
    
    //for example to store name and print it.
      /*char a[58];
      printf("enter the name here");
      scanf("%s",&a);
      printf("user entered name is:%s",a);*/
    
    // if we want to store whole name at that we can use gets() function
    char ch1[59],ch2[48];
    printf("enter the full name here ");
    gets(ch1);
    gets(ch2);
    // printf("user full name is:%s\n",ch);
    char temp=strcat(ch1,ch2);
    printf("name of series is in capital letter :%s",temp);
    





    return 0;
}