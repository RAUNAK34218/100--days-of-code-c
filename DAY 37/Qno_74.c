#include <stdio.h>
int main() {
    int r, c;
    int mat[10][10], trans[10][10];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // transpose logic
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            trans[j][i] = mat[i][j];

    printf("Transpose:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}