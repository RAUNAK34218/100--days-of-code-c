#include <stdio.h>

int main() {
    float a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // space before %c is important

    switch(op) {
        case '+':
            printf("Result = %.2f", a + b);
            break;
        case '-':
            printf("Result = %.2f", a - b);
            break;
        case '*':
            printf("Result = %.2f", a * b);
            break;
        case '/':
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Error! Division by zero");
            break;
        case '%':
            if((int)b != 0)
                printf("Result = %d", (int)a % (int)b);
            else
                printf("Error! Mod by zero");
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}

