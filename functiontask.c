#include<stdio.h>
#include<conio.h>
void reverse(int num);
int main(){
    int number;
    //reverse number using function
    printf("enter the value here:");
    scanf("%d",&number);
    reverse(number);

    return 0;
}
void reverse(int num){
    //num 123
     int lastdigit,reverse=0;
     while(num!=0){
        lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        num=num/10;
     }
     printf("reverse num is:%d",reverse);


}