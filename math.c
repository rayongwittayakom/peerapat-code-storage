#include <stdio.h>

int main() {
    int i, math;
    for (math=2;math<256;math++) {
        printf("Currently on multiplication index number %d\n",math);
        for (i=1;i<256;i++) {
            int res = i*math;
            printf("%d * %d = %d\n",math,i,res);
        };
    };
    return 0;
}