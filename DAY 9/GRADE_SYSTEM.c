#include <stdio.h>

int main() {
    float per;
    printf("Enter percentage (0-100): ");
    scanf("%f", &per);

    if (per < 0 || per > 100) {
        printf("Invalid percentage");
    }
    else if (per >= 90) {
        printf("Grade A");
    }
    else if (per >= 80) {
        printf("Grade B");
    }
    else if (per >= 70) {
        printf("Grade C");
    }
    else if (per >= 60) {
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }
    return 0;
}
