#include <stdio.h>

int main() {
	int menucode;
	retry:
	printf("Menu code: \t");
	scanf("%d", &menucode);
	
	switch (menucode) {
		case 1: 
			printf("
