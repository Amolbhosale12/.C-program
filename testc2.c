#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int c=65,b=65;
    int a=97,d=97;
    // outter loop for rows and innner loop for coloum.
    for(int i=1;i<=5;i++){
        
        for(int j=1;j<=5;j++){
            if(j<=i){
                if(j-i==0 ){
                    printf("%c ",c);
                    c++;
                }
                else if(i-j==1){
                    printf("%c ",a);
                    a++;
                }
                else if(i-j==2){
                    printf("%c ",b);
                    b++;
                }
                else if(i-j==3){
                    printf("%c ",d);
                    d++;
                }
                else if(i-j==4){
                    printf("%c ",65);

                }
                else{
                    printf(" ");
                } 
            }
        }
        printf("\n");
        // for next line.
        

    }
    return 0;
}