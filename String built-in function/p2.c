/*
Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456

Output:
Login Successful...

-----------------------------------------

For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456

Output:
Login Failed. Invalid Credentials.
*/

#include<stdio.h>

main(){
	int i, upr=0, lwr=0, num=0, spe=0;
	
	char pwd[10], mail[25];
	
	printf("Enter information :- \n\n");
	
	printf("Enter your email: ");
	gets(mail);
	
	printf("Create your password: ");
	gets(pwd);
	
	
	if(pwd[i]>=65 && pwd[i]<=90)
		upr++;
		
	if(pwd[i]>=97 && pwd[i]<=122)
		lwr++;
		
	if(pwd[i]>=48 && pwd[i]<=57)
		num++;
		
	if(pwd[i]=='@' || pwd[i]=='#' || pwd[i]=='_' || pwd[i]=='-')
		spe++;
	
	if(strcmp(mail,"admin@gmail.com")==0 && strcmp(pwd,"123456")==0)
	{
		printf("\n\nLogin successfully..");
	}
	else
	{
		printf("\n\nLogin failed..!\nPlease enter the valid password or valid email..!");
	}

}
	
