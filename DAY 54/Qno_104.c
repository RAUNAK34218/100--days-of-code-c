#include <stdio.h>

int main(void)
{
    long long n;
    if (scanf("%lld", &n) != 1 || n <= 0 || n > 4294967295LL)
        return 1;

    long long total = (n % 2 == 0) ? (n / 2) * (n + 1)
                                   : n * ((n + 1) / 2);
    long long low = 1, high = n;
    while (low <= high) {
        long long middle = low + (high - low) / 2;
        long long quotient = total / middle;
        if (middle == quotient && total % middle == 0) {
            printf("%lld\n", middle);
            return 0;
        }
        if (middle > quotient)
            high = middle - 1;
        else
            low = middle + 1;
    }

    puts("-1");
    return 0;
}
