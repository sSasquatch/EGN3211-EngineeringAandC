#include <stdio.h>

int main(void) {
	int num, temp_num;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	temp_num = num % 10;
	printf("The rightmost digit is: %d\n", temp_num);
	
	num = num / 10;
	temp_num = num % 10;
	printf("The second rightmost digit is: %d\n", temp_num);
	
	return 0;
}