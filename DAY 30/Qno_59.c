#include <stdio.h>
int main() {
    int n, evenCount = 0, oddCount = 0;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) evenCount++;
        else oddCount++;
    }
    printf("Even = %d\nOdd = %d", evenCount, oddCount);
    return 0;
}
/*
Input: 5 -> 1 2 3 4 5 => Even=2 Odd=3
*/