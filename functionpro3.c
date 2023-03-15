#include<stdio.h>
#include<conio.h>
void evensum();
void oddsum();

int main(){
    evensum();
    printf("\n");
    oddsum();

    return 0;
}
//for even number
void evensum(){
    int sumeven=0;
    for(int i=1;i<=50;i++){
        if(i%2==0){
            sumeven=sumeven+i;
        }
    }
    printf("sum of all sum element between 1 to 50:%d",sumeven);
}
//for odd number
void oddsum(){
    int sumodd=0;
    for(int i=1;i<=50;i++){
        if(i%2!=0){
            sumodd=sumodd+i;
        }
    }
    printf("sum of all odd element between 1 to 50:%d",sumodd);
}