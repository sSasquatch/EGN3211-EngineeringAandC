#include <stdio.h>

int main(void)
{
	int i, j, k, num, temp_num;
	
	printf("Enter size: ");
	scanf("%d", &num);
	temp_num = num;
	
	if (num < 1)
		return 1;
	
	for (i = 0; i < num; i++)
	{
		for (j = temp_num - 1; j > 0; j--)
			printf(" ");
		for (k = num; k > 0; k--)
			printf("*");
		printf("\n");
		temp_num--;
	}
	
	return 0;
}
