#include<stdio.h>
#include<conio.h>
int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=5;j++){
            if(j<=i && i<=5){
                printf("%d",j);
            }
            else if(j<=11-i && i>=6){
                printf("%d",j); 
            }
        }
        printf("\n");
    }
    return 0;
}
/*

1
12   
123  
1234 
12345
12345
1234
123
12
1

*/