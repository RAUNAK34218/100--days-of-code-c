#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    long long n;
    printf("Enter number: ");
    scanf("%lld", &n);

    long long temp = n;
    if (temp < 0) temp = -temp;

    long long product = 1;
    int hasOdd = 0;

    // Special case for 0
    if (temp == 0) {
        printf("1 (no odd digits, assume 1)");
        return 0;
    }

    while (temp > 0) {
        int digit = temp % 10;  // get last digit

        if (digit % 2 != 0) {   // check odd
            product = product * digit;
            hasOdd = 1;
        }
        temp = temp / 10;       // remove last digit
    }

    // If no odd digits found, product will remain 1
    if (hasOdd == 0) {
        printf("1 (no odd digits, assume 1)");
    } else {
        printf("%lld", product);
    }

    return 0;
}