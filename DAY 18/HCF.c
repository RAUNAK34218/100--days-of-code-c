#include <stdio.h>

int main() {
    int a, b, i, hcf = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Method 1: Simple loop (as per your series)
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d", a, b, hcf);
    return 0;
}

