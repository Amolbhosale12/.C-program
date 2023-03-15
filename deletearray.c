//take input array from user and delete element according user 
#include<stdio.h>
#include<conio.h>
int main(){
    // enter array here
    // 9 5 4 3 5 --> 9 4 3 5 user enter 1 then delete value at index which is entered by user 
    int size;
    int index;
    printf("enter size of array  here:");
    scanf("%d",&size);
    printf("enter the index here:");
    scanf("%d",&index);
    int array[size]; 
    // we can use loop for take input array
    printf("enter element in array:");
    printf("\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    // write your logic here:
    for(int i=index;i<size;i++){
        array[i]=array[i+1];
    }
    //to display
    printf("after removing element :");
    printf("\n");
    for(int i=0;i<size-1;i++){
        printf("%d",array[i]);
        printf("\n");
    }
    return 0;
}