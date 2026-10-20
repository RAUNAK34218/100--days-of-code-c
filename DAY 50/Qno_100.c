#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[4096];
    if (scanf("%4095s", text) != 1)
        return 1;

    size_t length = strlen(text);
    for (size_t start = 0; start < length; ++start) {
        for (size_t end = start; end < length; ++end)
            printf("%.*s\n", (int)(end - start + 1), text + start);
    }
    return 0;
}
