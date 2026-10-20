#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char name[4096];
    if (fgets(name, sizeof name, stdin) == NULL)
        return 1;

    int printed = 0;
    for (size_t i = 0; name[i] != '\0';) {
        while (name[i] != '\0' && isspace((unsigned char)name[i]))
            ++i;
        if (name[i] == '\0')
            break;
        if (printed)
            putchar(' ');
        printf("%c.", name[i]);
        ++printed;
        while (name[i] != '\0' && !isspace((unsigned char)name[i]))
            ++i;
    }
    putchar('\n');
    return 0;
}
