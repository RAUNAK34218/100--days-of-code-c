#include <stdio.h>
int main() {
    int n, key, found = -1;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i; // position found
            break;
        }
    }
    if (found!= -1) printf("Element found at index %d", found);
    else printf("Element not found");
    return 0;
}
/*
Input: 5 / 10 20 30 40 50 / key=30 => found at index 2
*/