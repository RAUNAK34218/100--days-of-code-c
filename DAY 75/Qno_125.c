#include <stdio.h>

int main() {
    char text[200];
    FILE *fp = fopen("info.txt", "a");
    printf("Enter a line: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);
    printf("Text appended.\n");
    return 0;
}