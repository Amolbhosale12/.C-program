#include<stdio.h>
#include<conio.h>
void display(int x);

int main(){
    // introdution of function.]]
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    display(num);
    
    return 0;
    }




 void display(int x){
    //always we remember that in recursion we can apply limitation if we dont use it then its move negative side
    //so we can use limit such as below line.
    if(x!=0){
       printf("hello amol bhosale\n");
       --x;
       display(x);
    }
    else{
        printf("end of recursion");
    }
}


