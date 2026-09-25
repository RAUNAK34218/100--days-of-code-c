#include <stdio.h>
int main() {
    int r, c, sum = 0;
    int mat[10][10];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum += mat[i][j];

    printf("Sum = %d", sum);
    return 0;
}
/*
Input: 2x2 -> 1 2 / 3 4 => Sum=10
*/