#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int mat[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int distinct = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }
    if (distinct) printf("Diagonal elements are distinct");
    else printf("Diagonal elements are NOT distinct");
    return 0;
}