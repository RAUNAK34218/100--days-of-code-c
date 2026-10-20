#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[4096];
    if (fgets(name, sizeof name, stdin) == NULL)
        return 1;
    name[strcspn(name, "\r\n")] = '\0';

    size_t starts[2048], ends[2048], words = 0, i = 0;
    while (name[i] != '\0') {
        while (name[i] != '\0' && isspace((unsigned char)name[i]))
            ++i;
        if (name[i] == '\0')
            break;
        if (words == sizeof starts / sizeof starts[0])
            return 1;
        starts[words] = i;
        while (name[i] != '\0' && !isspace((unsigned char)name[i]))
            ++i;
        ends[words++] = i;
    }

    for (size_t word = 0; word + 1 < words; ++word)
        printf("%c. ", name[starts[word]]);
    if (words > 0)
        printf("%.*s", (int)(ends[words - 1] - starts[words - 1]),
               name + starts[words - 1]);
    putchar('\n');
    return 0;
}
