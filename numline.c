/* write a program to print below pattern.
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

*/


#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    int count =1;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>=6-i && j<=4+i){
            printf("%d ",count);
            count++;
            }
            else{
            printf("  ");
            }
        }
        printf("\n");
        count =1;
    }
    return 0;
}