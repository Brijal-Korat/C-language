#include<stdio.h>

main(){
	
	int salary, hra, da, ta, gross_salary;
	
	printf("Enter Your Salary : ");
	scanf("%d",&salary);
	/*
	printf("Enter The Value of HRA : ");
	scanf("%d",&hra);
	printf("Enter The Value of DA : ");
	scanf("%d",&da);
	printf("Enter The Value of TA : ");
	scanf("%d",&ta);
	*/
	
	hra=(salary*10)/100;
	da=(salary*5)/100;
	ta=(salary*8)/100;
	
	gross_salary=salary+hra+da+ta;
	printf("Your Gross_Salary is :- %d",gross_salary);
}
