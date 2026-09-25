#include <stdio.h>
#include <stdlib.h> // for abs
int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    num = llabs(num); // absolute value

    int freq[10] = {0}; // frequency of 0-9

    if (num == 0) freq[0] = 1;

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxFreq = 0, maxDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }
    printf("Digit %d occurs most, %d times", maxDigit, maxFreq);
    return 0;
}
/*
Input: 122333
Output: Digit 3 occurs most, 3 times
*/