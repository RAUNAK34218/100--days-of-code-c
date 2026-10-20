#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[4096], second[4096];
    if (scanf("%4095s %4095s", first, second) != 2)
        return 1;

    size_t length = strlen(first);
    if (length != strlen(second)) {
        puts("Not rotation");
        return 0;
    }

    int rotation = 0;
    for (size_t offset = 0; offset < length && !rotation; ++offset) {
        size_t i = 0;
        while (i < length && first[(offset + i) % length] == second[i])
            ++i;
        rotation = (i == length);
    }

    puts(rotation ? "Rotation" : "Not rotation");
    return 0;
}
