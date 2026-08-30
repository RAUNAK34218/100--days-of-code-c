#include <stdio.h>
int main() {
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n < 0 ? -n : n;

    while(temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if(n < 0) rev = -rev;
    printf("Reverse = %d", rev);
    return 0;
}
