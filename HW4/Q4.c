#include <stdio.h>

int main(void)
{
	int i, j, num;
	
	printf("Enter size: ");
	scanf("%d", &num);
	
	if (num < 1)
		return 1;
	
	for (i = 0; i < num; i++)
	{
		printf("*");
		for (j = 0; j < num; j++)
			printf(" ");
		printf("*\n");
	}
	
	for (i = 0; i < num + 1; i++)
		printf("*");
	printf("*\n");
	
	return 0;
}
