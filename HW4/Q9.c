#include <stdio.h>

void pattern1(int n)
{
	int i;
	
	if (n == 0)
		return;

	for (i = 1; i <= n; i++)
		printf("%d%c", i, (i != n) ? ' ' : '\n');
	
	pattern1(n - 1);
}

void pattern2(int n, int i)
{
	int j;
	
	if (i == n + 1)
		return;

	for (j = 1; j <= i; j++)
		printf("%d%c", j, (j != i) ? ' ' : '\n');
	
	pattern2(n, i + 1);
}

int main(void)
{
	int n;
	
	printf("Enter n: ");
	scanf("%d", &n);
	printf("\n");
	
	if (n < 1)
		return 1;
	
	printf("Pattern 1\n");
	printf("---------\n");
	pattern1(n);
	printf("\n");
	
	printf("Pattern 2\n");
	printf("---------\n");
	pattern2(n, 1);
	printf("\n");
	
	return 0;
}
