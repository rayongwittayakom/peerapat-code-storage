#include <stdio.h>

int main() { 
    int i;
    int j = 0;
    for (i=1; i<20; i++) {
        printf("%d\n",i);
        if (i%2!=0) {
            j += i;
            printf("%d\n",j);
        }
    }
    printf("%d\n",j);
    return 0;
}