// ด.ช.พีรพัฒน์ ศิริ ม.1/3 เลขที่ 18 เลขประจำตัว 44522

#include <stdio.h> // i will nullify u if you delete this line, so dont even try
#include <string.h> // and this one too >:(
#include <stdlib.h> // i will nullify u if you delete this line, so dont even try

int main() {
    char firstname[50]; // firstname, duh
    char lastname[50]; // lastname, duh
    char fullname[100]; // fullname, duh
    char temp[100]; // temporary variable, duh
    printf("First name: \t");
    fgets(firstname, sizeof(firstname), stdin); // i shall obtain the firstname from the user, and store it in the variable called firstname
    printf("Last name: \t");
    fgets(lastname, sizeof(lastname), stdin); // i shall obtain the lastname from the user, and store it in the variable called lastname
    firstname[strcspn(firstname, "\n")] = '\0'; // i shall remove the newline character from the firstname, because it is annoying and i dont like it >:(
    lastname[strcspn(lastname, "\n")] = '\0'; // i shall remove the newline character from the lastname, because it is annoying and i dont like it >:(
    snprintf(fullname, sizeof(fullname), "%s %s", firstname, lastname);
    printf("Full name: %s\n", fullname); // i shall print the fullname, because it is the final output of this program
    size_t length = strlen(fullname); // strlen kinda suck for not having option to subtract the newline character, so I shall do it MY WAY >:)
    printf("Length of the string: %zu\n", length-1); // Subtract 1 to exclude the newline character :)
}
