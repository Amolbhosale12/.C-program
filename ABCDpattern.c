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

































// to find question of java?
    // select q.ques,q.op1,q.op2,q.op3,q.op4,q.ans from question q join qtos qs on q.qid=qs.qid_fk join subject s on qs.subid_fk =s.subid where s.name='JAVA';
}