#include <stdio.h>

int main(void)
{
	int grade;
	
	printf("Enter a grade: ");
	scanf("%d", &grade);
	
	printf("\n");
	if(grade<=100 && grade>=90)
		printf("The letter grade is A.\n");
	else if(grade<90 && grade>=80)
		printf("The letter grade is B.\n");
	else if(grade<80 && grade>=70)
		printf("The letter grade is C.\n");
	else if(grade<70 && grade>=60)
		printf("The letter grade is D.\n");
	else if(grade<60 && grade>=0)
		printf("The letter grade is F.\n");
	else
		printf("Error: the grade input is invalid.\n");
	
	return 0;
}