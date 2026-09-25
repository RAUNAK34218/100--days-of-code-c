#include <stdio.h>
int main() {
    char str[100];
    printf("Enter string: ");
    gets(str); // or fgets
    int count = 0;
    while (str[count]!= '\0') {
        count++;
    }
    printf("Length = %d", count);
    return 0;
}