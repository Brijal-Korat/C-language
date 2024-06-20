/*
WAP to make toggle case variable in string.

Output :
	Enter any name: BriJAl kOrAT
	Your Name : BriJAl kOrAT

	Converted name in capital to small :-
	bRIjaL KoRat

*/

#include<stdio.h>

main(){
	char name[20];
	
	printf("Enter any name: ");
	scanf("%[^\n]",&name);
	
	printf("Your Name : %s\n\n",name);
	
	int i;
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i] += 32;
		}
		else if(name[i]>=97 && name[i]<=122)
		{
			name[i] -= 32;
		}
	}
	
	printf("Converted name in capital to small :- \n%s",name);
	
}
