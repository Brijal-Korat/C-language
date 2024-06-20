#include<stdio.h>

main(){
	int score;
	
	printf("Enter Your Score: ");
	scanf("%d",&score);
	
	if (score >= 90 && score <= 100) {
        printf("The grade you got is A..!\n");
    } else if (score >= 80 && score < 90) {
        printf("The grade you got is B..!\n");
    } else if (score >= 70 && score < 80) {
        printf("The grade you got is C..!\n");
    } else if (score >= 60 && score < 70) {
        printf("The grade you got is D..!\n");
    } else if (score >= 50 && score < 60) {
        printf("The grade you got is E..!");
    }else if(score >= 40 && score < 50){
    	printf("You're FAIL..!");
	} else {
        printf("The score you entered is INVALID..!\n");
    }
}
