#include <stdio.h>

int main() {
	int menucode;
	int cup;
	retry:
	printf("Menu code: \t");
	scanf("%d", &menucode);
	cup:
	printf("Number of cups: \t");
	scanf("%d", &cup);
	if (cup <= 0) {
		printf("ERR: Invalid number of cups\n");
		goto cup;
	}
	switch (menucode) {
		case 1: 
			printf("You have selected Espresso\n");
			printf("Your subtotal is: %d\n", 55 * cup);
			break;
		case 2:
			printf("You have selected Latte\n");
			printf("Your subtotal is: %d\n", 65 * cup);
			break;
		case 3:
			printf("You have selected Cappuccino\n");
			printf("Your subtotal is: %d\n", 70 * cup);
			break;
		case 4:
			printf("You have selected Green Tea\n");
			printf("Your subtotal is: %d\n", 60 * cup);
			break;
		case 5:
			printf("You have selected Cocoa\n");
			printf("Your subtotal is: %d\n", 50 * cup);
			break;
		default:
			printf("ERR: Invalid menu code\n");
			goto retry;
	}
}