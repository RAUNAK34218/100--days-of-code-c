#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[4096], second[4096];
    int frequency[26] = {0};
    if (scanf("%4095s %4095s", first, second) != 2)
        return 1;
    if (strlen(first) != strlen(second)) {
        puts("Not Anagram");
        return 0;
    }

    for (size_t i = 0; first[i] != '\0'; ++i) {
        if (first[i] < 'a' || first[i] > 'z' ||
            second[i] < 'a' || second[i] > 'z') {
            puts("Not Anagram");
            return 0;
        }
        ++frequency[first[i] - 'a'];
        --frequency[second[i] - 'a'];
    }
    for (int i = 0; i < 26; ++i) {
        if (frequency[i] != 0) {
            puts("Not Anagram");
            return 0;
        }
    }

    puts("Anagram");
    return 0;
}
