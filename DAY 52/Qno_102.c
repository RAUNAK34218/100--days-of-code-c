#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int values[MAX_SIZE], count, target;
    if (scanf("%d", &count) != 1 || count < 0 || count > MAX_SIZE)
        return 1;
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }
    if (scanf("%d", &target) != 1)
        return 1;

    int low = 0, high = count;
    while (low < high) {
        int middle = low + (high - low) / 2;
        if (values[middle] < target)
            low = middle + 1;
        else
            high = middle;
    }
    printf("%d\n", low == count ? -1 : low);
    return 0;
}
