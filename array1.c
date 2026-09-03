#include <stdio.h>
#include <string.h>

int main() {
    int arrcoun;
    int altermain[arrcoun];
    int i;
    int polyester;
    int maxarray;
    int minarray;
    char command[100];

    printf("Item count inside the array: \t");
    scanf("%d",&arrcoun);
    if (arrcoun <= 2) {
        printf("Array count must be greater than 2.\n");
        printf("This is due to an weird bug.\n");
        printf("Please restart the program and try again.\n");
        printf("For more information, please type 'help' and press Enter.\n");
        scanf("%s",command);
        if (strcmp(command, "help") == 0) {
            printf("This program is designed to find the maximum and minimum values in an array of integers.\n");
            printf("You will be prompted to enter the number of items in the array (must be greater than 2).\n");
            printf("Then, you will be asked to input each item in the array.\n");
            printf("Finally, the program will display the maximum and minimum values found in the array.\n");
            printf("The reason for requiring more than 2 items is that with only 2 items, the program would hallucinate two more values for no reason. This is a bug, not a feature.\n");
        };
        return 1;
    };
    for (i=0;i<arrcoun;i++) {
        printf("Item number %d's content: \t",i);
        scanf("%d",&polyester);
        altermain[i] = polyester;
    };
    maxarray = altermain[0];
    minarray = altermain[0];
    for (i=0;i<arrcoun;i++) {
        if (altermain[i] > maxarray) {
            maxarray = altermain[i];
        };
        if (altermain[i] < minarray) {
            minarray = altermain[i];
        };
    };
    
    printf("Max amount in the array: %d\n",maxarray);
    printf("Min amount in the array: %d\n",minarray);

    return 0;
}