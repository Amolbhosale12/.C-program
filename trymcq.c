#include<stdio.h>
#include<conio.h>
int main(){
    // to reverse all digit number
    // take input from user side and print it
    // we can store 4 digit 
    int num;
    printf("enter the value here:");
    scanf("%d",&num);
    printf("before reversing number\n");
    printf("num is:%d",num);
    //num=1234
    int lastdigit=num%10;
    int num1=num/10;
    int thirddigit=num1%10;
    int num2=num1/10;
    int secdigit=num2%10;
    int num3=num2/10;
    int firstdigit=num3%10;
    // we got a single digit lets go to convert into reverse direction
    int result=(lastdigit*1000)+(thirddigit*100)+(secdigit*10)+(firstdigit*1);
    printf("\nafter the reversing number");
    printf("\nnum is:%d",result);
    return 0;
}