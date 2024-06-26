// WAP to find area of a Interest 

#include<stdio.h>

void main()
{
	int p,r,n;
	float ans;
	
	printf("Enter Interest :- ");
	scanf("%d",&p);
	scanf("%d",&r);
	scanf("%d",&n);
	
	ans=p*r*n/100;
	printf("Answer is --> %.2f",ans);
}
