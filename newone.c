#include<stdio.h>
#include<conio.h>
int  display();
int main(){
   // int res=display();
    printf("%d",display());

  
    return 0;
}
int  display(){
      int a,b;
    printf("enter the value here\n");
    scanf("%d",&a);
    printf("enter the value here\n");
    scanf("%d",&b);
    return a+b;
  
}
