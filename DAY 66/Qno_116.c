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

    for (int i = 0; i < count; ++i) {
        for (int j = i + 1; j < count; ++j) {
            if ((long long)values[i] + values[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    puts("-1 -1");
    return 0;
}
