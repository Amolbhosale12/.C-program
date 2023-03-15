#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct Employee{
    int id;
    char name[10];
    int salary;
};
int main(){
    struct Employee emp[5];
    // take input from user side.

    for(int i=0;i<5;i++){
        scanf("%d %s %d",&emp[i].id,&emp[i].name,&emp[i].salary);
    }
    Employee *ptr;
    ptr=(Employee*)malloc(sizeof(Employee)*(5));

    return 0;
}