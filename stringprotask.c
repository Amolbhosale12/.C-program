#include<stdio.h>
#include<conio.h>
int main(){
	// wap to count number characters
	// count no of vowels and consonants
	// count no of words in string
	// reverse the given string 
	// find largest word 
	// find smallest word
	// reverse words only
	char name[100],temp,temp1;
	int num,i,t,count=0,vowel=0,conson=0,words=1,mid,rev=1,count1=0,max=0,min=50,count2=0,mid1,rev1=1,index,index1,index2;
    printf("enter name here:");
	gets(name);
	printf("ENTER NUMBER ACCORDING TO YOUR REQUIRMENT BET WEEN 1 TO 7:");
	scanf("%d",&num); 
	switch (num){
		case 1: for(i=0;name[i]!='\0';i++){
			    count++;
		        }
		        printf("no of characters present in this string are:%d\n",count);
		break;
		
		case 2:for(i=0;name[i]!='\0';i++){
			      if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
			      	vowel++;
				  }
				  else{
				  	if(name[i]!=' '){
					  conson++;	
					  }
				  }
		        }
		        printf("no of vowels present in string :%d\n",vowel);
		        printf("no of consonants present in string :%d\n",conson);
		break;
		
		case 3:for(i=0;name[i]!='\0';i++){
			        if(name[i]==' '){
			        	words++;
					}
		       }
		       printf("no of words present in string:%d\n",words);
		break;
		// amol-->loma
		// as we know that the count of string we need to find mid of the string to reverse string
	
		case 4: for(i=0;name[i]!='\0';i++){
			    count++;
		        }
                mid=count/2;
		        for(i=0;i<=mid;i++){
		        	temp=name[i];
		        	name[i]=name[count-rev];
		        	name[count-rev]=temp;
		        	rev++;
				}
				printf("reverse string :");
				for(i=0;name[i]!='\0';i++){
					printf("%c",name[i]);
				}
		break;
		//largest word in string
		//i am peaky blinder
		case 5: for(i=0;name[i]!='\0';i++){
			       if(name[i]==' '){
			       	    
			            if(count1>max){
			            max=count1;
			            index=i-max;
					    }
			       	count1=0;
				   }
				   else{
				   	count1++;
				   }
		        }
		        printf("\nlargest word in string is:");
		        for(i=index;name[i]!=' ';i++){
		        	 printf("%c",name[i]);
				}
		break;
		// the smallest word in string is
		// i am peaky blinder.
		case 6:for(i=0;name[i]!='\0';i++){
			       if(name[i]==' '){
			       	    
			            if(count2<min){
			            min=count2;
			            index1=i-min;
					    }
			        count2=0;
				   }
				   else{
				   	count2++;
				   }
		        }
		        printf("\nsmallest word in string is:");
		        for(i=index1;name[i]!=' ';i++){
		        	 printf("%c",name[i]);
				}
		break;
		//reverse word only
		//i am peaky blinder--> i ma ykaep rednilb
		case 7: 
		break;
		
		
		
		
	}
	
	
	
	
	
	return 0;
}