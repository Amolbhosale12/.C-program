#include<stdio.h>
#include<conio.h>
int main(){
        for(int i=1;i<=5;i++){
             int c=65;
            for(int j=1;j<=5;j++){
                if(j<=6-i){
                    printf("%c",c);
                    c++;
                }
            }
            printf("\n");

        }
    return 0;
}
/*

ABCDE
ABCD
ABC
AB
A

*/
