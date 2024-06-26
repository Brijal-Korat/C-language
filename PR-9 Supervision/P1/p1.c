/*
Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files. 

Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69
*/

#include <stdio.h>

int main() {
	
    FILE *evenFp, *oddFp;
    int i;

    evenFp = fopen("evenNumbers.txt", "w");
    oddFp = fopen("oddNumbers.txt", "w");

    if (evenFp!='\0' || oddFp!='\0') 
	{
		printf("File Successfully Opened..!");
		
        fprintf(evenFp, "Even Numbers are :- \n");
    	fprintf(oddFp, "Odd Numbers are :- \n");
    	
	    for (i = 50; i <= 70; i++) 
		{
	        if (i % 2 == 0) 
			{
	            fprintf(evenFp, "%d", i);
	            if (i != 70){
	            	fprintf(evenFp, ", ");
				}
	        }
			else 
			{
	            fprintf(oddFp, "%d", i);
	            if (i != 69){
	            	fprintf(oddFp, ", ");
				}
	        }
	    }
	    
	    fclose(evenFp);
	    fclose(oddFp);
    }
    else{
    	printf("File doesn't open..!");
	}

    

    

}

