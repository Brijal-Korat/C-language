/*
WAP to make title case variable in string.

Output :

	Enter any name : brijal korat
	
	Convert 1st letter small to capital in string :-
	Brijal korat
*/

#include<stdio.h>

main(){
	
	char name[20];
	
	printf("Enter any name : ");
	scanf("%[^\n]",&name);
	
	int i;
	
	for(i = 0 ; name[i] != '\0' ; i++)
	{
		if(name[0]>=97 && name[0]<=122)
		{
			name[i] = name[0] - 32;
		}
	}
	
	printf("\n\nConvert 1st letter small to capital in string :-\n%s",name);
}
