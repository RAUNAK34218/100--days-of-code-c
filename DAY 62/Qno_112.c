#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count, value;
    if (scanf("%d", &count) != 1 || count <= 0 || count > MAX_SIZE)
        return 1;

    if (scanf("%d", &value) != 1)
        return 1;
    long long current = value, maximum = value;
    for (int i = 1; i < count; ++i) {
        if (scanf("%d", &value) != 1)
            return 1;
        current = current > 0 ? current + value : value;
        if (current > maximum)
            maximum = current;
    }

    printf("%lld\n", maximum);
    return 0;
}
