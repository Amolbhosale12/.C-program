// write a program to store value in array and maintain in ascending order.
#include<stdio.h>
#include<conio.h>
void ascendingOrder(int a[]);// function declaration.
int main(){
    printf("enter all value here:");
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    // function calling
    ascendingOrder(a);// when we pass variable we alway pass base address of variable whatever like array ,pointer ,string

    return 0;
}
void ascendingOrder(int a[]){
    int *p;
    p=a;
    printf("arry before sorting in ascending order.");
    for(int i=0;i<5;i++){
        printf("%d  ",p[i]);
    }
    // here we apply the logic of ascending order.
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(p[i]>p[j]){
                int temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    printf("\n");
    printf("after sorting array :");
    for(int i=0;i<5;i++){
        printf("%d  ",a[i]);
    }
    
}
