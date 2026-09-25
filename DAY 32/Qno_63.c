#include <stdio.h>
int main() {
    int n1, n2;
    int a[100], b[100], c[200];

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    // merging
    for (int i = 0; i < n1; i++) c[i] = a[i];
    for (int i = 0; i < n2; i++) c[n1 + i] = b[i];

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) printf("%d ", c[i]);
    return 0;
}
/*
Input: a=3 -> 1 2 3, b=3 -> 4 5 6
Output: 1 2 3 4 5 6
*/