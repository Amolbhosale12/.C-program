// write a program to take number from user and calculate count present digit in number.
#include<stdio.h>//1234
#include<conio.h>
void reverse(int num);
int main(){
    int number;
    
    printf("enter the value here:");
    scanf("%d",&number);
    reverse(number);

    return 0;
}
void reverse(int num){
    //num 123
     int count=0;
     while(num!=0){
        num=num/10;
        count++;
     }
     printf("No.of digit present in number is:%d",count);


}