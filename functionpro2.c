/*
write a program to calculate simple and compound interest

*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void simple(int p,int r, int t );
void compound(int p1 ,int r1,int t1, int n );

int main(){
    int p,r,t;
    int p1,r1,t1,n;
    printf("enter the value of p ,r and t for imple interest");
    scanf("%d %d %d",&p,&r,&t);
    printf("enter the value of p1 ,r1,t1 and n");
    scanf("%d %d %d %d ",&p1,&r1,&t1,&n);
    simple(p,r,t);
    printf("\n");
    compound(p1,r1,t1,n);

    return 0;
}
//for simple interest
void simple(int p,int r, int t ){
    int result =p*(1+r*t);
    printf("simple interest is:%d",result);
}
//for compound interest
void compound(int p1 ,int r1,int t1, int n ){
    int result1,result2,result3,fresult;
    result1=r1/n;
    result2=1+result1;
    result3=pow((result2),(n*t1));
    fresult=p1*result3;
    printf("compound interest is:%d",fresult);
}
