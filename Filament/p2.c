/*
Write a Program to count the frequency of each character in a given string.
For example,
Input:
Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 3
v => 1
e => 3
l => 1
o => 1
p => 1
m => 1
e => 3
n => 1
t => 1
*/

#include<stdio.h>

main(){
	
 	int i,j,length,count;
 	char str[100];
	
 	printf("enter any string :- ");
 	gets(str);
	
 	length=strlen(str);
	
 	printf("Frequency of each letter:\n");
	
 	for(i=0;i<length;i++){
  		count=1;
  		if(str[i]){
   			for(j=i+1;j<length;j++){
   				if(str[i]==str[j]) {
    				count++;
    				str[j]='\0';
   				}
  			}
  			printf("%c=>%d\n",str[i],count);
 		}  
 	}

}
