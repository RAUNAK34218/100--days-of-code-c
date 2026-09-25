#include <stdio.h>
int main() {
    int n, key;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    int pos = n; // default at end
    for (int i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
    }
    // shift elements to right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    n++;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
/*
Input: 5 -> 10 20 30 50 60, key=40 => 10 20 30 40 50 60
*/