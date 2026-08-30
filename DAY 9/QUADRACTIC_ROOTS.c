#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c; // discriminant

    if (d > 0) {
        printf("Real and Distinct Roots\n");
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Root1 = %.2f\nRoot2 = %.2f", r1, r2);
    }
    else if (d == 0) {
        printf("Real and Equal Roots\n");
        r1 = -b / (2*a);
        printf("Root1 = Root2 = %.2f", r1);
    }
    else {
        printf("Imaginary Roots (Complex)\n");
        printf("Root1 = %.2f + i%.2f\n", -b/(2*a), sqrt(-d)/(2*a));
        printf("Root2 = %.2f - i%.2f", -b/(2*a), sqrt(-d)/(2*a));
    }
    return 0;
}

