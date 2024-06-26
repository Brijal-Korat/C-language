//WAP to check user can vote or not.

#include<stdio.h>

void main()
{
	int age;
	
	printf("Enter the Age :- ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("You can VOTE..");
	}
	else 
	{
		printf("You cannot VOTE..");
	}
}
