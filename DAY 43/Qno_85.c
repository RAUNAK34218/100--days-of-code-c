#include <stdio.h>
int main() {
    char str[100];
    gets(str);
    int len = 0;
    while (str[len]!= '\0') len++;

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reversed: %s", str);
    return 0;
}