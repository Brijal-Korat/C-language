/*
Write a Program to find the square of each element of a given 1D array using a Pointer.
For example,
Input:
Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = 4
a[2] = 1
a[3] = 3
a[4] = 7

Output:
Square of each element:
4, 16, 1, 9, 49
*/

#include<stdio.h>

void main()
{
	int size;
	
	printf("Enter size: ");
	scanf("%d",&size);
	
	int arr[size];
	int *ptr[size];
	int i;
	
	for(i=0; i<size; i++)
	{
		ptr[i] = arr[i];	
	}
	
	for(i=0; i<size; i++)
	{
		printf("Enter array[%d] :- ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\nValues are ==>\n");
	for(i=0; i<size; i++)
	{
		printf("%u  ",arr[i]);
	}
	
	printf("\n\nSquares are ==> \n");
	for(i=0; i<size; i++)
	{
		int squr = arr[i] * arr[i];
		printf("%d  ",squr);
	}
	
}
