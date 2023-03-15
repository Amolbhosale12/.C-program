#include<stdio.h>
#include<conio.h>
    int main(){
    int arr[6];
    int k;
    
    printf("enter the values here:");
    for(int i=0;i<=5;i++){
    scanf("%d",&arr[i]);
    }
             // write here your logic
             // this series adjust into ascending order
             //for example13524-12345(like that we want to print it or store in it)
        for(int i=0;i<=5;i++){
                for(int j=(i+1);j<=5;j++){
                      if(arr[i]>arr[j+1]){
                      int temp=arr[j+1];
                      arr[j+1]=arr[i];
                      arr[i]=temp;
                      
                      }
                }
        }
    
            printf("enter the index value");
            scanf("%d",&k);
             // to print k th smallest value 
             printf("highest value is :%d",arr[k]);
        return 0;
}