#include <stdio.h>
#include <stdbool.h>

int main() {
	bool haveKeys;
	int HP;
	bool enoughHP;
	printf("GET /player/character/stat/hp?output=int: \t");
	scanf("%d", &HP);
	printf("GET /player/character/inventory/get_item?item_name=keys&output=bool: \t");
	scanf("%d", &haveKeys);
	if (haveKeys = 1) 
	{
		
  
