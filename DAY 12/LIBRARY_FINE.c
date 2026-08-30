#include <stdio.h>

int main() {
    int late;
    printf("Enter late days: ");
    scanf("%d", &late);

    int fine;

    if (late <= 0) {
        printf("No Fine");
    }
    else if (late <= 5) {
        fine = late * 2;
        printf("Fine = %d Rs", fine);
    }
    else if (late <= 10) {
        fine = 5*2 + (late-5)*4;
        printf("Fine = %d Rs", fine);
    }
    else if (late <= 30) {
        fine = 5*2 + 5*4 + (late-10)*6;
        printf("Fine = %d Rs", fine);
    }
    else {
        printf("Membership Cancelled");
    }
    return 0;
}
