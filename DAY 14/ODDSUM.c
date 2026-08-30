#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (2*i - 1); // 1, 3, 5, 7...
    }

    printf("Sum of first %d odd numbers = %d", n, sum);
    // Note: sum is also = n*n
    return 0;
}
