#include <stdio.h>

int main() {
    char src[100], dest[100];
    int c;
    printf("Source file: ");
    scanf("%s", src);
    printf("Destination file: ");
    scanf("%s", dest);
    FILE *fs = fopen(src, "r");
    if (fs == NULL) { printf("Cannot open source file.\n"); return 1; }
    FILE *fd = fopen(dest, "w");
    while ((c = fgetc(fs)) != EOF)
        fputc(c, fd);
    fclose(fs);
    fclose(fd);
    printf("File copied.\n");
    return 0;
}