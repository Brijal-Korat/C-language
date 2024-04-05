#include<stdio.h>

main(){
	int age;
	
	printf("Enter The Age : ");
	scanf("%d",&age);
	
	if(age>=1 && age<=12){
		printf("The Age is You have Entered is YOUNGER..!");
	}
	else if(age>=13 && age<=19){
		printf("The Age is You have entered is TEENAGERS..!");
	}
	else if(age>=20 && age<=64){
		printf("The Age is You have entered is ADULT..!");
	}
	else if(age>=65){
		printf("The Age is You have entered is SENIOR..!");
	}
	else{
		printf("The age you have entered is invalid..!");
	}
}
