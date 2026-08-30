#include <stdio.h>

int main() {
    int unit;
    int bill;
    printf("Enter units consumed: ");
    scanf("%d", &unit);

    if (unit <= 100) {
        bill = unit * 5;
    }
    else if (unit <= 200) {
        bill = 100*5 + (unit-100)*7;
    }
    else if (unit <= 300) {
        bill = 100*5 + 100*7 + (unit-200)*10;
    }
    else {
        bill = 100*5 + 100*7 + 100*10 + (unit-300)*12;
    }

    printf("Total Bill = %d Rs", bill);
    return 0;
}
