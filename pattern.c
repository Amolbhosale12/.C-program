#include <stdio.h>
#include <conio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>=1 && j<=i){
                printf("%d",j);
                printf(" ");
            }
            else if(j>=i+1 && j<=i+1){
                int a=i-1;
                if(a==0){   
                    break;
                }
                printf("%d",a);
                printf(" ");
            }
            else if(j>=2+i && j<=2+i){
                int b=i-2;
                if(b==0){
                    break;
                }
                printf("%d",b);
                printf(" ");
            }
            else if(j>=3+i && j<=3+i){
                int c=i-3;
                if(c==0){
                    break;
                }
                printf("%d",c);
                printf(" ");
            }
            else if(j>=4+i && j<=4+i){
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}                       