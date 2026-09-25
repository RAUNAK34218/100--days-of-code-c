#include <stdio.h>

int main() {
    long long binary;
    printf("Enter binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;
    long long onesComp = 0;
    long long place = 1;
    int digits = 0;
    int isValid = 1;

    if (temp == 0) {
        printf("1's Complement: 1");
        return 0;
    }

    // First, count digits and check if valid binary
    long long t1 = temp;
    while (t1 > 0) {
        int d = t1 % 10;
        if (d != 0 && d != 1) {
            isValid = 0;
            break;
        }
        digits++;
        t1 /= 10;
    }

    if (!isValid) {
        printf("Invalid binary number! Only 0 and 1 allowed.");
        return 0;
    }

    // Find 1's complement
    while (temp > 0) {
        int d = temp % 10;
        int flipped;

        if (d == 0) flipped = 1;
        else flipped = 0;

        onesComp = onesComp + flipped * place;
        place = place * 10;
        temp = temp / 10;
    }

    // To preserve leading zeros (like 1010 -> 0101 not 101)
    // We print with same number of digits as input
    printf("1's Complement: ");
    
    // Calculate digits of complement
    long long t2 = onesComp;
    int compDigits = 0;
    if (t2 == 0) compDigits = 1;
    else {
        while (t2 > 0) {
            compDigits++;
            t2 /= 10;
        }
    }
    
    // Print leading zeros if needed
    for (int i = 0; i < digits - compDigits; i++) {
        printf("0");
    }
    printf("%lld", onesComp);

    return 0;
}