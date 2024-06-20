/*
Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
Input:
Enter any string: development

Output:
Length is: 11
*/

#include <stdio.h>

void main() {
    char word[25];
	
	printf("Enter a string: ");
	gets(word);

	printf("%s\n",word);
    printf("\nLength of '%s' is: %d\n",word,strLength(word));
    
}


int strLength(char word[]) {
    int length = 0;
    
    while (word[length] != '\0') {
        length++;
    }
    return length;
}



