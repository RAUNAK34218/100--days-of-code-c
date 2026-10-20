#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

static int compare_ints(const void *left, const void *right)
{
    int a = *(const int *)left;
    int b = *(const int *)right;
    return (a > b) - (a < b);
}

int main(void)
{
    int values[MAX_SIZE], count, k;
    if (scanf("%d", &count) != 1 || count < 0 || count > MAX_SIZE)
        return 1;
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }
    if (scanf("%d", &k) != 1)
        return 1;
    if (k < 1 || k > count) {
        puts("-1");
        return 0;
    }

    qsort(values, (size_t)count, sizeof values[0], compare_ints);
    printf("%d\n", values[k - 1]);
    return 0;
}
