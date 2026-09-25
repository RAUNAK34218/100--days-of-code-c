#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); // square matrix
    int mat[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int isSymmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j]!= mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }
    if (isSymmetric) printf("Symmetric");
    else printf("Not Symmetric");
    return 0;
}
/*
Input: 2 -> 1 2 / 2 1 => Symmetric
*/