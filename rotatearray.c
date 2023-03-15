#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int array[5],size,temp;
    printf("enter size of array here:");
    scanf("%d",&size);
    printf("enter the value here:");
    for(int i=0;i<=size;i++){
        scanf("%d",&array[i]);
    }
//printf("to display input:");
    for(int i=0;i<=size;i++){
        printf("%d",array[i]);
    }
    printf("\n");
// enter your logic here
   for(int i=0;i<=size-1;i++){
    //1 2 3 4 5----> 2 3 4 5 1
     temp=array[0];
    array[i]=array[i+1];
    
   }
   array[size]=temp;
  
   
   printf("after rotating array:");
     for(int i=0;i<=size;i++){
        printf("%4d",array[i]);
     }
    return 0;
}