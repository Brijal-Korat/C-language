//WAP to find area of a circle

#include<stdio.h>

void main()
{
	int r;
	float ans;
	
	printf("Enter Radius :- ");
	scanf("%d",&r);
	
	ans=3.14*r*r;
	printf("Answer is --> %.2f",ans);
}
