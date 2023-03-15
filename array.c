#include<stdio.h>
#include<conio.h>
int main (){
    int array[5];
    printf("enter the input from user");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<5;i++){
        printf("a[%d]=%d\n",i,array[i]);
    }
// ascending order     14352---->12345
   for(int i=0;i<5;i++){
    for(int j=(i+1);j<5;j++){
        if(array[i]>array[j]){
            int temp =array[j];
            array[j] =array[i];
            array[i] =temp;

        }
    }
   }
   printf("ascending order");
   //to display array 
   for(int i=0;i<5;i++){
    printf("%d\n",array[i]);
   }

// dscending order
   for(int i=0;i<5;i++){
    for(int j=(i+1);j<5;j++){
        if(array[i]<array[j]){
            int temp =array[j];
            array[j] =array[i];
            array[i] =temp;

        }
    }
   }
   printf("dscending order");
   //to display array 
   for(int i=0;i<5;i++){
    printf("%d\n",array[i]);
   }

// max value
   int max=array[0];
for(int i=0;i<5;i++){
    if(array[i]>max){
        max=array[i];
    }

}
printf("to display max value in array");
printf("%d",max);



    return 0;
}