#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nNumbers divisible by 3:\n");

    for (i = 0; i < 5; i++) {
        if (numbers[i] % 3 == 0) {
            printf("%d\n", numbers[i]);
        }
    }
    return 0;
}