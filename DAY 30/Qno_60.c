#include <stdio.h>
int main() {
    int n, pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }
    printf("Positive=%d Negative=%d Zero=%d", pos, neg, zero);
    return 0;
}
/*
Input: 5 -> 1 -2 0 4 -1 => Pos=2 Neg=2 Zero=1
*/