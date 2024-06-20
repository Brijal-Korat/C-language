//Write a Program to print odd numbers from N to 1 using for loop.

#include<stdio.h>

main(){
	int i,j;
	
	printf("Enter any number: ");
	scanf("%d",&j);
	
	for(i=j;i>=1;i--)
	{
		if(i%2==1){
			printf("%d\n",i);
		}
	}
	
	
}

