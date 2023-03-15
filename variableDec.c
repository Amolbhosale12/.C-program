#include<stdio.h>
#include<conio.h>
int main(){
    // if we want to declare the variable the use meaningfull name like 
    // to make the code more readable
    //const int myNum=15;
     //myNum=10;//we use const  for use read only purpuse
    //printf("%d",myNum);
    // if we use comparision operator the output is one or zero
    // if we dont know about data type size then we can use sizeof() function to find the size of data type
   // int a;
   // int b=sizeof(a);
   // printf("the size of integer is:%d",b;
   //different way to display or declared array 
   //int array[];
   int array[5];
   array[0]=13;
   array[1]=14;
   array[2]=15;
   array[3]=16;
   array[4]=17;
 // if we the loop for print all data of array we use loop what ever you want.
 //for(int i=0;i<5;i++){
 //   printf("%d\n",array[i]);
 //}
 // let come to another one way to declared the array is as follows
 //int arrayd[]={12,24,46,57,78};
 // in this above array declaration we insert data according to your requirment
 // in this array we do not mention the size of array that way the we insert data according your requirment
 // if we want to print data then use loop what ever you want
 //  to print all  data in it
 for(int i=0;i<5;i++){
    printf("%d\n",array[i]);
 }


    return 0;
}