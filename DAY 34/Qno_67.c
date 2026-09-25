#include <stdio.h>
int main() {
    int n, pos, element;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position (1-based) and element: ");
    scanf("%d %d", &pos, &element);

    // shift right from position
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    n++;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
/*
Input: 5 -> 1 2 3 4 5, pos=3 ele=10 => 1 2 10 3 4 5
*/