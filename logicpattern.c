#include<stdio.h>
#include<conio.h>
int main(){
    int count=1,count1=4;
    int count2=2 ,count3=3;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=7;j++){
            if(j==1 && i<=4){
                printf("%d",count);
                count++;
            }
            else if(j==1 && i>=5){
                printf("%d",count1);
                count1--;
            }
            else if(j==3 && i>=2 && i<=4){
                printf("%d",count2);
                count2++;

            }
            else if(j==5 && i>=3 && i<=4){
                printf("%d",count3);
                count3++;

            }
            else if(j==2 && i>=2 && i<=7 || j==4 && i>=3 && i<=6 || j==6 && i>=4 && i<=5){
                printf("*");

            }

            

        }
        printf("\n");
    }
    return 0;
}