#include <stdio.h>
#include <stdbool.h>

int main() {
	bool haveKeys;
	int HP;
	bool enoughHP;
	retry:
	printf("GET v2.api.dungeon.personal.kisurus.com/player/character/stat/hp?output=int: \t");
	scanf("%d", &HP);
	key:
	printf("GET v2.api.dungeon.personal.kisurus.com/player/character/inventory/get_item?item_name=keys&output=bool: \t");
	scanf("%d", &haveKeys);
	if (HP < 0 && HP > 100)
	{
		printf("ERR: Request intercepted by intercept.dev-service.dungeon.personal.kisurus.com\n");
		printf("Thought you could overflow the counter? IN NO WAY I WOULD ALLOW THAT TO HAPPEN\n");
		goto retry;
	} else if (haveKeys != 0 && haveKeys != 1) {
		printf("api.v2.dungeon.personal.kisurus.com return 400\n");
		printf("Why would you overflow boolean???\n");
		goto key;
	}
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
