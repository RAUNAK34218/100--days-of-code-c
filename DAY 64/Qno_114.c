#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[4096];
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    size_t length = strcspn(text, "\r\n");
    int last_seen[256];
    for (int i = 0; i < 256; ++i)
        last_seen[i] = -1;

    size_t start = 0, maximum = 0;
    for (size_t i = 0; i < length; ++i) {
        unsigned char character = (unsigned char)text[i];
        if (last_seen[character] >= 0 && (size_t)last_seen[character] >= start)
            start = (size_t)last_seen[character] + 1;
        last_seen[character] = (int)i;
        size_t current = i - start + 1;
        if (current > maximum)
            maximum = current;
    }

    printf("%zu\n", maximum);
    return 0;
}
