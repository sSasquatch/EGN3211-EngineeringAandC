#include <stdio.h>

int main(void)
{
	int num, temp, factor = 1;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		factor *= 10;
	}
	
	printf("Output: ");
	while (factor > 1)
	{
		factor /= 10;
		printf("%d%c", num / factor, (factor > 1) ? ' ' : '\n');
		num %= factor;
	}
	
	return 0;
}
