#include<stdio.h>
#include<conio.h>
int main(){
    //write a program to print largest and smallest word from given sentence
    // for this problem we need one think that assume examle 
    // i am programmer-->programmer
    char sentence[300];
    int count=0;
    int max=0,index=0;
    printf("enter sentence here:");
    gets(sentence);
    // we can use for loop to trace length of sentence.
    // in this logic we need to apply space of checking last word .
    for(int i=0;sentence[i]!='\0';i++){// this loop continue upto '\0'.
        if( sentence[i]==' '){// in this we calculate the length of word in else part
            if(count>max){// in this loop we store only max length count but we dont know the exact position of index 
                max=count;
                index=i-max;// at that time we know the last index value if we substract max length the we got exact position of index.
            }
            count=0;
        }
        else{
            count++;
        }

    }
    printf("largest count is:%d\n",max);// those word large these word length count display here.
    printf("largest word in string is:");
    for(int i=index;sentence[i]!=' ';i++){// exact position start from index and largest word of
        printf("%c",sentence[i]);
    }
    return 0;
} 
 