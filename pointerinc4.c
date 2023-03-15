#include<stdio.h>
#include<conio.h>
int main(){
    int array[5];
    int array1[5];
    int *ptr[5];
    // for no of inputs we can use for loop.
    printf("enter the value here:");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    // sorting using pointer.
    // we need pointer array to store the address of all value which are store in array.

    for(int i=0;i<5;i++){
        ptr[i]=&array[i];
    }
    //to display pointer array 
    //     for(int i=0;i<5;i++){
    //     printf("%d\n",*ptr[i]);
    //  }

    //to store data in another array
    
    for(int i=0;i<5;i++){
        array1[i]=*ptr[i];
    }
    printf("another array using pointer ");
     for(int i=0;i<5;i++){
        printf("%d\n",array1[i]);
    }



    // //to apply sorting logic
    // for(int i=0;i<5;i++){
    //     for(int j=i+1;j<5;j++){
    //         int *ptr[5];
    //         if(ptr[i]>ptr[j]){
    //             int temp=ptr[j];
    //             ptr[j]=ptr[i];
    //             ptr[i]=temp;

    //         }
    //     }
    // }
    // printf("after ascending :");
    // for(int i=0;i<5;i++){
    //     printf("%d\n",ptr[i]);
    // }




    return 0;
}