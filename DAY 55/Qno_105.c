#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int values[MAX_SIZE], count;
    if (scanf("%d", &count) != 1 || count <= 0 || count > MAX_SIZE)
        return 1;
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }

    int candidate = 0, votes = 0;
    for (int i = 0; i < count; ++i) {
        if (votes == 0)
            candidate = values[i];
        votes += (values[i] == candidate) ? 1 : -1;
    }

    int occurrences = 0;
    for (int i = 0; i < count; ++i)
        occurrences += (values[i] == candidate);
    printf("%d\n", occurrences > count / 2 ? candidate : -1);
    return 0;
}
