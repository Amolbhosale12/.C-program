/* write a program to print below number pattern.
1
121    
12321  
1234321
12321  
121    
1 
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,count=1,count1=2,count3=2;;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            if(j<=i && i<=4 || j<=8-i && i>=5){
            printf("%d",j);
            }
            else if(j==1+i && i>=2 && i<=4){
            printf("%d",count);
            count++;
            }
            else if(j<=9-i && j>=9-i && (i==5 || i==6)){
            printf("%d",count1);
            count1--;
            }
            else if(i==4 && j>=6 && j<=7){
                printf("%d",count3);
                count3--;
            }
            else if(i==3 && j==5 || i==5 && j==5){
                printf("%d",1);
            }
        }
        
        printf("\n");
    }
    return 0;
}