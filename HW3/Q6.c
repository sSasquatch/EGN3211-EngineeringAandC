#include <stdio.h>

int main(void)
{
	char in;
	
	printf("Enter a character: ");
	scanf("%c", &in);
	
	if (in >= 97 && in <=122)
		printf("\nThis character is a lowercase letter.\n");
	else if (in >= 65 && in <= 90)
		printf("\nThis character is an uppercase letter.\n");
	else if (in >= 48 && in <= 57)
		printf("\nThis character is a digit 0 to 9.\n");
	else
		printf("\nThis is a special character.\n");
	
	printf("Its ASCII code is %d.\n", in);
	
	return 0;
}
