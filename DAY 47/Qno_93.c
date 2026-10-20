#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[4096], second[4096];
    int frequency[256] = {0};

    if (scanf("%4095s %4095s", first, second) != 2)
        return 1;
    if (strlen(first) != strlen(second)) {
        puts("Not anagrams");
        return 0;
    }

    for (size_t i = 0; first[i] != '\0'; ++i) {
        ++frequency[(unsigned char)first[i]];
        --frequency[(unsigned char)second[i]];
    }
    for (int i = 0; i < 256; ++i) {
        if (frequency[i] != 0) {
            puts("Not anagrams");
            return 0;
        }
    }

    puts("Anagrams");
    return 0;
}
