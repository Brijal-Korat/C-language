#include<stdio.h>

main(){
	int html , css , media_query , j_query , bootstrap , total_marks;
	float percentage;
	
	printf("Enter the marks of HTML : ");
	scanf("%d",&html);
	printf("Enter the marks of CSS : ");
	scanf("%d",&css);
	printf("Enter the marks of Media_Query : ");
	scanf("%d",&media_query);
	printf("Enter the marks of J_Query : ");
	scanf("%d",&j_query);
	printf("Enter the marks of Bootstrap : ");
	scanf("%d",&bootstrap);
	
	printf("\n\n\n");
	
	total_marks= html + css + media_query + j_query + bootstrap;
	printf("The Total_Marks of Yor All Subjects is :- %d\n\n",total_marks);
	
	percentage=total_marks*100/500;
	printf("The Percentage You've got is :- %.2f\n\n\n",percentage);
	
	if(percentage>90){
		printf("The Grade You got  A+..!");
	}
	else if(percentage>80 && percentage<=90){
		printf("The Grade You got is A..!");
	}
	else if(percentage>70 && percentage<=80){
		printf("The Grade You got is B+..!");
	}
	else if(percentage>60 && percentage<=70){
		printf("The Grade You got is B..!");
	}
	else if(percentage>50 && percentage<=60){
		printf("The Grade You got is C..!");
	}
	else if(percentage>40 && percentage<=50){
		printf("The Grade You got is D..!");
	}
	else{
		printf("You're Fail...!");
	}
}
