// ด.ช.พีรพัฒน์ ศิริ ม.1/3 เลขที่ 18 เลขประจำตัว 44522

#include <stdio.h> // do not delete this line
#include <string.h> // and this one too

int main() {
    char namearr[5][50]; // didnt knew i needed char!
    int i; // loop variable for the for loop

    for (i = 0; i < 5; i++) { // stdin loop
        printf("Please enter the name of person %d: ", i + 1);
        fgets(namearr[i], sizeof(namearr[i]), stdin);
        namearr[i][strcspn(namearr[i], "\n")] = '\0';
    }

    printf("The names of the people are: \n");
    for (i = 0; i < 5; i++) { // stdout loop
        printf("Person %d's name is: %s\n", i + 1, namearr[i]);
    }

    return 0;
}