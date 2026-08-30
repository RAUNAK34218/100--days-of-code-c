#include <stdio.h>

int main() {
    int n, binary = 0, place = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    if(n == 0) {
        printf("Binary of 0 = 0");
        return 0;
    }

    while(temp > 0) {
        rem = temp % 2;
        binary = binary + rem * place;
        place = place * 10;
        temp = temp / 2;
    }

    printf("Binary of %d = %d", n, binary);
    return 0;
}
