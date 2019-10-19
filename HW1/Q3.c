#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("Enter interger a: ");
	scanf("%d", &a);
	
	printf("Enter integer b: ");
	scanf("%d", &b);
	
	printf("a+b = %d+%d = %d\n", a, b, (a+b));
	printf("a-b = %d-%d = %d\n", a, b, (a-b));
	printf("a*b = %d*%d = %d\n", a, b, (a*b));
	if(b!=0)
	{
		printf("a/b = %d/%d = %d\n", a, b, (a/b));
		printf("a%%b = %d%%%d = %d\n", a, b, (a%b));
	}
	else
	{
		printf("a/b = Cannot divide by zero\n");
		printf("a%%b = Cannot divide by zero\n");
	}
	
	return 0;
}