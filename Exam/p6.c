#include <stdio.h>

struct empInfo {
	char name[20];
	char role[20];
};

void main()
{
	int n;
	
	printf("Enter number of employee: ");
	scanf("%d",&n);
	
	struct empInfo e1[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\n");
		fflush(stdin);
		printf("Enter your name: ");
		gets(e1[i].name);
		printf("Enter your role :- ");
		gets(e1[i].role);
	}
	printf("\n\n\n");
	
	FILE *fp;
	fp = fopen("data.txt","w");
	
	if(fp!=NULL){
		for(i=0; i<n; i++){	
			printf("\n\n");
			printf("%s\n",e1[i].name);
			printf("%s\n",e1[i].role);
			
			fprintf(fp,"\n\n");
			fprintf(fp,"Name :- %s\n",e1[i].name);
			fprintf(fp,"Role :- %s\n",e1[i].role);
		}
		
		fclose(fp);
	}
	else{
		printf("File doesn't open..!");
	}
	
	
}
