#include <stdio.h>

void average1(int one, int two)
{
	float avg;
	avg = (float) (one + two) / 2;
	
	printf("Printing from function average1: %f", avg);
}

float average2(int one, int two)
{
	return (float) (one + two) / 2;
}

int main(void)
{
	int one, two;
	float avg;
	
	printf("Enter integer: ");
	scanf("%d", &one);
	printf("Enter integer: ");
	scanf("%d", &two);
	printf("\n");
	
	average1(one, two);
	printf("\n\n");
	
	avg = average2(one, two);
	printf("Printing from main: %f", avg);
	printf("\n");
	
	return 0;
}
