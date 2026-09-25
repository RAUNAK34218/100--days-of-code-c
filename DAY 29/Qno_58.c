#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max = arr[0]; // assume first is max
    int min = arr[0]; // assume first is min

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Maximum = %d\nMinimum = %d", max, min);
    return 0;
}
/*
Input: 5 -> 4 2 9 1 5
Output: Maximum=9 Minimum=1
*/