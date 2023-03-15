#include<stdio.h>
#include<conio.h>
int main(){
    for(char i='A';i<='E';i++){
        for (char j='A';j<='E';j++){
            if(j<=i){
                printf("%c",j);
                
            }

        }
        printf("\n");
    }
    return 0;
}
