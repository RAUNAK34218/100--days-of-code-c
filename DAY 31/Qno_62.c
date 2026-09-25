#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    // swapping logic
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
/*
Input: 5 -> 1 2 3 4 5
Output: 5 4 3 2 1
*/