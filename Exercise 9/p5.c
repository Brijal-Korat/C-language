//Write a Program to print leap years between two given numbers using a for loop.

#include<stdio.h>

main(){
	int year1,year2;
	
	printf("Enter the start year: ");
	scanf("%d",&year1);
	printf("Enter the end year: ");
	scanf("%d",&year2);
	
	for(year1=year1;year1<=year2;year1++)
	{
		if(year1%4==0){
			printf("%d\n",year1);
		}
	}
}
