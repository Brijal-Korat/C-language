// Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a do while loop

#include<stdio.h>

main(){
	int a,b,sum,cube;
	
	printf("Enter the starting number: ");
	scanf("%d",&a);
	printf("Enter the ending number: ");
	scanf("%d",&b);
	
	do{
		if(a%2==0){
			printf("%d\n",a);
			cube=a*a*a;
			sum+=cube;
		}
		a++;	
	}while(a<=b);
	
	printf("The cube of sum of all even numbers: %d\n\n",cube);
	printf("The sum of all even numbers is: %d\n\n",sum);
	
}
