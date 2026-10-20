#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int values[MAX_SIZE], count;
    if (scanf("%d", &count) != 1 || count < 0 || count > MAX_SIZE)
        return 1;
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }

    for (int i = 0; i < count; ++i) {
        int previous = -1;
        for (int j = i - 1; j >= 0; --j) {
            if (values[j] > values[i]) {
                previous = values[j];
                break;
            }
        }
        printf("%s%d", i == 0 ? "" : ", ", previous);
    }
    putchar('\n');
    return 0;
}
