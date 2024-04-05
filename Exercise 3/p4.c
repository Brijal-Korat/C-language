#include<stdio.h>

main(){
	int age;
	
	printf("Enter Your Age : ");
	scanf("%d",&age);
	
	if(age>=18){
		printf("You are eligible for vote..!");
	}
	else if(age<=0){
		printf("The Age You entered is Invalid");
	}
	else{
		printf("You are not eligible for vote..!");
	}
}
