#include<stdio.h>
#include<conio.h>
int main(){
    /*int *ptr;
    //we consider array 
    int a[]={10,20,30,40,50};
    // we can store the address of indexing 
    // by using pointer
    ptr=&a[0];
    for(int i=0;i<5;i++){
        printf("%d",*ptr);
        printf("\n");
        ptr++;
    }*/
    void *ptr;

    int a=20;
    float f=10.30;
    //if we want to store address of  all variable we can use void pointer 
   // ptr=(int*)&a;
    ptr=(float*)&f;

    //printf("%d",*(int*)ptr);
    printf("\n");
    printf("%f",*(float*)ptr);

    return 0;
}
