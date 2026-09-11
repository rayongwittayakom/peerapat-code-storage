// ด.ช.พีรพัฒน์ ศิริ ม.1/3 เลขที่ 18 เลขประจำตัว 44522

#include <stdio.h> // standard input output library obviously included, duh 
#include <string.h> // i wonder why c doesnt have string built in?

int main() {
    char str[20]; // i bet you can't find a person with name longer than 20 characters >:D
    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin); // fgets is superior to get and scanf lol :D
    printf("Name entered: %s", str);
    int length = strlen(str); // strlen kinda suck for not having option to subtract the newline character, so I shall do it MY WAY >:)
    printf("Length of the string: %d\n", length-1); // Subtract 1 to exclude the newline character :)
    return 0;
}