#include<stdio.h>
#include<conio.h>
int main(){
    int c=1;
    int sum=0;
    int temp=0;
    int k=2;
    int t=3;
    int l=4;
    for(int i=1;i<=5;i++){
            sum=c+sum;
            temp=sum;

            for(int j=1;j<=9;j++){
                if(j>=1 && j<=i){
                    
                    printf("%d ",temp);
                }
                temp++;
                if(j-i==1 && i!=1){
                    
                    printf("%d ",k);
                    k+=2;
                }
                if(j-i==2 && i!=2 && i!=1){
                    printf("%d ",t);
                    t+=2;
                }
                if(j-i==3 && i>3){
                    printf("%d ",l);
                    l+=2;
                }
                if(j-i==4 && i>4){
                    int p=5;
                    printf("%d",p);
                }
            }
            printf("\n");
    }
    return 0;
}
/*
    1
    2 3 2
    3 4 5 4 3
    4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5
*/