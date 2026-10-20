#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[4096];
    if (fgets(sentence, sizeof sentence, stdin) == NULL)
        return 1;

    size_t longest_start = 0, longest_length = 0;
    size_t i = 0;
    while (sentence[i] != '\0') {
        while (sentence[i] != '\0' && isspace((unsigned char)sentence[i]))
            ++i;
        size_t start = i;
        while (sentence[i] != '\0' && !isspace((unsigned char)sentence[i]))
            ++i;
        size_t length = i - start;
        if (length > longest_length) {
            longest_start = start;
            longest_length = length;
        }
    }

    if (longest_length > 0)
        printf("%.*s", (int)longest_length, sentence + longest_start);
    putchar('\n');
    return 0;
}
