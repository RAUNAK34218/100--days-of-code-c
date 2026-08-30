#include <stdio.h>

int main() {
    float cp, sp, amount, per;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        amount = sp - cp;
        per = (amount / cp) * 100;
        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%", per);
    }
    else if (cp > sp) {
        amount = cp - sp;
        per = (amount / cp) * 100;
        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%", per);
    }
    else {
        printf("No Profit No Loss");
    }
    return 0;
}
