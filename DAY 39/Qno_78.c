#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int mat[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < n; i++) {
        sum += mat[i][i]; // main diagonal condition i==j
    }
    printf("Sum of diagonal = %d", sum);
    return 0;
}