#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int values[MAX_SIZE], count;
    if (scanf("%d", &count) != 1 || count < 0 || count > MAX_SIZE)
        return 1;
    long long total = 0;
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1)
            return 1;
        total += values[i];
    }

    long long left = 0;
    for (int i = 0; i < count; ++i) {
        if (left == total - left - values[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += values[i];
    }
    puts("-1");
    return 0;
}
