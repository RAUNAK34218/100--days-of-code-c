#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[4096];
    if (fgets(sentence, sizeof sentence, stdin) == NULL)
        return 1;

    size_t length = strcspn(sentence, "\r\n");
    sentence[length] = '\0';
    size_t i = 0;
    while (i < length) {
        if (isspace((unsigned char)sentence[i])) {
            ++i;
            continue;
        }
        size_t start = i;
        while (i < length && !isspace((unsigned char)sentence[i]))
            ++i;
        size_t left = start, right = i - 1;
        while (left < right) {
            char temporary = sentence[left];
            sentence[left++] = sentence[right];
            sentence[right--] = temporary;
        }
    }

    puts(sentence);
    return 0;
}
