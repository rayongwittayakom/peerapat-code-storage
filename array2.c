#include <stdio.h> // the essential obviously included
#include <string.h> // not essential for c but essential for this program, so obviously included

int main() {
    int rows; // okay, this is the most normal line
    int columes; // misspelling that i will not fix LOOOL
    int data; // why does this fucking exist???
    int sum = 0; // reset the sum to 0, because it was not initialized and it was causing problems XD
    int i; // this IS the real loop variable but oh well
    int k; // dont ask me why k exists, i have no idea

    printf("Amount of row: \t");
    scanf("%d",&rows); // im too lazy to switch to get or fgets lmao
    printf("Amount of columns: \t");
    scanf("%d",&columes); // same goes for this
    int matrix[rows][columes]; // i accidentally swapped the rows and the columns in the last commit btw
    for (k=0;k<rows;k++) { // i have no idea how any of this works, but it does so i guess its fine
        for (i=0;i<columes;i++) { // same goes for this one, but i think i understand it a little bit more than the previous one
            printf("Please enter the content of field %d_%d\n",k,i); // very unique format lol, i bet no one has ever used this format before, but i think it works so i guess its fine
            scanf("%d",&data); // i should probably check if the input is valid, but i don't feel like it so i won't
            matrix[k][i] = data; // why does this work? i don't know, but it does so i guess its fine
            sum += matrix[k][i]; // i was supposed to sum this outside the loop but oh well, it works so i guess its fine
            printf("Confirming: %d\n",matrix[k][i]); // confirming for no reason other than to make sure the program is working as intended, which it is so far
        };
    };
    printf("Sum: %d\n", sum); // it had one job, and it did it, so i guess its fine
}