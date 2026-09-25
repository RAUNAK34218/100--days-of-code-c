#include <stdio.h>
int main() {
    int r, c;
    int mat[10][10], rowSum[10];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            rowSum[i] += mat[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum[i]);
    }
    return 0;
}