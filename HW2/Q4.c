#include <stdio.h>

int main(void) {
	int num1, num2, sum = 0, i;
	
	printf("Enter a small value: ");
	scanf("%d", &num1);
	
	printf("Enter a large value: ");
	scanf("%d", &num2);
	
	if(num1 < num2) {
		for(i = num1; i <= num2; i++)
			sum += i;
		printf("The sum of the integers between %d and %d is: %d\n", num1, num2, sum);
	}
	else {
		printf("Invalid input!\n");
	}
	
	return 0;
}