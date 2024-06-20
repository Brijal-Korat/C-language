/*
Enter any name: brijal korat
Your Name : brijal korat



Name : Brijal Korat
*/

#include<stdio.h>

main(){
	char name[20];
		
	printf("Enter any name: ");
	scanf("%[^\n]",&name);
	
	printf("Your Name : %s\n\n",name);
	
	int i;
	
	for(i = 0 ; name[i] != '\0' ; i++)
	{
		if(name[i]==32)
		{
			if(name[i+1]>=97 && name[i+1]<=122)
			{
				name[i+1]-=32;
			}	
		}
		if(name[0]>=97 && name[0]<=122)
		{
			name[i] = name[0] - 32;
		}
	}
	
	printf("\n\nName : %s",name);
}
