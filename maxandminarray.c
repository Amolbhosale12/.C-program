#include<stdio.h>
#include<conio.h>
int main(){
   //to print array in asending direction 
   int array[5];
   for(int i=0;i<5;i++){
      scanf("%d",&array[i]);

   }
   // //3241----1234
   // //write here logic to print array in asending order
   // for(int i=0;i<5;i++){
   //    for(int j=i+1;j<5;j++){
   //       if(array[i]<array[j]){
   //          int temp=array[i];
   //          array[i]=array[j];
   //          array[j]=temp;
   //       }

   //    }

   // }
   // printf("to display asending array");
   // for(int i=0;i<5;i++){
   //    printf("\n%d",array[i]);

   // }
   // logic for maximum value
   //53241---5
   int min=array[0];
   for(int i=0;i<5;i++){
      if(array[i]<min){
         min=array[i];
      }
   }
   
   printf("minimum value is :%d",min);
   return 0;
}