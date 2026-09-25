#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    k = k % n; // handle k > n

    // rotate k times
    for (int r = 0; r < k; r++) {
        int lastElement = arr[n - 1];
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = lastElement;
    }

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
/*
Input: 5 -> 1 2 3 4 5, k=2 => 4 5 1 2 3
*/