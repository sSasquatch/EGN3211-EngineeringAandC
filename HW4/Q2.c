#include <stdio.h>

int main(void)
{
	int i, num = 0, sum = 0;
	
	printf("*********************\n");
	printf("Enter -1 to terminate\n");
	printf("*********************\n");
	
	while (num != -1)
	{
		printf("\nInteger: ");
		scanf("%d", &num);
		
		if (num < -1)
		{
			printf("Invalid input!\n");
		}
		else if (num == -1)
		{
			printf("Exiting the program...\n");
		}
		else
		{
			for (i = 1; i <= num; i++)
				sum += i;
			printf("The sum of integers less than or equal to %d is %d\n", \
				num, sum);
		}
	}
	
	return 0;
}
