// write a program to check number is armstrong ,palindrome,duck,strong perfect number using according to user requirement.
// this is a header file where they store printf,scanf header file.(standard input,output file.)
#include<stdio.h>
#include<conio.h>
#include<math.h>
// function declaration.
void toCheckArm(int num);
void toCheckPalin(int num);
void toCheckDuck(int num);
void toCheckPer(int num);
// main method. 
int main(){
    printf("enter the number here:");
    int num;
    int c;
    scanf("%d",&num);
    printf("we follow below instruction for our requirement.");
    printf("\nenter 1 :for armstrong number.");
    printf("\nenter 2 :for duck number");
    printf("\nenter 3 :for palindrome number");
    printf("\nenter 4 :for perfect number");
    printf("\n");
    printf("enter your choice:");
    scanf("%d",&c);
    switch(c){
        case 1:toCheckArm(num);
        break;    
        case 2:toCheckDuck(num);
        break;
        case 3:toCheckPalin(num);
        break;
        case 4:toCheckPer(num);
        break;
        default:printf("Enter correct choice here.");
    }
    return 0;
}

// function declaration.
void toCheckArm(int num){
    //firstly calculate number of digit present in numner.
    int org=num;
    int org1=num;
    int rev=0;

    int s=0;
    int p;
    int count=0;//
    while(num!=0){
        num=num/10;
        count++;
    }
    while(org!=0){
        rev=org%10;
        p=pow(rev,count);
        printf("\n%d",p);
        printf("\n%d",count);
        org/=10;

    }
    // to check sum is equal to original or not.
    if(s==org1){
        printf("Number is ArmStrong number.");
    }
    else{
        printf("Number is not ArmStrong number.");
    }


}
// to check number is palindrome or not.
void toCheckPalin(int num){
    int sum1=0;
    int org2=num;
// firstly reverse that number and compare to original number.if number is same then we can call that number
// is palindrome number otherwise we can say not a palindrome number.
     while(num!=0){
      int rev=num%10;
      sum1=rev+sum1*10;
      num=num/10;
     }              
     // to compare this number to original number.
     if(sum1=org2){
        printf("Number is palindrome.");
     }
     else{
        printf("Number is not palindrome");
     }
}
 // function for to find out zero present or not in number this is duck number.
void toCheckDuck(int num){
        int rev;
        int flag=0;
        while(num!=0){
           rev=num%10;
           if(rev==0){
            flag=1;
           }
           num=num/10;
        }
        if(flag){
            printf("Number is Duck number.");
        }
        else{
            printf("Number is not Duck number.");
        }

}
// this function to check number is perfect or not 
void toCheckPer(int num){
    int sum3=0;
// to compare sum of factor of number if sum and number is equal then this number is perfect number.
     for(int i=1;i<num;i++){
        if(num%i==0){
            sum3=sum3+i;
        }
     } 
     if(sum3==num){
        printf("Perfect number");
     }
     else{
        printf("Not Perfect number");
     }

}

