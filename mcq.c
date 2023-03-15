#include<stdio.h>
#include<conio.h>
int main(){
  int i,j;
  int p=1;
  for (i=1;i<=5;i++){
     p=1;
       for(j=1;j<=5;j++){
         if(j>=6-i){
         printf("%d",p);
         p++;
       }
       else{
         printf(" ");
       }
        
     }
    printf("\n");
  }
    return 0;
}
/*    1
     12
    123
   1234
  12345
*/