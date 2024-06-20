/*
Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5
*/

#include <stdio.h>

void main() {
  	int x, y;

	printf("Enter the value of A: ");
  	scanf("%d",&x);
  	printf("Enter the value of B: ");
  	scanf("%d",&y);
	
	printf("Before swapping:\n");
	printf("x: %d\n",x);
	printf("y: %d\n\n",y);
	
	int *ptr1, *ptr2, z;
	 
	ptr1 = &x;
	ptr2 = &y;
	 
    z = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = z;

	printf("After swapping:\n");
	printf("x: %d\n",x);
	printf("y: %d\n\n",y);
}




