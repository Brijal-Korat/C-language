#include<stdio.h>
#include<string.h>

struct bookInfo{
	char title[20];
	char name[20];
	int price;
};
main(){
	int n;
	
	printf("Enter number of books :- ");
	scanf("%d",&n);
	
	struct bookInfo b1[n];
	int i;
	
	for(i=0 ; i<n ; i++){
		printf("\n\n");
		fflush(stdin);
		printf("Enter title of book :- ");
		gets(b1[i].title);
		printf("Enter author of book :- ");
		gets(b1[i].name);
		printf("Enter price of book :- ");
		scanf("%d",&b1[i].price);
	}	
	
	printf("\n\n\nYour details :- \n");
	
	for(i=0 ; i<n ; i++){
		printf("\n\n\n");
		printf("Title of book :- %s\n",b1[i].title);
		printf("Author of book :- %s\n",b1[i].name);
		printf("Price of book :- %d",b1[i].price);
	}
}
