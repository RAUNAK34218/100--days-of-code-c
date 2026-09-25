#include <stdio.h>
int main() {
    int n, pos;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position");
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
/*
Input: 5 -> 1 2 3 4 5, pos=2 => 1 3 4 5
*/