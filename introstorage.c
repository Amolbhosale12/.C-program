#include<stdio.h>
#include<conio.h>
   // store information of 5 students using structure and display it 
    // id 
    // name
    // marks 
struct records{
             int id;
             char name[49];
             int marks;
};
int main(){

    int num;
    // if we want to store no of student data then we can use array in structure

    printf("enter no of student :");
    scanf("%d",&num);
    struct records stud[num];
    //input from user side

    printf("enter the all details of student :");
    for (int i=0;i<num;i++){
        scanf("%d %s %d\n",&stud[i].id,&stud[i].name,&stud[i].marks);
    }
    // display all details of students 

    printf("student entered details");
    for(int i=0;i<num;i++){
        printf("%d %s %d\n",stud[i].id,stud[i].name,stud[i].marks);
    }

    return 0;
}

