#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int values[MAX_SIZE], count;
    long long products[MAX_SIZE];
    if (scanf("%d", &count) != 1 || count < 0 || count > MAX_SIZE)
        return 1;
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }

    long long prefix = 1;
    for (int i = 0; i < count; ++i) {
        products[i] = prefix;
        prefix *= values[i];
    }
    long long suffix = 1;
    for (int i = count - 1; i >= 0; --i) {
        products[i] *= suffix;
        suffix *= values[i];
    }

    putchar('[');
    for (int i = 0; i < count; ++i)
        printf("%s%lld", i == 0 ? "" : ",", products[i]);
    puts("]");
    return 0;
}
