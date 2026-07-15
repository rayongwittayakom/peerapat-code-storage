#include <stdio.h>
#include <stdbool.h>

int main() {
	bool haveKeys;
	int HP;
	bool enoughHP;
	printf("GET v2.api.dungeon.personal.kisurus.com/player/character/stat/hp?output=int: \t");
	scanf("%d", &HP);
	printf("GET v2.api.dungeon.personal.kisurus.com/player/character/inventory/get_item?item_name=keys&output=bool: \t");
	scanf("%d", &haveKeys);
	if (haveKeys = 1) 
	{
		if (HP >= 50)
		{
			printf("POST api.v2.dungeon.personal.kisurus.com/scene/interact/unlock_chest return 204\n");
			printf("Treasure unlocked!\n");
		} else if (HP < 50) 
		{
			printf("api.v2.dungeon.personal.kisurus.com reply with 'Insufficient health'\n");
			printf("I would really recommend healing your health right now :)\n");
		}
	} else {
		printf("Heh, you thought you could lockpick your way in right? Well it ain't happening under my watch!\n");
	}
	return 0;
}
