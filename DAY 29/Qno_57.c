#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // adding to sum
    }
    printf("Sum = %d", sum);
    return 0;
}
/*
Input: 5 -> 1 2 3 4 5
Output: Sum = 15
*/