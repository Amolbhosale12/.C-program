/*
write a program take input from user and sort in asceding order.
*/   
#include<stdio.h>
#include<conio.h>
  int main(){
        int a[5];
        int count=1;
        int temp;
        printf("enter all number here:");
        for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        } 
    // sort array in ascending order
   
    // for(int i=0;i<5;i++){
    //     if(a[i]<0){
    //         temp=a[i];
    //         for(int j=i;j<5;j++){
    //         a[j]=a[j+1];
    //         }
    //         a[(5)-count]=temp;
            
    //     }
        
    //     count++;
    // }
    
    //sort in asceding order.
    for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
        if(a[i]>a[j]){
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }

      }

    }
    printf("array in asceding oreder:");
    printf("\n");
      for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
      }
}
