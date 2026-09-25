#include <stdio.h>
int main() {
    int n, key;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found!= -1) printf("Found at index %d", found);
    else printf("Not Found");
    return 0;
}
/*
Input: 5 -> 10 20 30 40 50, key=40 => Found at index 3
*/