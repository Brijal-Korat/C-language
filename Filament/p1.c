/*
Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter any string: nayan

Output:
Given string is a Palindrome.

------------------------------------------------

For example,
Input:
Enter any string: hello

Output:
Given string is not a Palindrome.
*/

#include<stdio.h>

main(){
	
	int i,length,rev;
	char name[20];
	
	printf("Enter any name you want: ");
	gets(name);
	
	for(length=0 ; name[length] != '\0' ; length++);
	
	for(i=0; i<length/2; i++){
		if(name[i] != name[length-i-1]){
			rev=1;
			break;
		}
	}
	
	if(rev==0){
		printf("It is Palindome..!");
	}
	else{
		printf("It is not Palindrome..!");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
/*	
	
	char string[25], reverse_string[25] = {'\0'};
    int i, length = 0, flag = 0;
 
    printf("Enter a string \n");
    gets(string);
    
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    
    printf("The length of the string '%s' = %d\n", string, length);
    for (i = length - 1; i >= 0 ; i--)
    {
        reverse_string[length - i - 1] = string[i];
    }
 
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (reverse_string[i] != string[i])
            flag = 0;
    }
    
    if (flag == 1)
       printf ("%s is a palindrome \n", string);
    else
       printf("%s is not a palindrome \n", string);
       
       
    */
       
}
