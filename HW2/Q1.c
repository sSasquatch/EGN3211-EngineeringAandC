#include <stdio.h>

int main(void) {
	int unit, temp, i, j;
	
	printf("Enter unit (1:Fahrenheit, 2:Celsius): ");
	scanf("%d", &unit);
	
	printf("Enter temperature: ");
	scanf("%d", &temp);
	
	if(unit == 1) {
		if(temp >= 80)
			printf("The temperature is hot!\n");
		else if(temp < 65)
			printf("The temperature is cold!\n");
		else
			printf("The temperature is cool!\n");
	}
	else if(unit == 2) {
		if(temp >= 27)
			printf("The temperature is hot!\n");
		else if(temp < 18)
			printf("The temperature is cold!\n");
		else
			printf("The temperature is cool!\n");
	}
	else {
		printf("Invalid input!\n");
	}
	
	return 0;
}