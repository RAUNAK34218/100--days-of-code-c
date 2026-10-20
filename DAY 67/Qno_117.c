#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int first[MAX_SIZE], second[MAX_SIZE];
    int first_count, second_count;
    if (scanf("%d %d", &first_count, &second_count) != 2 ||
        first_count < 0 || second_count < 0 ||
        first_count > MAX_SIZE || second_count > MAX_SIZE)
        return 1;
    for (int i = 0; i < first_count; ++i) {
        if (scanf("%d", &first[i]) != 1)
            return 1;
    }
    for (int i = 0; i < second_count; ++i) {
        if (scanf("%d", &second[i]) != 1)
            return 1;
    }

    putchar('[');
    int i = 0, j = 0, printed = 0;
    while (i < first_count && j < second_count) {
        int value;
        if (first[i] <= second[j])
            value = first[i++];
        else
            value = second[j++];
        printf("%s%d", printed++ == 0 ? "" : ", ", value);
    }
    while (i < first_count)
        printf("%s%d", printed++ == 0 ? "" : ", ", first[i++]);
    while (j < second_count)
        printf("%s%d", printed++ == 0 ? "" : ", ", second[j++]);
    puts("]");
    return 0;
}
