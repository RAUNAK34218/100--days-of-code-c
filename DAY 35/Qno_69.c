#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i]!= largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) printf("No second largest");
    else printf("Second largest = %d", secondLargest);
    return 0;
}
/*
Input: 5 -> 10 20 5 8 15 => Second largest=15
*/