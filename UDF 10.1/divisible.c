/*
 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.For example,
Input:
Enter any number: 15

Output:
The given number is divisible by both 3 & 5.

------------------------------------------

For example,
Input:
Enter any number: 10

Output:
The given number is not divisible by both 3 & 5.
*/

#include<stdio.h>

void main()
{	
	int num;
	printf("Enter Any Number :- ");
	scanf("%d",&num);
	
	digit(num);
}

int digit(int num)
{
	if(num%3==0 && num%5==0)
	{
		printf("\nThe given number %d is divisible by 3 & 5..\n",num);
	}
	else 
	{
		printf("\nThe given number %d is not divisible by 3 & 5..\n",num);
	}
}
