#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// fuction declaration
void firstLetterCaps(char name[]);

int main(){
    char name[20];
    printf("enter string here:");
    gets(name);
    // fuction calling
    firstLetterCaps(name);

    return 0;
}
// fuction defination.
void firstLetterCaps(char name[]){
                                    // first letter convert into capital letter.
    name[0]=name[0]-32;
    for(int i=0;name[i]!='\0';i++){ // remaining all first letter converted into capital letter.
        if(name[i]==' '){
            name[i+1]=name[i+1]-32;
        }
    }
    printf("%s",name);

}