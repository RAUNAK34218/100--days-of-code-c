#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int found = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product = product * i;
        found = 1;
    }

    if(found == 0)
        printf("No even numbers in range");
    else
        printf("Product of even numbers from 1 to %d = %lld", n, product);

    return 0;
}
