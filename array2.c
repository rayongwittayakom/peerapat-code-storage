#include <stdio.h>
#include <string.h>

int main() {
    int rows;
    int columes;
    int data;
    int sum = 0;
    int i;
    int k;

    printf("Amount of row: \t");
    scanf("%d",&rows);
    printf("Amount of columns: \t");
    scanf("%d",&columes);
    int matrix[rows][columes];
    for (k=0;k<rows;k++) {
        for (i=0;i<columes;i++) {
            printf("Please enter the content of field %d_%d\n",k,i);
            scanf("%d",&data);
            matrix[k][i] = data;
            sum += matrix[k][i];
            printf("Confirming: %d\n",matrix[k][i]);
        };
    };
    printf("Sum: %d\n", sum);
}