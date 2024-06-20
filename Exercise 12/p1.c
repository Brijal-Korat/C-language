//WAP to find the sum of all elements and also find the average of element. 

#include<stdio.h>

main(){
	int a;
	
	printf("Enter the size of array: ");
	scanf("%d",&a);
	
	int arr[a],i,sum=0;
	
	for(i=0;i<a;i++){
		printf("arr[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n");
	printf("The all elements are:- \n");
	
	for(i=0;i<a;i++){
		printf("%d ",arr[i]);
		sum+=arr[i];
	}
	
	printf("\n\n");
	printf("The sum of all elements is:- \n%d\n\n",sum);
	
	int average=sum/a;
	printf("The average of sum of all elements is:- \n%d",average);
}
