#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int values[MAX_SIZE], count, window;
    if (scanf("%d", &count) != 1 || count < 0 || count > MAX_SIZE)
        return 1;
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }
    if (scanf("%d", &window) != 1)
        return 1;
    if (window <= 0 || window > count) {
        puts("-1");
        return 0;
    }

    long long sum = 0;
    for (int i = 0; i < window; ++i)
        sum += values[i];
    long long maximum = sum;
    for (int i = window; i < count; ++i) {
        sum += (long long)values[i] - values[i - window];
        if (sum > maximum)
            maximum = sum;
    }
    printf("%lld\n", maximum);
    return 0;
}
