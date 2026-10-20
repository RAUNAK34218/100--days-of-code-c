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

    int windows = count - window + 1;
    for (int start = 0; start < windows; ++start) {
        int first_negative = 0;
        for (int i = start; i < start + window; ++i) {
            if (values[i] < 0) {
                first_negative = values[i];
                break;
            }
        }
        printf("%s%d", start == 0 ? "" : " ", first_negative);
    }
    putchar('\n');
    return 0;
}
