#include<stdio.h>

struct stud{
	int rNo;
	char name[20];
	float per;
};

main()
{
	
	int n;
	
	printf("Enter number of students :- ");
	scanf("%d",&n);
	
	struct stud s1[n];
	
	int i;
	for(i=0 ; i<n ; i++){
		system("cls");
		printf("Enter your roll no :- ");
		scanf("%d",&s1[i].rNo);
		fflush(stdin);
		printf("Enter your name :- ");
		gets(&s1[i].name);
		printf("Enter your percentage :- ");
		scanf("%f",&s1[i].per);
	}
	
	printf("\n\n");
	system("cls");
	
	for(i=0 ; i<n ; i++){
		printf("Roll no :- %d\n",s1[i].rNo);
		printf("Name :- %s\n",s1[i].name);
		printf("Percentage :- %.2f\n",s1[i].per);
		printf("\n");
	}


	
}
