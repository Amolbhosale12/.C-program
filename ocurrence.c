#include<stdio.h>
#include<conio.h>
int main(){
    int i,array[10];
    printf("enter the values here:");
    for(i=0;i<=9;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<=9;i++){
        printf("array[%d]--->%d\n",i,array[i]);
    }
    // sorting logic
    for(int i=0;i<=9;i++){
        for(int j=(i+1);j<=9;j++){//1234
            if(array[i]>array[j]){
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;

            }
        }
    }
    //to display array
    printf("after sorting logic");
    for(i=0;i<=9;i++){
        printf("array[%d]--->%d\n",i,array[i]);
    //to check ocurrence we can use double for loop
        int count=1;
        for(int i=0;i<=9;i++){
            if(array[i]==array[i+1]){//1 1 1 3
                count++;
            }
            else{
              printf("%d-->%d\n",array[i],count);
              count=1;

            }
        }
         
    }
    return 0;
}