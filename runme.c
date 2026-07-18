#include <stdio.h>

int main() {
	int duration;
	hour:
	printf("You have parked for how many hours?\n");
	scanf("%d", duration);
	if (duration < 1) {
		printf("Free parking!");
	} else if (duration >= 1 && duration <= 3) {
		printf("You shall pay me %d THB\n", duration * 30);
	} else if (duration > 3 && duration <= 6) {
		printf("You shall pay me %d THB\n", duration * 25);
	} else if (duration > 6) {
		("You shall pay me %d THB\n", duration * 20);
	} else {
		printf("Invalid hours input. Retrying.\n");
		goto hour;
	}
}
