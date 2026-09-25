#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int mat[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Main diagonal: ");
    for (int i = 0; i < n; i++) printf("%d ", mat[i][i]);

    printf("\nAnti-diagonal: ");
    for (int i = 0; i < n; i++) printf("%d ", mat[i][n - 1 - i]);

    return 0;
}