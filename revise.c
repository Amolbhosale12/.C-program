#include<stdio.h>
#include<conio.h>
int main(){
    int i;
    // take input from user side
    printf("enter the value here:");
    int array[5];
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    printf("to display the input value");
    // if we want to display the array use below logic
    for(int i=0;i<5;i++){
        printf("\n%d",array[i]);
    }
    printf("\n%d",&array);
    printf("\n%d\n",&array+1);
    printf("%d",&array[1]);





    
    return 0;
}