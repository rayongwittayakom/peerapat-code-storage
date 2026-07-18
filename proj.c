#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool haveKeys;
    int HP;
    int keyInput;

retry:
    printf("GET v2.api.dungeon.personal.kisurus.com/player/character/stat/hp?output=int: \t");
    scanf("%d", &HP);

key:
    printf("GET v2.api.dungeon.personal.kisurus.com/player/character/inventory/get_item?item_name=keys&output=bool: \t");
    scanf("%d", &keyInput);

    if (keyInput == 1) {
        haveKeys = true;
    } else if (keyInput == 0) {
        haveKeys = false;
    } else {
        printf("ERR: Invalid value for haveKeys\n");
        goto key;
    }

    if (haveKeys) {
        if (HP >= 50) {
            printf("POST api.v2.dungeon.personal.kisurus.com/scene/interact/unlock_chest return 204\n");
            printf("Treasure unlocked!\n");
        } else {
            printf("api.v2.dungeon.personal.kisurus.com reply with 'Insufficient health'\n");
            printf("I would really recommend healing your health right now :)\n");
        }
    } else {
        printf("Heh, you thought you could lockpick your way in right? Well it ain't happening under my watch!\n");
    }

    return 0;
}
