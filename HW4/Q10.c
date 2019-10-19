#include <stdio.h>

float power(int base, int ex)
{
	if (ex == 0)
		return 1;
	
	if (ex > 0)
		return (float) base * power(base, ex - 1);
	else
		return 1 / power(base, -ex);
}

int main(void)
{
	int base, ex;
	float result;
	
	printf("Enter the base: ");
	scanf("%d", &base);
	
	printf("Enter the exponent: ");
	scanf("%d", &ex);
	printf("\n");
	
	result = power(base, ex);
	
	printf("The result is %f.\n", result);
	
	return 0;
}
