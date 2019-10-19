#include <stdio.h>

int main(void)
{
	int years, months, days, total;
	
	printf("Enter years: ");
	scanf("%d", &years);
	
	printf("Enter months: ");
	scanf("%d", &months);
	
	printf("Enter days: ");
	scanf("%d", &days);
	
	printf("\n");
	
	if(years<0 || months<0 || days<0)
	{
		printf("Error: one or more input is negative.\n");
		return 1;
	}
	
	total = (years*365) + (months*30) + days;
	
	printf("This duration is: %d days\n", total);
	
	return 0;
}